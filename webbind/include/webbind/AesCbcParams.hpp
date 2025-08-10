#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesCbcParams
class AesCbcParams : public Algorithm {
  explicit AesCbcParams(Handle h) noexcept;
public:
    static AesCbcParams take_ownership(Handle h) noexcept;
    explicit AesCbcParams(const emlite::Val &val) noexcept;
    AesCbcParams() noexcept;
    [[nodiscard]] AesCbcParams clone() const noexcept;
    /// Getter of the `iv` attribute.
    [[nodiscard]] jsbind::Any iv() const;
    /// Setter of the `iv` attribute.
    void iv(const jsbind::Any& value);
};

} // namespace webbind