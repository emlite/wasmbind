#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FlacEncoderConfig
class FlacEncoderConfig : public emlite::Val {
  explicit FlacEncoderConfig(Handle h) noexcept;
public:
    static FlacEncoderConfig take_ownership(Handle h) noexcept;
    explicit FlacEncoderConfig(const emlite::Val &val) noexcept;
    FlacEncoderConfig() noexcept;
    [[nodiscard]] FlacEncoderConfig clone() const noexcept;
    /// Getter of the `blockSize` attribute.
    [[nodiscard]] unsigned long blockSize() const;
    /// Setter of the `blockSize` attribute.
    void blockSize(unsigned long value);
    /// Getter of the `compressLevel` attribute.
    [[nodiscard]] unsigned long compressLevel() const;
    /// Setter of the `compressLevel` attribute.
    void compressLevel(unsigned long value);
};

} // namespace webbind