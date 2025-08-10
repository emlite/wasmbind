#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HevcEncoderConfig
/// [`HevcEncoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/HevcEncoderConfig)
class HevcEncoderConfig : public emlite::Val {
  explicit HevcEncoderConfig(Handle h) noexcept;
public:
    static HevcEncoderConfig take_ownership(Handle h) noexcept;
    explicit HevcEncoderConfig(const emlite::Val &val) noexcept;
    HevcEncoderConfig() noexcept;
    [[nodiscard]] HevcEncoderConfig clone() const noexcept;
    [[nodiscard]] HevcBitstreamFormat format() const;
    void format(const HevcBitstreamFormat& value);
};

} // namespace webbind