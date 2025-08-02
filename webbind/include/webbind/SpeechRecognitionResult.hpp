#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SpeechRecognitionAlternative;


/// The SpeechRecognitionResult class.
/// [`SpeechRecognitionResult`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResult)
class SpeechRecognitionResult : public emlite::Val {
    explicit SpeechRecognitionResult(Handle h) noexcept;

public:
    explicit SpeechRecognitionResult(const emlite::Val &val) noexcept;
    static SpeechRecognitionResult take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechRecognitionResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`SpeechRecognitionResult.length`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResult/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`SpeechRecognitionResult.item`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResult/item)
    SpeechRecognitionAlternative item(unsigned long index);
    /// Getter of the `isFinal` attribute.
    /// [`SpeechRecognitionResult.isFinal`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResult/isFinal)
    [[nodiscard]] bool isFinal() const;
};

