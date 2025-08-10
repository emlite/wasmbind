#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type RsaKeyGenParams
/// [`RsaKeyGenParams`](https://developer.mozilla.org/en-US/docs/Web/API/RsaKeyGenParams)
class RsaKeyGenParams : public Algorithm {
  explicit RsaKeyGenParams(Handle h) noexcept;
public:
    static RsaKeyGenParams take_ownership(Handle h) noexcept;
    explicit RsaKeyGenParams(const emlite::Val &val) noexcept;
    RsaKeyGenParams() noexcept;
    [[nodiscard]] RsaKeyGenParams clone() const noexcept;
    [[nodiscard]] unsigned long modulusLength() const;
    void modulusLength(unsigned long value);
    [[nodiscard]] jsbind::Any publicExponent() const;
    void publicExponent(const jsbind::Any& value);
};

} // namespace webbind