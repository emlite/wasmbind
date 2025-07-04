#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_debug_renderer_info : public emlite::Val {
    explicit WEBGL_debug_renderer_info(Handle h) noexcept;

public:
    explicit WEBGL_debug_renderer_info(const emlite::Val &val) noexcept;
    static WEBGL_debug_renderer_info take_ownership(Handle h) noexcept;

    WEBGL_debug_renderer_info clone() const noexcept;
};

