#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SpeechRecognitionPhrase
/// [`SpeechRecognitionPhrase`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhrase)
class SpeechRecognitionPhrase : public emlite::Val {
    explicit SpeechRecognitionPhrase(Handle h) noexcept;
public:
    explicit SpeechRecognitionPhrase(const emlite::Val &val) noexcept;
    static SpeechRecognitionPhrase take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionPhrase clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechRecognitionPhrase(..)` constructor, creating a new SpeechRecognitionPhrase instance
    SpeechRecognitionPhrase(const jsbind::String& phrase);
    /// The `new SpeechRecognitionPhrase(..)` constructor, creating a new SpeechRecognitionPhrase instance
    SpeechRecognitionPhrase(const jsbind::String& phrase, float boost);
    /// [`SpeechRecognitionPhrase.phrase`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhrase/phrase)
    /// [`SpeechRecognitionPhrase.phrase`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhrase/phrase)
    [[nodiscard]] jsbind::String phrase() const;
    /// [`SpeechRecognitionPhrase.boost`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhrase/boost)
    /// [`SpeechRecognitionPhrase.boost`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhrase/boost)
    [[nodiscard]] float boost() const;
};

} // namespace webbind