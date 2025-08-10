#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type RsaPssParams
/// [`RsaPssParams`](https://developer.mozilla.org/en-US/docs/Web/API/RsaPssParams)
class RsaPssParams : public Algorithm {
  explicit RsaPssParams(Handle h) noexcept;
public:
    static RsaPssParams take_ownership(Handle h) noexcept;
    explicit RsaPssParams(const emlite::Val &val) noexcept;
    RsaPssParams() noexcept;
    [[nodiscard]] RsaPssParams clone() const noexcept;
    [[nodiscard]] unsigned long saltLength() const;
    void saltLength(unsigned long value);
};

} // namespace webbind