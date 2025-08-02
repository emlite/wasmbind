#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SpeechRecognitionAlternative class.
/// [`SpeechRecognitionAlternative`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative)
class SpeechRecognitionAlternative : public emlite::Val {
    explicit SpeechRecognitionAlternative(Handle h) noexcept;

public:
    explicit SpeechRecognitionAlternative(const emlite::Val &val) noexcept;
    static SpeechRecognitionAlternative take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechRecognitionAlternative clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `transcript` attribute.
    /// [`SpeechRecognitionAlternative.transcript`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative/transcript)
    [[nodiscard]] jsbind::String transcript() const;
    /// Getter of the `confidence` attribute.
    /// [`SpeechRecognitionAlternative.confidence`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative/confidence)
    [[nodiscard]] float confidence() const;
};

