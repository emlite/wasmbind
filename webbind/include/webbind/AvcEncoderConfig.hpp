#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AvcEncoderConfig
/// [`AvcEncoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AvcEncoderConfig)
class AvcEncoderConfig : public emlite::Val {
  explicit AvcEncoderConfig(Handle h) noexcept;
public:
    static AvcEncoderConfig take_ownership(Handle h) noexcept;
    explicit AvcEncoderConfig(const emlite::Val &val) noexcept;
    AvcEncoderConfig() noexcept;
    [[nodiscard]] AvcEncoderConfig clone() const noexcept;
    [[nodiscard]] AvcBitstreamFormat format() const;
    void format(const AvcBitstreamFormat& value);
};

} // namespace webbind