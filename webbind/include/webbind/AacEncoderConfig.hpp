#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AacEncoderConfig
class AacEncoderConfig : public emlite::Val {
  explicit AacEncoderConfig(Handle h) noexcept;
public:
    static AacEncoderConfig take_ownership(Handle h) noexcept;
    explicit AacEncoderConfig(const emlite::Val &val) noexcept;
    AacEncoderConfig() noexcept;
    [[nodiscard]] AacEncoderConfig clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] AacBitstreamFormat format() const;
    /// Setter of the `format` attribute.
    void format(const AacBitstreamFormat& value);
};

} // namespace webbind