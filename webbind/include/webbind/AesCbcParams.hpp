#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesCbcParams
/// [`AesCbcParams`](https://developer.mozilla.org/en-US/docs/Web/API/AesCbcParams)
class AesCbcParams : public Algorithm {
  explicit AesCbcParams(Handle h) noexcept;
public:
    static AesCbcParams take_ownership(Handle h) noexcept;
    explicit AesCbcParams(const emlite::Val &val) noexcept;
    AesCbcParams() noexcept;
    [[nodiscard]] AesCbcParams clone() const noexcept;
    [[nodiscard]] jsbind::Any iv() const;
    void iv(const jsbind::Any& value);
};

} // namespace webbind