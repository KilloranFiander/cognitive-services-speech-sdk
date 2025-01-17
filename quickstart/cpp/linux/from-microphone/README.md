# Quickstart: Recognize speech in C++ for Linux

This sample demonstrates how to recognize speech with C++ using the Speech SDK for Linux.
See the [Accompanying QuickStart Documentation](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstarts/speech-to-text-from-microphone?tabs=dotnet%2Cx-android%2Clinux%2Cjava-runtime%2Cwindowsinstall&pivots=programming-language-cpp) on the SDK documentation page for step-by-step instructions.

> **Note:**
> We currently only support [specific Linux distributions and target architectures](https://docs.microsoft.com/en-us/azure/cognitive-services/speech-service/quickstarts/setup-platform?tabs=linux%2Cubuntu%2Cdotnet%2Cjre%2Cmaven%2Cnodejs%2Cmac%2Cpypi&pivots=programming-language-csharp).

## Prerequisites

* [Create a Speech Portal](https://ms.portal.azure.com/#create/Microsoft.CognitiveServicesSpeechServices) Create a Speech Portal
* Get the resource key and region. After your Speech resource is deployed, select Go to resource to view and manage keys. For more information about Cognitive Services resources, see [Get the keys for the resource](https://learn.microsoft.com/en-us/azure/cognitive-services/cognitive-services-apis-create-account?tabs=multiservice%2Canomaly-detector%2Clanguage-service%2Ccomputer-vision%2Clinux#get-the-keys-for-your-resource)

* A Linux PC with a working microphone.
* On Ubuntu or Debian, install these packages to build and run this sample:

  ```sh
  sudo apt-get update
  sudo apt-get install build-essential libssl-dev libasound2 wget
  ```

  * On **Ubuntu 22.04 LTS** it is also required to download and install the latest **libssl1.1** package e.g. from http://security.ubuntu.com/ubuntu/pool/main/o/openssl/.

* On RHEL or CentOS, install these packages to build and run this sample:

  ```sh
  sudo yum update
  sudo yum groupinstall "Development tools"
  sudo yum install alsa-lib openssl wget
  ```

  * See also [how to configure RHEL/CentOS 7 for Speech SDK](https://docs.microsoft.com/azure/cognitive-services/speech-service/how-to-configure-rhel-centos-7).

## Build the sample

* [Download the sample code to your development PC.](/README.md#get-the-samples)
* Download and extract the Speech SDK
  * **By downloading the Microsoft Cognitive Services Speech SDK, you acknowledge its license, see [Speech SDK license agreement](https://aka.ms/csspeech/license201809).**
  * Run the following commands after replacing the string `/your/path` with a directory (absolute path) of your choice:

    ```sh
    export SPEECHSDK_ROOT="/your/path"
    mkdir -p "$SPEECHSDK_ROOT"
    wget -O SpeechSDK-Linux.tar.gz https://aka.ms/csspeech/linuxbinary
    tar --strip 1 -xzf SpeechSDK-Linux.tar.gz -C "$SPEECHSDK_ROOT"
    ```
* Navigate to the directory of this sample
* Edit the file `Makefile`:
  * In the line `SPEECHSDK_ROOT:=/change/to/point/to/extracted/SpeechSDK` change the right-hand side to point to the location of your extract Speech SDK for Linux.
  * If you are running on Linux x86 (32-bit), change the line `TARGET_PLATFORM:=x64` to `TARGET_PLATFORM:=x86`.
  * If you are running on Linux ARM64 (64-bit), change the line `TARGET_PLATFORM:=x64` to `TARGET_PLATFORM:=arm64`.
* Edit the `helloworld.cpp` source:
  * Replace the string `YourSubscriptionKey` with your own subscription key.
  * Replace the string `YourServiceRegion` with the service region of your subscription.
    For example, replace with `westus` if you are using the 30-day free trial subscription.
* Run the command `make` to build the sample, the resulting executable will be called `helloworld`.

## Run the sample

To run the sample, you'll need to configure the loader's library path to point to the Speech SDK library.

* On an x64 machine, run:

  ```sh
  export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$SPEECHSDK_ROOT/lib/x64"
  ```

* On an x86 machine, run:

  ```sh
  export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$SPEECHSDK_ROOT/lib/x86"
  ```

* On an ARM64 machine, run:

  ```sh
  export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$SPEECHSDK_ROOT/lib/arm64"
  ```

Run the application:

```sh
./quickstart-linux
```

## References

* [Quickstart article on the SDK documentation site](https://docs.microsoft.com/azure/cognitive-services/speech-service/quickstart-cpp-linux)
* [Speech SDK API reference for C++](https://aka.ms/csspeech/cppref)
