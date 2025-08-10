#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SpeechRecognitionOptions
class SpeechRecognitionOptions : public emlite::Val {
  explicit SpeechRecognitionOptions(Handle h) noexcept;
public:
    static SpeechRecognitionOptions take_ownership(Handle h) noexcept;
    explicit SpeechRecognitionOptions(const emlite::Val &val) noexcept;
    SpeechRecognitionOptions() noexcept;
    [[nodiscard]] SpeechRecognitionOptions clone() const noexcept;
    /// Getter of the `langs` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> langs() const;
    /// Setter of the `langs` attribute.
    void langs(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `processLocally` attribute.
    [[nodiscard]] bool processLocally() const;
    /// Setter of the `processLocally` attribute.
    void processLocally(bool value);
};

} // namespace webbind