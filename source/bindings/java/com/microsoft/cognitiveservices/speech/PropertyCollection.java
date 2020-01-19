//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
package com.microsoft.cognitiveservices.speech;

import java.io.Closeable;
import com.microsoft.cognitiveservices.speech.util.Contracts;
import com.microsoft.cognitiveservices.speech.PropertyId;

/**
 * Represents collection of properties and their values.
 */
public class PropertyCollection implements Closeable {

    /*! \cond PROTECTED */

    protected PropertyCollection(com.microsoft.cognitiveservices.speech.internal.PropertyCollection collection) {
        if(collection != null) {
            collectionImpl = collection;
        }
    }

    /*! \endcond */

    /**
     * Returns the property value.
     * If the name is not available, it returns an empty String.
     *
     * @param name The property name.
     * @return value of the property.
     */
    public String getProperty(String name) {
        return getProperty(name, "");
    }

    /**
     * Returns the property value.
     * If the name is not available, it returns a default value.
     *
     * @param name The property name.
     * @param defaultValue The default value which is returned if the property is not available in the collection.
     * @return value of the property.
     */
    public String getProperty(String name, String defaultValue) {
        Contracts.throwIfNull(collectionImpl, "collection");
        Contracts.throwIfNullOrWhitespace(name, "name");
        return collectionImpl.GetProperty(name, defaultValue);
    }

    /**
     * Gets the property's value by its id
     *
     * @param id The speech property id
     * @return The value of the property.
     */
    public String getProperty(PropertyId id) {
        Contracts.throwIfNull(collectionImpl, "collection");
        return collectionImpl.GetProperty(id.getValue());
    }

    /**
     * Sets the property value by name
     *
     * @param name The property name.
     * @param value The value of the property.
     */
    public void setProperty(String name, String value) {
        Contracts.throwIfNull(collectionImpl, "collection");
        Contracts.throwIfNullOrWhitespace(name, "name");
        collectionImpl.SetProperty(name, value);
    }

    /**
     * Sets the property's value by id
     *
     * @param id The property id
     * @param value The value of the parameter.
     */
    public void setProperty(PropertyId id, String value) {
        Contracts.throwIfNull(collectionImpl, "collection");
        Contracts.throwIfNull(value, "value");
        collectionImpl.SetProperty(id.getValue(), value);
    }

    /**
     * Dispose of the associated parameter value collection.
     */
    @Override
    public void close() {

        if (collectionImpl != null) {
            collectionImpl.delete();
        }

        collectionImpl = null;
    }

    private com.microsoft.cognitiveservices.speech.internal.PropertyCollection collectionImpl;
}
