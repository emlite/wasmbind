#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SpeechRecognitionPhrase;


class SpeechRecognitionPhraseList : public emlite::Val {
    explicit SpeechRecognitionPhraseList(Handle h) noexcept;

public:
    explicit SpeechRecognitionPhraseList(const emlite::Val &val) noexcept;
    static SpeechRecognitionPhraseList take_ownership(Handle h) noexcept;

    SpeechRecognitionPhraseList clone() const noexcept;
    SpeechRecognitionPhraseList(const jsbind::Sequence<SpeechRecognitionPhrase>& phrases);
    unsigned long length() const;
    SpeechRecognitionPhrase item(unsigned long index);
    jsbind::Undefined addItem(const SpeechRecognitionPhrase& item);
    jsbind::Undefined removeItem(unsigned long index);
};

