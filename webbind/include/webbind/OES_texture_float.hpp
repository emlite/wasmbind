#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The OES_texture_float class.
/// [`OES_texture_float`](https://developer.mozilla.org/en-US/docs/Web/API/OES_texture_float)
class OES_texture_float : public emlite::Val {
    explicit OES_texture_float(Handle h) noexcept;

public:
    explicit OES_texture_float(const emlite::Val &val) noexcept;
    static OES_texture_float take_ownership(Handle h) noexcept;

    [[nodiscard]] OES_texture_float clone() const noexcept;
};

