#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesKeyGenParams
/// [`AesKeyGenParams`](https://developer.mozilla.org/en-US/docs/Web/API/AesKeyGenParams)
class AesKeyGenParams : public Algorithm {
  explicit AesKeyGenParams(Handle h) noexcept;
public:
    static AesKeyGenParams take_ownership(Handle h) noexcept;
    explicit AesKeyGenParams(const emlite::Val &val) noexcept;
    AesKeyGenParams() noexcept;
    [[nodiscard]] AesKeyGenParams clone() const noexcept;
    [[nodiscard]] unsigned short length() const;
    void length(unsigned short value);
};

} // namespace webbind