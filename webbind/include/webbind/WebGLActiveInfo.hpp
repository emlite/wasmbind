#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WebGLActiveInfo : public emlite::Val {
    explicit WebGLActiveInfo(Handle h) noexcept;

public:
    explicit WebGLActiveInfo(const emlite::Val &val) noexcept;
    static WebGLActiveInfo take_ownership(Handle h) noexcept;

    WebGLActiveInfo clone() const noexcept;
    jsbind::Any size() const;
    jsbind::Any type() const;
    jsbind::DOMString name() const;
};

