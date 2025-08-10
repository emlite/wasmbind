#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface KeyboardLayoutMap
/// [`KeyboardLayoutMap`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardLayoutMap)
class KeyboardLayoutMap : public emlite::Val {
    explicit KeyboardLayoutMap(Handle h) noexcept;
public:
    explicit KeyboardLayoutMap(const emlite::Val &val) noexcept;
    static KeyboardLayoutMap take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyboardLayoutMap clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind