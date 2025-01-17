# Quickstart: Recognize speech from a file in JavaScript on Node.js.

This sample demonstrates how to recognize speech with the Speech SDK for JavaScript on Node.js.
See the [accompanying article](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstarts/speech-to-text-from-file?tabs=nodejs&pivots=programming-language-javascript) on the SDK documentation page which describes how to build this sample from scratch in your favourite editor.

## Prerequisites

* A subscription key and region for the Speech service [Create one for free](https://azure.microsoft.com/en-us/free/cognitive-services/)
* [Create a Speech resource](https://ms.portal.azure.com/#create/Microsoft.CognitiveServicesSpeechServices) in the Azure portal.
* Get the resource key and region. After your Speech resource is deployed, select Go to resource to view and manage keys. or  more information about Cognitive Services resources, see [Get the keys for your resource](https://docs.microsoft.com/en-us/azure/cognitive-services/cognitive-services-apis-create-account?tabs=multiservice%2Cwindows#get-the-keys-for-your-resource)
* A [Node.js](https://nodejs.org) compatible device.

## Prepare the sample

> Note: more detailed step-by-step instructions are available [here](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstart-js-node).

* [Download the sample code to your development PC.](/README.md#get-the-samples)
* Open a command prompt at the quickstart directory, and run `npm install` to install the dependencies of the quickstart.
  This will place the Speech SDK library in the `node_modules` directory.
* Update the `index.js` file with your configuration:
  * Replace the string `YourSubscriptionKey` with your own subscription key.
  * Replace the string `YourServiceRegion` with the service region of your subscription.
    For example, replace with `westus` if you are using the 30-day free trial subscription.
  * Replace the string `YourAudioFile.wav` with a path to a `.wav` file on your disk **(required format: 16 kHz sample rate, 16 bit samples, mono / single-channel)**.

## Run the sample

Execute `node index.js` from the location where you have downloaded this quickstart.

## References

* [Quickstart article on the SDK documentation site](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstart-js-node)
* [Speech SDK API reference for JavaScript](https://aka.ms/csspeech/javascriptref)
