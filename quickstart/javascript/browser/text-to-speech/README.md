# Quickstart: Using the Speech Service in JavaScript on a Web Browser to synthesize speech to speaker output.

This sample shows how to use the Speech Service using the Speech SDK for JavaScript on a web browser, like Microsoft Edge, or Chrome. It illustrates how the SDK can be used to synthesize speech to speaker output.

* See the [accompanying article](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstarts/text-to-speech?pivots=programming-language-javascript) on the SDK documentation page for step-by-step instructions.

## Prerequisites

* A subscription key and region for the Speech service [Create one for free](https://azure.microsoft.com/en-us/free/cognitive-services/)
  * [Create a Speech resource](https://ms.portal.azure.com/#create/Microsoft.CognitiveServicesSpeechServices) in the Azure portal.
  * Get the resource key and region. After your Speech resource is deployed, select Go to resource to view and manage keys. or  more information about Cognitive Services resources, see [Get the keys for your resource](https://docs.microsoft.com/en-us/azure/cognitive-services/cognitive-services-apis-create-account?tabs=multiservice%2Cwindows#get-the-keys-for-your-resource)
* A PC (Windows x64 or a supported Linux distribution) or Mac (macOS 10.14 or later) 
* A text editor.
* Optionally, a web server that supports hosting PHP scripts.

## Build the sample

* **By downloading the Microsoft Cognitive Services Speech SDK when building this sample, you acknowledge its license, see [Speech SDK license agreement](https://docs.microsoft.com/azure/cognitive-services/speech-service/license).**
* [Download the sample code to your development PC.](/README.md#get-the-samples)

If you want to host the sample on a web server:

* Deploy all files to your web server.
* IMPORTANT: Never add a subscription key to client-side code. For advanced guidance on keeping sensitive subscription info secure, see the [sample using a server-side auth token](https://github.com/Azure-Samples/cognitive-services-speech-sdk/tree/master/samples/js/browser)

## Run the `index.html` sample

* In case you are running the sample from your local computer, open `index.html` from the location where you have downloaded this quickstart with a JavaScript capable browser.
* Use the input fields to set your `subscription key` and `service region`.
* Enter the text to process in the `Input Text` field.
* Press the `Start Text to Speech` button to start parsing text.
  
## Running .html samples
* In case you are hosting the sample on a web server, open a web browser and navigate to the full URL where you host the sample.

> Note: On Safari, the sample web page needs to be hosted on a web server; Safari doesn't allow websites loaded from a local file to use the microphone.

## References

* [Quickstart article on the SDK documentation site](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstart-js-browser)
* [Speech SDK API reference for JavaScript](https://aka.ms/csspeech/javascriptref)
* [Speech SDK Text to Speech](https://docs.microsoft.com/azure/cognitive-services/speech-service/text-to-speech)
