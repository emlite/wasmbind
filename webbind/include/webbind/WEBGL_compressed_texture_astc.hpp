#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_compressed_texture_astc
/// [`WEBGL_compressed_texture_astc`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_astc)
class WEBGL_compressed_texture_astc : public emlite::Val {
    explicit WEBGL_compressed_texture_astc(Handle h) noexcept;
public:
    explicit WEBGL_compressed_texture_astc(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_astc take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_compressed_texture_astc clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getSupportedProfiles method.
    /// [`WEBGL_compressed_texture_astc.getSupportedProfiles`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_astc/getSupportedProfiles)
    jsbind::TypedArray<jsbind::String> getSupportedProfiles();
};

} // namespace webbind