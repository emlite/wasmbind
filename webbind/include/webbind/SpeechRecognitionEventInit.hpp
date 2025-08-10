#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class SpeechRecognitionResultList;

/// Dictionary type SpeechRecognitionEventInit
class SpeechRecognitionEventInit : public EventInit {
  explicit SpeechRecognitionEventInit(Handle h) noexcept;
public:
    static SpeechRecognitionEventInit take_ownership(Handle h) noexcept;
    explicit SpeechRecognitionEventInit(const emlite::Val &val) noexcept;
    SpeechRecognitionEventInit() noexcept;
    [[nodiscard]] SpeechRecognitionEventInit clone() const noexcept;
    /// Getter of the `resultIndex` attribute.
    [[nodiscard]] unsigned long resultIndex() const;
    /// Setter of the `resultIndex` attribute.
    void resultIndex(unsigned long value);
    /// Getter of the `results` attribute.
    [[nodiscard]] SpeechRecognitionResultList results() const;
    /// Setter of the `results` attribute.
    void results(const SpeechRecognitionResultList& value);
};

} // namespace webbind