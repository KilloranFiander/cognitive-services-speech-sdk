//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// carbon_test_console.h: Declarations for CarbonTestConsole tool C++ class
//

#pragma once


using namespace CARBON_NAMESPACE_ROOT;
using namespace CARBON_NAMESPACE_ROOT::Recognition;
using namespace CARBON_NAMESPACE_ROOT::Recognition::Speech;
using namespace CARBON_NAMESPACE_ROOT::Recognition::Intent;
using namespace CARBON_NAMESPACE_ROOT::Recognition::Translation;


class CarbonTestConsole
{
public:

    CarbonTestConsole();
    ~CarbonTestConsole();

    int Run(int argc, const wchar_t* argv[]);

private:

    struct ConsoleArgs
    {
        bool m_fWaitForDebugger = false;

        std::string m_strRecognizerType;
        bool m_fCommandSystem = false;
        
        bool m_fMicrophoneInput = true;
        std::wstring m_strInput;

        std::wstring m_strEndpointUri;
        std::wstring m_strSubscriptionKey;

        bool m_fRecognizeAsync = false;

        bool m_fContinuousRecognition = false;
        std::wstring m_strContinuousRecognitionSeconds;
        uint16_t m_continuousRecognitionSeconds = 0;

        std::wstring m_strRunSampleName;

        bool m_fInteractivePrompt = false;
    };

    bool ParseConsoleArgs(int argc, const wchar_t* argv[], ConsoleArgs* pconsoleArgs);
    bool ValidateConsoleArgs(ConsoleArgs* pconsoleArgs);
    void ProcessConsoleArgs(ConsoleArgs* pconsoleArgs);

    void DisplayConsoleHeader();
    void DisplayConsoleUsage();
    void DisplayConsolePrompt();

    void ConsoleWrite(const wchar_t* psz, ...);
    void ConsoleWriteLine(const wchar_t* pszFormat, ...);
    bool ConsoleReadLine(std::wstring& str);

    bool GetConsoleInput(std::wstring& str);
    void ProcessConsoleInput(const wchar_t* psz);

    void ConsoleInput_Help();
    void ConsoleInput_HelpOn(const wchar_t* psz);
    void ConsoleInput_HelpOnFactory();
    void ConsoleInput_HelpOnRecognizer();
    void ConsoleInput_HelpOnSpeech();
    void ConsoleInput_HelpOnIntent();
    void ConsoleInput_HelpOnSession();
    void ConsoleInput_HelpOnCommandSystem();

    void ConsoleInput_Factory(const wchar_t* psz);
    void ConsoleInput_Recognizer(const wchar_t* psz, std::shared_ptr<BaseAsyncRecognizer>& recognizer);
    void ConsoleInput_SpeechRecognizer(const wchar_t* psz, std::shared_ptr<SpeechRecognizer>& speechRecognizer);
    void ConsoleInput_IntentRecognizer(const wchar_t* psz, std::shared_ptr<IntentRecognizer>& intentRecognizer);

    void Factory_CreateSpeechRecognizer(const wchar_t* psz);

    template <class T>
    void Recognizer_IsEnabled(std::shared_ptr<T>& recognizer);

    template <class T>
    void Recognizer_Enable(std::shared_ptr<T>& recognizer);

    template <class T>
    void Recognizer_Disable(std::shared_ptr<T>& recognizer);

    template <class T>
    void Recognizer_Recognize(std::shared_ptr<T>& recognizer);
    void Recognizer_Recognize(std::shared_ptr<SpeechRecognizer>& recognizer);
    void Recognizer_Recognize(std::shared_ptr<TranslationRecognizer>& recognizer);

    template <class T>
    void Recognizer_StartContinuousRecognition(std::shared_ptr<T>& recognizer);

    template <class T>
    void Recognizer_StopContinuousRecognition(std::shared_ptr<T>& recognizer);

    template <class T>
    void Recognizer_Event(const wchar_t* psz, EventSignal<T>& recognizerEvent, typename::EventSignal<T>::CallbackFunction callback);

    void Recognizer_SessionStartedHandler(const SessionEventArgs& e) { ConsoleWriteLine(L"SessionStartedHandler: %ls", e.SessionId.c_str()); };
    void Recognizer_SessionStoppedHandler(const SessionEventArgs& e) { ConsoleWriteLine(L"SessionStoppedHandler: %ls", e.SessionId.c_str()); };
    void Recognizer_SoundStartedHandler(const SessionEventArgs& e) { UNUSED(e); };
    void Recognizer_SoundStoppedHandler(const SessionEventArgs& e) { UNUSED(e); };

    void Recognizer_IntermediateResultHandler(const RecognitionEventArgs& e) { UNUSED(e); };
    void Recognizer_FinalResultHandler(const RecognitionEventArgs& e) { UNUSED(e); };
    void Recognizer_NoMatchHandler(const RecognitionEventArgs& e) { UNUSED(e); };
    void Recognizer_CanceledHandler(const RecognitionEventArgs& e) { UNUSED(e); };

    void SpeechRecognizer_IntermediateResultHandler(const SpeechRecognitionEventArgs& e) { ConsoleWriteLine(L"IntermediateResultHandler: %ls", ToString(e).c_str()); };
    void SpeechRecognizer_FinalResultHandler(const SpeechRecognitionEventArgs& e) { ConsoleWriteLine(L"FinalResultHandler: %ls", ToString(e).c_str());}
    void SpeechRecognizer_NoMatchHandler(const SpeechRecognitionEventArgs& e) { ConsoleWriteLine(L"NoMatchHandler: %ls", ToString(e).c_str()); }
    void SpeechRecognizer_CanceledHandler(const SpeechRecognitionEventArgs& e) { UNUSED(e); ConsoleWriteLine(L"SpeechRecognizer_CanceledHandler!!!"); };

    void TranslationRecognizer_IntermediateResultHandler(const TranslationEventArgs<TranslationTextResult>& e) { ConsoleWriteLine(L"Translation IntermediateResultHandler: %ls", ToString(e).c_str()); };
    void TranslationRecognizer_FinalResultHandler(const TranslationEventArgs<TranslationTextResult>& e) { ConsoleWriteLine(L"Translation FinalResultHandler: %ls", ToString(e).c_str()); }
    void TranslationRecognizer_AudioResultHandler(const TranslationEventArgs<AudioResult>& e) { ConsoleWriteLine(L"Translation AudioResultHandler: %ls", ToString(e).c_str()); }
    void TranslationRecognizer_ErrorHandler(const TranslationEventArgs<TranslationResult>& e) { ConsoleWriteLine(L"Translation ErrorHandler: %ls", ToString(e).c_str()); }

    void IntentRecognizer_IntermediateResultHandler(const int& e) { UNUSED(e); };
    void IntentRecognizer_FinalResultHandler(const int& e) { UNUSED(e); };
    void IntentRecognizer_NoMatchHandler(const int& e) { UNUSED(e); };
    void IntentRecognizer_CanceledHandler(const int& e) { UNUSED(e); };

    bool ToBool(const wchar_t* psz);

    std::wstring ToString(bool f);
    std::wstring ToString(const SpeechRecognitionEventArgs& e);
    std::wstring ToString(const TranslationEventArgs<TranslationTextResult>& e);
    std::wstring ToString(const TranslationEventArgs<AudioResult>& e);
    std::wstring ToString(const TranslationEventArgs<TranslationResult>& e);

    void ConsoleInput_Session(const wchar_t*);

    void Session_FromSpeechRecognizer();

    template <class T>
    void Parameters_SetString(std::shared_ptr<T> thingWithParameters, const wchar_t* psz);

    template <class T>
    void Parameters_GetString(std::shared_ptr<T> thingWithParameters, const wchar_t* psz);

    template <class T>
    void Parameters_SetNumber(std::shared_ptr<T> thingWithParameters, const wchar_t* psz);

    template <class T>
    void Parameters_GetNumber(std::shared_ptr<T> thingWithParameters, const wchar_t* psz);

    template <class T>
    void Parameters_SetBool(std::shared_ptr<T> thingWithParameters, const wchar_t* psz);

    template <class T>
    void Parameters_GetBool(std::shared_ptr<T> thingWithParameters, const wchar_t* psz);

    void ConsoleInput_CommandSystem(const wchar_t* psz);

    bool ShouldInitCarbon() { return m_recognizer == nullptr; }
    void EnsureInitCarbon(ConsoleArgs* pconsoleArgs);

    void InitCarbon(ConsoleArgs* pconsoleArgs);
    void TermCarbon();

    void InitRecognizer(const std::string& recognizerType, const std::wstring& wavFileName);
    void InitCommandSystem();

    void WaitForDebugger();

    void RecognizeAsync();
    void ContinuousRecognition(uint16_t seconds);

    void RunSample(const std::wstring& strSampleName);

    void RunInteractivePrompt();

    void Sample_HelloWorld();
    void Sample_HelloWorld_WithEvents();
    void Sample_HelloWorld_In_C();

private:

    std::shared_ptr<BaseAsyncRecognizer> m_recognizer;
    std::shared_ptr<SpeechRecognizer> m_speechRecognizer;
    std::shared_ptr<TranslationRecognizer> m_translationRecognizer;
    std::shared_ptr<IntentRecognizer> m_intentRecognizer;
    std::shared_ptr<Session> m_session;
    void* m_commandSystem = nullptr;
};
