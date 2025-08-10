#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_depth_texture
/// [`WEBGL_depth_texture`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_depth_texture)
class WEBGL_depth_texture : public emlite::Val {
    explicit WEBGL_depth_texture(Handle h) noexcept;
public:
    explicit WEBGL_depth_texture(const emlite::Val &val) noexcept;
    static WEBGL_depth_texture take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_depth_texture clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind