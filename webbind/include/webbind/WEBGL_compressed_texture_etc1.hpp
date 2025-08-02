#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_compressed_texture_etc1 class.
/// [`WEBGL_compressed_texture_etc1`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_etc1)
class WEBGL_compressed_texture_etc1 : public emlite::Val {
    explicit WEBGL_compressed_texture_etc1(Handle h) noexcept;

public:
    explicit WEBGL_compressed_texture_etc1(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_etc1 take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_compressed_texture_etc1 clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

