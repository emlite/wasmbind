#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class SpeechSynthesisUtterance;

/// Dictionary type SpeechSynthesisEventInit
class SpeechSynthesisEventInit : public EventInit {
  explicit SpeechSynthesisEventInit(Handle h) noexcept;
public:
    static SpeechSynthesisEventInit take_ownership(Handle h) noexcept;
    explicit SpeechSynthesisEventInit(const emlite::Val &val) noexcept;
    SpeechSynthesisEventInit() noexcept;
    [[nodiscard]] SpeechSynthesisEventInit clone() const noexcept;
    /// Getter of the `utterance` attribute.
    [[nodiscard]] SpeechSynthesisUtterance utterance() const;
    /// Setter of the `utterance` attribute.
    void utterance(const SpeechSynthesisUtterance& value);
    /// Getter of the `charIndex` attribute.
    [[nodiscard]] unsigned long charIndex() const;
    /// Setter of the `charIndex` attribute.
    void charIndex(unsigned long value);
    /// Getter of the `charLength` attribute.
    [[nodiscard]] unsigned long charLength() const;
    /// Setter of the `charLength` attribute.
    void charLength(unsigned long value);
    /// Getter of the `elapsedTime` attribute.
    [[nodiscard]] float elapsedTime() const;
    /// Setter of the `elapsedTime` attribute.
    void elapsedTime(float value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
};

} // namespace webbind