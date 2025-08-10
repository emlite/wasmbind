#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type HkdfParams
/// [`HkdfParams`](https://developer.mozilla.org/en-US/docs/Web/API/HkdfParams)
class HkdfParams : public Algorithm {
  explicit HkdfParams(Handle h) noexcept;
public:
    static HkdfParams take_ownership(Handle h) noexcept;
    explicit HkdfParams(const emlite::Val &val) noexcept;
    HkdfParams() noexcept;
    [[nodiscard]] HkdfParams clone() const noexcept;
    [[nodiscard]] jsbind::Any hash() const;
    void hash(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any salt() const;
    void salt(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any info() const;
    void info(const jsbind::Any& value);
};

} // namespace webbind