#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The EXT_frag_depth class.
/// [`EXT_frag_depth`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_frag_depth)
class EXT_frag_depth : public emlite::Val {
    explicit EXT_frag_depth(Handle h) noexcept;

public:
    explicit EXT_frag_depth(const emlite::Val &val) noexcept;
    static EXT_frag_depth take_ownership(Handle h) noexcept;

    [[nodiscard]] EXT_frag_depth clone() const noexcept;
};

