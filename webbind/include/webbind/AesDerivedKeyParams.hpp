#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesDerivedKeyParams
/// [`AesDerivedKeyParams`](https://developer.mozilla.org/en-US/docs/Web/API/AesDerivedKeyParams)
class AesDerivedKeyParams : public Algorithm {
  explicit AesDerivedKeyParams(Handle h) noexcept;
public:
    static AesDerivedKeyParams take_ownership(Handle h) noexcept;
    explicit AesDerivedKeyParams(const emlite::Val &val) noexcept;
    AesDerivedKeyParams() noexcept;
    [[nodiscard]] AesDerivedKeyParams clone() const noexcept;
    [[nodiscard]] unsigned short length() const;
    void length(unsigned short value);
};

} // namespace webbind