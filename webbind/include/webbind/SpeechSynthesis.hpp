#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class SpeechSynthesisUtterance;
class SpeechSynthesisVoice;

/// Interface SpeechSynthesis
/// [`SpeechSynthesis`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis)
class SpeechSynthesis : public EventTarget {
    explicit SpeechSynthesis(Handle h) noexcept;
public:
    explicit SpeechSynthesis(const emlite::Val &val) noexcept;
    static SpeechSynthesis take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechSynthesis clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SpeechSynthesis.pending`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/pending)
    /// [`SpeechSynthesis.pending`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/pending)
    [[nodiscard]] bool pending() const;
    /// [`SpeechSynthesis.speaking`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/speaking)
    /// [`SpeechSynthesis.speaking`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/speaking)
    [[nodiscard]] bool speaking() const;
    /// [`SpeechSynthesis.paused`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/paused)
    /// [`SpeechSynthesis.paused`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/paused)
    [[nodiscard]] bool paused() const;
    /// [`SpeechSynthesis.onvoiceschanged`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis/onvoiceschanged)
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

} // namespace webbind