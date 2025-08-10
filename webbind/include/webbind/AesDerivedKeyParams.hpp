#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesDerivedKeyParams
class AesDerivedKeyParams : public Algorithm {
  explicit AesDerivedKeyParams(Handle h) noexcept;
public:
    static AesDerivedKeyParams take_ownership(Handle h) noexcept;
    explicit AesDerivedKeyParams(const emlite::Val &val) noexcept;
    AesDerivedKeyParams() noexcept;
    [[nodiscard]] AesDerivedKeyParams clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned short length() const;
    /// Setter of the `length` attribute.
    void length(unsigned short value);
};

} // namespace webbind