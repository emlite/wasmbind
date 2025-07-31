#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SpeechGrammar class.
/// [`SpeechGrammar`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammar)
class SpeechGrammar : public emlite::Val {
    explicit SpeechGrammar(Handle h) noexcept;

public:
    explicit SpeechGrammar(const emlite::Val &val) noexcept;
    static SpeechGrammar take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechGrammar clone() const noexcept;
    /// Getter of the `src` attribute.
    /// [`SpeechGrammar.src`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammar/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`SpeechGrammar.src`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammar/src)
    void src(const jsbind::String& value);
    /// Getter of the `weight` attribute.
    /// [`SpeechGrammar.weight`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammar/weight)
    [[nodiscard]] float weight() const;
    /// Setter of the `weight` attribute.
    /// [`SpeechGrammar.weight`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammar/weight)
    void weight(float value);
};

