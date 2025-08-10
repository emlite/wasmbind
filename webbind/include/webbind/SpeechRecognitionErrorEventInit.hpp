#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type SpeechRecognitionErrorEventInit
class SpeechRecognitionErrorEventInit : public EventInit {
  explicit SpeechRecognitionErrorEventInit(Handle h) noexcept;
public:
    static SpeechRecognitionErrorEventInit take_ownership(Handle h) noexcept;
    explicit SpeechRecognitionErrorEventInit(const emlite::Val &val) noexcept;
    SpeechRecognitionErrorEventInit() noexcept;
    [[nodiscard]] SpeechRecognitionErrorEventInit clone() const noexcept;
    /// Getter of the `error` attribute.
    [[nodiscard]] SpeechRecognitionErrorCode error() const;
    /// Setter of the `error` attribute.
    void error(const SpeechRecognitionErrorCode& value);
    /// Getter of the `message` attribute.
    [[nodiscard]] jsbind::String message() const;
    /// Setter of the `message` attribute.
    void message(const jsbind::String& value);
};

} // namespace webbind