#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface EXT_blend_minmax
/// [`EXT_blend_minmax`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_blend_minmax)
class EXT_blend_minmax : public emlite::Val {
    explicit EXT_blend_minmax(Handle h) noexcept;
public:
    explicit EXT_blend_minmax(const emlite::Val &val) noexcept;
    static EXT_blend_minmax take_ownership(Handle h) noexcept;
    [[nodiscard]] EXT_blend_minmax clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind