#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class SpeechSynthesisUtterance;
class SpeechSynthesisVoice;


/// The SpeechSynthesis class.
/// [`SpeechSynthesis`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis)
class SpeechSynthesis : public EventTarget {
    explicit SpeechSynthesis(Handle h) noexcept;

public:
    explicit SpeechSynthesis(const emlite::Val &val) noexcept;
    static SpeechSynthesis take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechSynthesis clone() const noexcept;
    /// Getter of the `pending` attribute.
    /// [`SpeechSynthesis.pending`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/pending)
    [[nodiscard]] bool pending() const;
    /// Getter of the `speaking` attribute.
    /// [`SpeechSynthesis.speaking`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/speaking)
    [[nodiscard]] bool speaking() const;
    /// Getter of the `paused` attribute.
    /// [`SpeechSynthesis.paused`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/paused)
    [[nodiscard]] bool paused() const;
    /// Getter of the `onvoiceschanged` attribute.
    /// [`SpeechSynthesis.onvoiceschanged`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/onvoiceschanged)
    [[nodiscard]] jsbind::Any onvoiceschanged() const;
    /// Setter of the `onvoiceschanged` attribute.
    /// [`SpeechSynthesis.onvoiceschanged`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/onvoiceschanged)
    void onvoiceschanged(const jsbind::Any& value);
    /// The speak method.
    /// [`SpeechSynthesis.speak`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/speak)
    jsbind::Undefined speak(const SpeechSynthesisUtterance& utterance);
    /// The cancel method.
    /// [`SpeechSynthesis.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/cancel)
    jsbind::Undefined cancel();
    /// The pause method.
    /// [`SpeechSynthesis.pause`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/pause)
    jsbind::Undefined pause();
    /// The resume method.
    /// [`SpeechSynthesis.resume`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/resume)
    jsbind::Undefined resume();
    /// The getVoices method.
    /// [`SpeechSynthesis.getVoices`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/getVoices)
    jsbind::TypedArray<SpeechSynthesisVoice> getVoices();
};

