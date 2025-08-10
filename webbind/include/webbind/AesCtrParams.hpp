#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesCtrParams
/// [`AesCtrParams`](https://developer.mozilla.org/en-US/docs/Web/API/AesCtrParams)
class AesCtrParams : public Algorithm {
  explicit AesCtrParams(Handle h) noexcept;
public:
    static AesCtrParams take_ownership(Handle h) noexcept;
    explicit AesCtrParams(const emlite::Val &val) noexcept;
    AesCtrParams() noexcept;
    [[nodiscard]] AesCtrParams clone() const noexcept;
    [[nodiscard]] jsbind::Any counter() const;
    void counter(const jsbind::Any& value);
    [[nodiscard]] unsigned char length() const;
    void length(unsigned char value);
};

} // namespace webbind