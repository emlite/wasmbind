#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AvcEncoderConfig
class AvcEncoderConfig : public emlite::Val {
  explicit AvcEncoderConfig(Handle h) noexcept;
public:
    static AvcEncoderConfig take_ownership(Handle h) noexcept;
    explicit AvcEncoderConfig(const emlite::Val &val) noexcept;
    AvcEncoderConfig() noexcept;
    [[nodiscard]] AvcEncoderConfig clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] AvcBitstreamFormat format() const;
    /// Setter of the `format` attribute.
    void format(const AvcBitstreamFormat& value);
};

} // namespace webbind