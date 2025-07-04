#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SpeechRecognitionResult;


class SpeechRecognitionResultList : public emlite::Val {
    explicit SpeechRecognitionResultList(Handle h) noexcept;

public:
    explicit SpeechRecognitionResultList(const emlite::Val &val) noexcept;
    static SpeechRecognitionResultList take_ownership(Handle h) noexcept;

    SpeechRecognitionResultList clone() const noexcept;
    unsigned long length() const;
    SpeechRecognitionResult item(unsigned long index);
};

