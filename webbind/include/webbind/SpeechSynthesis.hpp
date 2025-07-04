#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class SpeechSynthesisUtterance;
class SpeechSynthesisVoice;


class SpeechSynthesis : public EventTarget {
    explicit SpeechSynthesis(Handle h) noexcept;

public:
    explicit SpeechSynthesis(const emlite::Val &val) noexcept;
    static SpeechSynthesis take_ownership(Handle h) noexcept;

    SpeechSynthesis clone() const noexcept;
    bool pending() const;
    bool speaking() const;
    bool paused() const;
    jsbind::Any onvoiceschanged() const;
    void onvoiceschanged(const jsbind::Any& value);
    jsbind::Undefined speak(const SpeechSynthesisUtterance& utterance);
    jsbind::Undefined cancel();
    jsbind::Undefined pause();
    jsbind::Undefined resume();
    jsbind::Sequence<SpeechSynthesisVoice> getVoices();
};

