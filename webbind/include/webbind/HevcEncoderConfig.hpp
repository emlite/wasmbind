#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HevcEncoderConfig
class HevcEncoderConfig : public emlite::Val {
  explicit HevcEncoderConfig(Handle h) noexcept;
public:
    static HevcEncoderConfig take_ownership(Handle h) noexcept;
    explicit HevcEncoderConfig(const emlite::Val &val) noexcept;
    HevcEncoderConfig() noexcept;
    [[nodiscard]] HevcEncoderConfig clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] HevcBitstreamFormat format() const;
    /// Setter of the `format` attribute.
    void format(const HevcBitstreamFormat& value);
};

} // namespace webbind