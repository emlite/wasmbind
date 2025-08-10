#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type HmacKeyGenParams
/// [`HmacKeyGenParams`](https://developer.mozilla.org/en-US/docs/Web/API/HmacKeyGenParams)
class HmacKeyGenParams : public Algorithm {
  explicit HmacKeyGenParams(Handle h) noexcept;
public:
    static HmacKeyGenParams take_ownership(Handle h) noexcept;
    explicit HmacKeyGenParams(const emlite::Val &val) noexcept;
    HmacKeyGenParams() noexcept;
    [[nodiscard]] HmacKeyGenParams clone() const noexcept;
    [[nodiscard]] jsbind::Any hash() const;
    void hash(const jsbind::Any& value);
    [[nodiscard]] unsigned long length() const;
    void length(unsigned long value);
};

} // namespace webbind