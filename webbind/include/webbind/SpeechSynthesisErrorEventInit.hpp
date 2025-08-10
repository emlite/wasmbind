#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SpeechSynthesisEventInit.hpp"

namespace webbind {

/// Dictionary type SpeechSynthesisErrorEventInit
/// [`SpeechSynthesisErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorEventInit)
class SpeechSynthesisErrorEventInit : public SpeechSynthesisEventInit {
  explicit SpeechSynthesisErrorEventInit(Handle h) noexcept;
public:
    static SpeechSynthesisErrorEventInit take_ownership(Handle h) noexcept;
    explicit SpeechSynthesisErrorEventInit(const emlite::Val &val) noexcept;
    SpeechSynthesisErrorEventInit() noexcept;
    [[nodiscard]] SpeechSynthesisErrorEventInit clone() const noexcept;
    [[nodiscard]] SpeechSynthesisErrorCode error() const;
    void error(const SpeechSynthesisErrorCode& value);
};

} // namespace webbind