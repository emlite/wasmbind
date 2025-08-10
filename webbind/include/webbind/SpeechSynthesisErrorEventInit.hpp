#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SpeechSynthesisEventInit.hpp"

namespace webbind {

/// Dictionary type SpeechSynthesisErrorEventInit
class SpeechSynthesisErrorEventInit : public SpeechSynthesisEventInit {
  explicit SpeechSynthesisErrorEventInit(Handle h) noexcept;
public:
    static SpeechSynthesisErrorEventInit take_ownership(Handle h) noexcept;
    explicit SpeechSynthesisErrorEventInit(const emlite::Val &val) noexcept;
    SpeechSynthesisErrorEventInit() noexcept;
    [[nodiscard]] SpeechSynthesisErrorEventInit clone() const noexcept;
    /// Getter of the `error` attribute.
    [[nodiscard]] SpeechSynthesisErrorCode error() const;
    /// Setter of the `error` attribute.
    void error(const SpeechSynthesisErrorCode& value);
};

} // namespace webbind