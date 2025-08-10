#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class SpeechSynthesisVoice;

/// Interface SpeechSynthesisUtterance
/// [`SpeechSynthesisUtterance`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance)
class SpeechSynthesisUtterance : public EventTarget {
    explicit SpeechSynthesisUtterance(Handle h) noexcept;
public:
    explicit SpeechSynthesisUtterance(const emlite::Val &val) noexcept;
    static SpeechSynthesisUtterance take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechSynthesisUtterance clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechSynthesisUtterance(..)` constructor, creating a new SpeechSynthesisUtterance instance
    SpeechSynthesisUtterance();
    /// The `new SpeechSynthesisUtterance(..)` constructor, creating a new SpeechSynthesisUtterance instance
    SpeechSynthesisUtterance(const jsbind::String& text);
    /// Getter of the `text` attribute.
    /// [`SpeechSynthesisUtterance.text`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`SpeechSynthesisUtterance.text`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/text)
    void text(const jsbind::String& value);
    /// Getter of the `lang` attribute.
    /// [`SpeechSynthesisUtterance.lang`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    /// [`SpeechSynthesisUtterance.lang`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/lang)
    void lang(const jsbind::String& value);
    /// Getter of the `voice` attribute.
    /// [`SpeechSynthesisUtterance.voice`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/voice)
    [[nodiscard]] SpeechSynthesisVoice voice() const;
    /// Setter of the `voice` attribute.
    /// [`SpeechSynthesisUtterance.voice`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/voice)
    void voice(const SpeechSynthesisVoice& value);
    /// Getter of the `volume` attribute.
    /// [`SpeechSynthesisUtterance.volume`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/volume)
    [[nodiscard]] float volume() const;
    /// Setter of the `volume` attribute.
    /// [`SpeechSynthesisUtterance.volume`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/volume)
    void volume(float value);
    /// Getter of the `rate` attribute.
    /// [`SpeechSynthesisUtterance.rate`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/rate)
    [[nodiscard]] float rate() const;
    /// Setter of the `rate` attribute.
    /// [`SpeechSynthesisUtterance.rate`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/rate)
    void rate(float value);
    /// Getter of the `pitch` attribute.
    /// [`SpeechSynthesisUtterance.pitch`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/pitch)
    [[nodiscard]] float pitch() const;
    /// Setter of the `pitch` attribute.
    /// [`SpeechSynthesisUtterance.pitch`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/pitch)
    void pitch(float value);
    /// Getter of the `onstart` attribute.
    /// [`SpeechSynthesisUtterance.onstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onstart)
    [[nodiscard]] jsbind::Any onstart() const;
    /// Setter of the `onstart` attribute.
    /// [`SpeechSynthesisUtterance.onstart`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onstart)
    void onstart(const jsbind::Any& value);
    /// Getter of the `onend` attribute.
    /// [`SpeechSynthesisUtterance.onend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onend)
    [[nodiscard]] jsbind::Any onend() const;
    /// Setter of the `onend` attribute.
    /// [`SpeechSynthesisUtterance.onend`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onend)
    void onend(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`SpeechSynthesisUtterance.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SpeechSynthesisUtterance.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onpause` attribute.
    /// [`SpeechSynthesisUtterance.onpause`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onpause)
    [[nodiscard]] jsbind::Any onpause() const;
    /// Setter of the `onpause` attribute.
    /// [`SpeechSynthesisUtterance.onpause`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onpause)
    void onpause(const jsbind::Any& value);
    /// Getter of the `onresume` attribute.
    /// [`SpeechSynthesisUtterance.onresume`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onresume)
    [[nodiscard]] jsbind::Any onresume() const;
    /// Setter of the `onresume` attribute.
    /// [`SpeechSynthesisUtterance.onresume`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onresume)
    void onresume(const jsbind::Any& value);
    /// Getter of the `onmark` attribute.
    /// [`SpeechSynthesisUtterance.onmark`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onmark)
    [[nodiscard]] jsbind::Any onmark() const;
    /// Setter of the `onmark` attribute.
    /// [`SpeechSynthesisUtterance.onmark`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onmark)
    void onmark(const jsbind::Any& value);
    /// Getter of the `onboundary` attribute.
    /// [`SpeechSynthesisUtterance.onboundary`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onboundary)
    [[nodiscard]] jsbind::Any onboundary() const;
    /// Setter of the `onboundary` attribute.
    /// [`SpeechSynthesisUtterance.onboundary`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance/onboundary)
    void onboundary(const jsbind::Any& value);
};

} // namespace webbind