#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_compressed_texture_s3tc
/// [`WEBGL_compressed_texture_s3tc`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_s3tc)
class WEBGL_compressed_texture_s3tc : public emlite::Val {
    explicit WEBGL_compressed_texture_s3tc(Handle h) noexcept;
public:
    explicit WEBGL_compressed_texture_s3tc(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_s3tc take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_compressed_texture_s3tc clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind