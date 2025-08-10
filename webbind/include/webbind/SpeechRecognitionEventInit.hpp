#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class SpeechRecognitionResultList;

/// Dictionary type SpeechRecognitionEventInit
/// [`SpeechRecognitionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEventInit)
class SpeechRecognitionEventInit : public EventInit {
  explicit SpeechRecognitionEventInit(Handle h) noexcept;
public:
    static SpeechRecognitionEventInit take_ownership(Handle h) noexcept;
    explicit SpeechRecognitionEventInit(const emlite::Val &val) noexcept;
    SpeechRecognitionEventInit() noexcept;
    [[nodiscard]] SpeechRecognitionEventInit clone() const noexcept;
    [[nodiscard]] unsigned long resultIndex() const;
    void resultIndex(unsigned long value);
    [[nodiscard]] SpeechRecognitionResultList results() const;
    void results(const SpeechRecognitionResultList& value);
};

} // namespace webbind