#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WebGLObject : public emlite::Val {
    explicit WebGLObject(Handle h) noexcept;

public:
    explicit WebGLObject(const emlite::Val &val) noexcept;
    static WebGLObject take_ownership(Handle h) noexcept;

    WebGLObject clone() const noexcept;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

