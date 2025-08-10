#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SpeechRecognitionOptions
/// [`SpeechRecognitionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionOptions)
class SpeechRecognitionOptions : public emlite::Val {
  explicit SpeechRecognitionOptions(Handle h) noexcept;
public:
    static SpeechRecognitionOptions take_ownership(Handle h) noexcept;
    explicit SpeechRecognitionOptions(const emlite::Val &val) noexcept;
    SpeechRecognitionOptions() noexcept;
    [[nodiscard]] SpeechRecognitionOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> langs() const;
    void langs(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] bool processLocally() const;
    void processLocally(bool value);
};

} // namespace webbind