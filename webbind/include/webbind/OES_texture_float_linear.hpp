#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The OES_texture_float_linear class.
/// [`OES_texture_float_linear`](https://developer.mozilla.org/en-US/docs/Web/API/OES_texture_float_linear)
class OES_texture_float_linear : public emlite::Val {
    explicit OES_texture_float_linear(Handle h) noexcept;

public:
    explicit OES_texture_float_linear(const emlite::Val &val) noexcept;
    static OES_texture_float_linear take_ownership(Handle h) noexcept;

    [[nodiscard]] OES_texture_float_linear clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

