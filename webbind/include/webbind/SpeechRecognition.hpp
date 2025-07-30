#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class SpeechGrammarList;
class SpeechRecognitionPhraseList;
class MediaStreamTrack;
class SpeechRecognitionOptions;


class SpeechRecognitionOptions : public emlite::Val {
  explicit SpeechRecognitionOptions(Handle h) noexcept;
public:
    static SpeechRecognitionOptions take_ownership(Handle h) noexcept;
    explicit SpeechRecognitionOptions(const emlite::Val &val) noexcept;
    SpeechRecognitionOptions() noexcept;
    SpeechRecognitionOptions clone() const noexcept;
    jsbind::TypedArray<jsbind::String> langs() const;
    void langs(const jsbind::TypedArray<jsbind::String>& value);
    bool processLocally() const;
    void processLocally(bool value);
};

class SpeechRecognition : public EventTarget {
    explicit SpeechRecognition(Handle h) noexcept;

public:
    explicit SpeechRecognition(const emlite::Val &val) noexcept;
    static SpeechRecognition take_ownership(Handle h) noexcept;

    SpeechRecognition clone() const noexcept;
    SpeechRecognition();
    SpeechGrammarList grammars() const;
    void grammars(const SpeechGrammarList& value);
    jsbind::String lang() const;
    void lang(const jsbind::String& value);
    bool continuous() const;
    void continuous(bool value);
    bool interimResults() const;
    void interimResults(bool value);
    unsigned long maxAlternatives() const;
    void maxAlternatives(unsigned long value);
    bool processLocally() const;
    void processLocally(bool value);
    SpeechRecognitionPhraseList phrases() const;
    void phrases(const SpeechRecognitionPhraseList& value);
    jsbind::Undefined start(const MediaStreamTrack& audioTrack);
    jsbind::Undefined stop();
    jsbind::Undefined abort();
    static jsbind::Promise<AvailabilityStatus> available(const SpeechRecognitionOptions& options);
    static jsbind::Promise<bool> install(const SpeechRecognitionOptions& options);
    jsbind::Any onaudiostart() const;
    void onaudiostart(const jsbind::Any& value);
    jsbind::Any onsoundstart() const;
    void onsoundstart(const jsbind::Any& value);
    jsbind::Any onspeechstart() const;
    void onspeechstart(const jsbind::Any& value);
    jsbind::Any onspeechend() const;
    void onspeechend(const jsbind::Any& value);
    jsbind::Any onsoundend() const;
    void onsoundend(const jsbind::Any& value);
    jsbind::Any onaudioend() const;
    void onaudioend(const jsbind::Any& value);
    jsbind::Any onresult() const;
    void onresult(const jsbind::Any& value);
    jsbind::Any onnomatch() const;
    void onnomatch(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onstart() const;
    void onstart(const jsbind::Any& value);
    jsbind::Any onend() const;
    void onend(const jsbind::Any& value);
};

