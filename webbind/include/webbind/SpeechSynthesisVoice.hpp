#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SpeechSynthesisVoice
/// [`SpeechSynthesisVoice`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice)
class SpeechSynthesisVoice : public emlite::Val {
    explicit SpeechSynthesisVoice(Handle h) noexcept;
public:
    explicit SpeechSynthesisVoice(const emlite::Val &val) noexcept;
    static SpeechSynthesisVoice take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechSynthesisVoice clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `voiceURI` attribute.
    /// [`SpeechSynthesisVoice.voiceURI`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/voiceURI)
    [[nodiscard]] jsbind::String voiceURI() const;
    /// Getter of the `name` attribute.
    /// [`SpeechSynthesisVoice.name`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `lang` attribute.
    /// [`SpeechSynthesisVoice.lang`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Getter of the `localService` attribute.
    /// [`SpeechSynthesisVoice.localService`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/localService)
    [[nodiscard]] bool localService() const;
    /// Getter of the `default` attribute.
    /// [`SpeechSynthesisVoice.default`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/default)
    [[nodiscard]] bool default_() const;
};

} // namespace webbind