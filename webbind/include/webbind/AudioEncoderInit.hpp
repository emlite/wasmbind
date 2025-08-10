#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioEncoderInit
/// [`AudioEncoderInit`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoderInit)
class AudioEncoderInit : public emlite::Val {
  explicit AudioEncoderInit(Handle h) noexcept;
public:
    static AudioEncoderInit take_ownership(Handle h) noexcept;
    explicit AudioEncoderInit(const emlite::Val &val) noexcept;
    AudioEncoderInit() noexcept;
    [[nodiscard]] AudioEncoderInit clone() const noexcept;
    [[nodiscard]] jsbind::Function output() const;
    void output(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function error() const;
    void error(const jsbind::Function& value);
};

} // namespace webbind