#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type SpeechRecognitionErrorEventInit
/// [`SpeechRecognitionErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEventInit)
class SpeechRecognitionErrorEventInit : public EventInit {
  explicit SpeechRecognitionErrorEventInit(Handle h) noexcept;
public:
    static SpeechRecognitionErrorEventInit take_ownership(Handle h) noexcept;
    explicit SpeechRecognitionErrorEventInit(const emlite::Val &val) noexcept;
    SpeechRecognitionErrorEventInit() noexcept;
    [[nodiscard]] SpeechRecognitionErrorEventInit clone() const noexcept;
    [[nodiscard]] SpeechRecognitionErrorCode error() const;
    void error(const SpeechRecognitionErrorCode& value);
    [[nodiscard]] jsbind::String message() const;
    void message(const jsbind::String& value);
};

} // namespace webbind