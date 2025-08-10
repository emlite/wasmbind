#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FlacEncoderConfig
/// [`FlacEncoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/FlacEncoderConfig)
class FlacEncoderConfig : public emlite::Val {
  explicit FlacEncoderConfig(Handle h) noexcept;
public:
    static FlacEncoderConfig take_ownership(Handle h) noexcept;
    explicit FlacEncoderConfig(const emlite::Val &val) noexcept;
    FlacEncoderConfig() noexcept;
    [[nodiscard]] FlacEncoderConfig clone() const noexcept;
    [[nodiscard]] unsigned long blockSize() const;
    void blockSize(unsigned long value);
    [[nodiscard]] unsigned long compressLevel() const;
    void compressLevel(unsigned long value);
};

} // namespace webbind