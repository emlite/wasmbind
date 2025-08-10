#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class SpeechSynthesisUtterance;

/// Dictionary type SpeechSynthesisEventInit
/// [`SpeechSynthesisEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEventInit)
class SpeechSynthesisEventInit : public EventInit {
  explicit SpeechSynthesisEventInit(Handle h) noexcept;
public:
    static SpeechSynthesisEventInit take_ownership(Handle h) noexcept;
    explicit SpeechSynthesisEventInit(const emlite::Val &val) noexcept;
    SpeechSynthesisEventInit() noexcept;
    [[nodiscard]] SpeechSynthesisEventInit clone() const noexcept;
    [[nodiscard]] SpeechSynthesisUtterance utterance() const;
    void utterance(const SpeechSynthesisUtterance& value);
    [[nodiscard]] unsigned long charIndex() const;
    void charIndex(unsigned long value);
    [[nodiscard]] unsigned long charLength() const;
    void charLength(unsigned long value);
    [[nodiscard]] float elapsedTime() const;
    void elapsedTime(float value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind