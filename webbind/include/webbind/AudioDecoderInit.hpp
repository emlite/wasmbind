#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDecoderInit
/// [`AudioDecoderInit`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoderInit)
class AudioDecoderInit : public emlite::Val {
  explicit AudioDecoderInit(Handle h) noexcept;
public:
    static AudioDecoderInit take_ownership(Handle h) noexcept;
    explicit AudioDecoderInit(const emlite::Val &val) noexcept;
    AudioDecoderInit() noexcept;
    [[nodiscard]] AudioDecoderInit clone() const noexcept;
    [[nodiscard]] jsbind::Function output() const;
    void output(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function error() const;
    void error(const jsbind::Function& value);
};

} // namespace webbind