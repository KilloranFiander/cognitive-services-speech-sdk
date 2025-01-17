# Quickstart: Recognize speech from a microphone in Swift on iOS using the Speech SDK

This sample demonstrates how to create an iOS app in Swift using the Cognitive Services Speech SDK to transcribe speech recorded from a microphone to text.

## Prerequisites

* A subscription key and region for the Speech service [Create one for free](https://azure.microsoft.com/en-us/free/cognitive-services/)
* [Create a Speech resource](https://ms.portal.azure.com/#create/Microsoft.CognitiveServicesSpeechServices) in the Azure portal.
* Get the resource key and region. After your Speech resource is deployed, select Go to resource to view and manage keys. or  more information about Cognitive Services resources, see [Get the keys for your resource](https://docs.microsoft.com/en-us/azure/cognitive-services/cognitive-services-apis-create-account?tabs=multiservice%2Cwindows#get-the-keys-for-your-resource)
* A macOS machine with a microphone and [Xcode](https://geo.itunes.apple.com/us/app/xcode/id497799835?mt=12) version 9.4.1 or later and [CocoaPods](https://cocoapods.org/) installed.

## Get the code for the sample app

* [Download the sample code to your development machine.](/README.md#get-the-samples)

## Get the Speech SDK for iOS

**By downloading the Microsoft Cognitive Services Speech SDK, you acknowledge its license, see [Speech SDK license agreement](https://aka.ms/csspeech/license201809).**

The Cognitive Services Speech SDK for iOS is distributed as a xcframework package.
It can be used in Xcode projects as a [CocoaPod](https://cocoapods.org/), or downloaded directly [here](https://aka.ms/csspeech/iosbinary) and linked manually. This guide uses a CocoaPod.
Note that this tutorial will not work without changes for any version earlier than 1.6.0 of the SDK.

## Install the SDK as a CocoaPod

1. Install the CocoaPod dependency manager as described in its [installation instructions](https://guides.cocoapods.org/using/getting-started.html).
1. Navigate to the directory of the downloaded sample app (`helloworld`) in a terminal.
1. Run the command `pod install`. This will generate a `helloworld.xcworkspace` Xcode workspace containing both the sample app and the Speech SDK as a dependency. This workspace will be used in the following.

## Build and Run the Sample

1. Open the `helloworld.xcworkspace` workspace in Xcode.
1. Make the following changes in the `ViewController.swift` file:
    1. Replace the string `YourSubscriptionKey` with your subscription key.
    1. Replace the string `YourServiceRegion` with the [region](https://docs.microsoft.com/azure/cognitive-services/speech-service/regions) associated with your subscription (for example, `westus` for the free trial subscription).
1. Make the debug output visible (**View** > **Debug Area** > **Activate Console**).
1. Build and run the example code by selecting **Product** -> **Run** from the menu or clicking the **Play** button.
1. After you click the button in the app and say a few words, you should see the text you have spoken on the upper part of the screen. When you run the app for the first time, you should be prompted to give the app access to the used microphone.

## Importing Speech SDK as module

This sample uses bridging header (MicrosoftCognitiveServicesSpeech-Bridging-Header.h) to include MicrosoftCognitiveServicesSpeech framework into the app.

Alternatively from 1.16.0 SDK and onwards, you can also import Speech SDK as follows.

import MicrosoftCognitiveServicesSpeech

## References

* [Quickstart article on the SDK documentation site](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstart-swift-ios)
* [Speech SDK API reference for Objective-C](https://aka.ms/csspeech/objectivecref)
