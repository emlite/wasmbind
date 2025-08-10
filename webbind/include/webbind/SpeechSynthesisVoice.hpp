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
    /// [`SpeechSynthesisVoice.voiceURI`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/voiceURI)
    /// [`SpeechSynthesisVoice.voiceURI`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/voiceURI)
    [[nodiscard]] jsbind::String voiceURI() const;
    /// [`SpeechSynthesisVoice.name`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/name)
    /// [`SpeechSynthesisVoice.name`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`SpeechSynthesisVoice.lang`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/lang)
    /// [`SpeechSynthesisVoice.lang`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// [`SpeechSynthesisVoice.localService`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/localService)
    /// [`SpeechSynthesisVoice.localService`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/localService)
    [[nodiscard]] bool localService() const;
    /// [`SpeechSynthesisVoice.default`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/default)
    /// [`SpeechSynthesisVoice.default`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice/default)
    [[nodiscard]] bool default_() const;
};

} // namespace webbind