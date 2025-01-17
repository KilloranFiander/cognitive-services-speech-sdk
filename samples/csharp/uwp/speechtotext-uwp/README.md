# Speech-to-text UWP sample

This sample demonstrates various forms of recognizing speech with C# under the Universal Windows Platform using the Speech SDK.

## Prerequisites

* A subscription key and region for the Speech service [Create one for free](https://azure.microsoft.com/en-us/free/cognitive-services/)
* [Create a Speech resource](https://ms.portal.azure.com/#create/Microsoft.CognitiveServicesSpeechServices) in the Azure portal.
* Get the resource key and region. After your Speech resource is deployed, select Go to resource to view and manage keys. or  more information about Cognitive Services resources, see [Get the keys for your resource](https://docs.microsoft.com/en-us/azure/cognitive-services/cognitive-services-apis-create-account?tabs=multiservice%2Cwindows#get-the-keys-for-your-resource)
* A Windows PC with Windows 10 Fall Creators Update (10.0; Build 16299) or later.
  Some sample scenarios require a working microphone.
* [Microsoft Visual Studio 2017](https://www.visualstudio.com/), Community Edition or higher.
* The **Universal Windows Platform development** workload in Visual Studio.  You can enable it in **Tools** \> **Get Tools and Features**.
* Note: processor target ARM is not yet supported.

 

## Build the sample

* **By building this sample you will download the Microsoft Cognitive Services Speech SDK. By downloading you acknowledge its license, see [Speech SDK license agreement](https://aka.ms/csspeech/license201809).**
* [Download the sample code to your development PC.](/README.md#get-the-samples)
* Start Microsoft Visual Studio 2017 and select **File** \> **Open** \> **Project/Solution**.
* Navigate to the folder containing this sample, and select the solution file contained within it.
* Set the active solution configuration and platform to the desired values under **Build** \> **Configuration Manager**:
  * On a 64-bit Windows installation, choose `x64` as active solution platform.
  * On a 32-bit Windows installation, choose `x86` as active solution platform.
* Press Ctrl+Shift+B, or select **Build** \> **Build Solution**.

## Run the sample

To debug the app and then run it, press F5 or use **Debug** \> **Start Debugging**. To run the app without debugging, press Ctrl+F5 or use **Debug** \> **Start Without Debugging**.

The app displays a graphical user interface (GUI).

* Use the **Subscription Key** text field to enter your subscription key.
* In the drop-down below, choose the region associated with your subscription.
* In the drop-down right below the subscription key, choose the input language.
* If you'd like to use your microphone, select **Enable Microphone**, which (first time you're clicking it) launches a permission prompt asking for microphone access.
  Approve it.
* With the other buttons you can launch a specific speech recognition scenario.

> **Note:**
> if you are using your own `.wav` file as input source, make sure it is in the right format.
> Currently, the only supported `.wav` format is **mono (single-channel), 16 kHz sample rate, 16 bits per sample**.
> If you need a sample audio, right-click this [WAV file](https://raw.githubusercontent.com/Azure-Samples/cognitive-services-speech-sdk/f9807b1079f3a85f07cbb6d762c6b5449d536027/samples/cpp/windows/console/samples/whatstheweatherlike.wav) and choose **Save target as**.

## References

* [Speech SDK API reference for C#](https://aka.ms/csspeech/csharpref)
