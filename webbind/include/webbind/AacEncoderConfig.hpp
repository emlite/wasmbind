#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AacEncoderConfig
/// [`AacEncoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AacEncoderConfig)
class AacEncoderConfig : public emlite::Val {
  explicit AacEncoderConfig(Handle h) noexcept;
public:
    static AacEncoderConfig take_ownership(Handle h) noexcept;
    explicit AacEncoderConfig(const emlite::Val &val) noexcept;
    AacEncoderConfig() noexcept;
    [[nodiscard]] AacEncoderConfig clone() const noexcept;
    [[nodiscard]] AacBitstreamFormat format() const;
    void format(const AacBitstreamFormat& value);
};

} // namespace webbind