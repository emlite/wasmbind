#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SpeechRecognitionAlternative
/// [`SpeechRecognitionAlternative`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative)
class SpeechRecognitionAlternative : public emlite::Val {
    explicit SpeechRecognitionAlternative(Handle h) noexcept;
public:
    explicit SpeechRecognitionAlternative(const emlite::Val &val) noexcept;
    static SpeechRecognitionAlternative take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionAlternative clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SpeechRecognitionAlternative.transcript`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative/transcript)
    /// [`SpeechRecognitionAlternative.transcript`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative/transcript)
    [[nodiscard]] jsbind::String transcript() const;
    /// [`SpeechRecognitionAlternative.confidence`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative/confidence)
    /// [`SpeechRecognitionAlternative.confidence`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative/confidence)
    [[nodiscard]] float confidence() const;
};

} // namespace webbind