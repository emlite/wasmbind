#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class SpeechSynthesisVoice;


class SpeechSynthesisUtterance : public EventTarget {
    explicit SpeechSynthesisUtterance(Handle h) noexcept;

public:
    explicit SpeechSynthesisUtterance(const emlite::Val &val) noexcept;
    static SpeechSynthesisUtterance take_ownership(Handle h) noexcept;

    SpeechSynthesisUtterance clone() const noexcept;
    SpeechSynthesisUtterance();
    SpeechSynthesisUtterance(const jsbind::String& text);
    jsbind::String text() const;
    void text(const jsbind::String& value);
    jsbind::String lang() const;
    void lang(const jsbind::String& value);
    SpeechSynthesisVoice voice() const;
    void voice(const SpeechSynthesisVoice& value);
    float volume() const;
    void volume(float value);
    float rate() const;
    void rate(float value);
    float pitch() const;
    void pitch(float value);
    jsbind::Any onstart() const;
    void onstart(const jsbind::Any& value);
    jsbind::Any onend() const;
    void onend(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onpause() const;
    void onpause(const jsbind::Any& value);
    jsbind::Any onresume() const;
    void onresume(const jsbind::Any& value);
    jsbind::Any onmark() const;
    void onmark(const jsbind::Any& value);
    jsbind::Any onboundary() const;
    void onboundary(const jsbind::Any& value);
};

