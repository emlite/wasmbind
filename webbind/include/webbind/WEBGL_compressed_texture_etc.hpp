#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_compressed_texture_etc
/// [`WEBGL_compressed_texture_etc`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_etc)
class WEBGL_compressed_texture_etc : public emlite::Val {
    explicit WEBGL_compressed_texture_etc(Handle h) noexcept;
public:
    explicit WEBGL_compressed_texture_etc(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_etc take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_compressed_texture_etc clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind