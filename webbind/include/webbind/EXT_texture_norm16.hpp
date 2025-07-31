#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The EXT_texture_norm16 class.
/// [`EXT_texture_norm16`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_texture_norm16)
class EXT_texture_norm16 : public emlite::Val {
    explicit EXT_texture_norm16(Handle h) noexcept;

public:
    explicit EXT_texture_norm16(const emlite::Val &val) noexcept;
    static EXT_texture_norm16 take_ownership(Handle h) noexcept;

    [[nodiscard]] EXT_texture_norm16 clone() const noexcept;
};

