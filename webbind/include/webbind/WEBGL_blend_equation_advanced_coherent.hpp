#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_blend_equation_advanced_coherent class.
/// [`WEBGL_blend_equation_advanced_coherent`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_blend_equation_advanced_coherent)
class WEBGL_blend_equation_advanced_coherent : public emlite::Val {
    explicit WEBGL_blend_equation_advanced_coherent(Handle h) noexcept;

public:
    explicit WEBGL_blend_equation_advanced_coherent(const emlite::Val &val) noexcept;
    static WEBGL_blend_equation_advanced_coherent take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_blend_equation_advanced_coherent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

