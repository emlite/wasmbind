#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_compressed_texture_pvrtc
/// [`WEBGL_compressed_texture_pvrtc`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_pvrtc)
class WEBGL_compressed_texture_pvrtc : public emlite::Val {
    explicit WEBGL_compressed_texture_pvrtc(Handle h) noexcept;
public:
    explicit WEBGL_compressed_texture_pvrtc(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_pvrtc take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_compressed_texture_pvrtc clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind