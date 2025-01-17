# Quickstart: Recognize speech from a microphone in Objective-C on iOS

This sample demonstrates how to recognize speech with Objective-C using the Speech SDK for iOS.
See the [accompanying article](https://docs.microsoft.com/en-us/azure/cognitive-services/speech-service/get-started-text-to-speech?tabs=terminal&pivots=programming-language-objectivec) on the SDK documentation page for step-by-step instructions.

## Prerequisites

* A subscription key and region for the Speech service [Create one for free](https://azure.microsoft.com/en-us/free/cognitive-services/)
* [Create a Speech resource](https://ms.portal.azure.com/#create/Microsoft.CognitiveServicesSpeechServices) in the Azure portal.
* Get the resource key and region. After your Speech resource is deployed, select Go to resource to view and manage keys. or  more information about Cognitive Services resources, see [Get the keys for your resource](https://docs.microsoft.com/en-us/azure/cognitive-services/cognitive-services-apis-create-account?tabs=multiservice%2Cwindows#get-the-keys-for-your-resource)
* A Mac with [Xcode](https://geo.itunes.apple.com/us/app/xcode/id497799835?mt=12) version 9.4.1 or later installed as iOS development environment. This tutorial targets iOS versions 9.2 or later.

## Get the Code for the Sample App

* [Download the sample code to your development PC.](/README.md#get-the-samples)

## Get the Speech SDK for iOS

**By downloading the Microsoft Cognitive Services Speech SDK, you acknowledge its license, see [Speech SDK license agreement](https://aka.ms/csspeech/license201809).**

The Cognitive Services Speech SDK for iOS can be downloaded as a zip-file from https://aka.ms/csspeech/iosbinary. Download and copy the files to the `speechsdk` directory in the directory of this `README.md`, i.e. parallel to the `helloworld` directory that contains the Xcode project.

## Build the Sample

Open the `helloworld.xcodeproj` from the sample code.
This loads the project in Xcode.
Next, add your subscription details to the `helloworld/ViewController.m` file:

1. Replace the string `YourSubscriptionKey` with your subscription key.

1. Replace the string `YourServiceRegion` with the [region](https://docs.microsoft.com/azure/cognitive-services/speech-service/regions) associated with your subscription (for example, `westus` for the free trial subscription).

To build the sample app and check if all the paths are set correctly, choose **Product** > **Build** from the menu.

## Run the Sample

To run the sample, click the `Play` button, or select **Product** > **Run** from the menu.
In the simulator window that opens, after you click the "Recognize!" button in the app, you should see the recognized text from the audio file "What's the weather like?" on the lower part of the simulated screen.

## References

* [Quickstart article on the SDK documentation site](https://docs.microsoft.com/en-us/azure/cognitive-services/speech-service/get-started-text-to-speech?tabs=terminal&pivots=programming-language-objectivec)
* [Speech SDK API reference for Objective-C](https://aka.ms/csspeech/objectivecref)
