#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface EXT_texture_filter_anisotropic
/// [`EXT_texture_filter_anisotropic`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_texture_filter_anisotropic)
class EXT_texture_filter_anisotropic : public emlite::Val {
    explicit EXT_texture_filter_anisotropic(Handle h) noexcept;
public:
    explicit EXT_texture_filter_anisotropic(const emlite::Val &val) noexcept;
    static EXT_texture_filter_anisotropic take_ownership(Handle h) noexcept;
    [[nodiscard]] EXT_texture_filter_anisotropic clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind