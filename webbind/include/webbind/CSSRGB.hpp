#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


class CSSRGB : public CSSColorValue {
    explicit CSSRGB(Handle h) noexcept;

public:
    explicit CSSRGB(const emlite::Val &val) noexcept;
    static CSSRGB take_ownership(Handle h) noexcept;

    CSSRGB clone() const noexcept;
    CSSRGB(const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b);
    CSSRGB(const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b, const jsbind::Any& alpha);
    jsbind::Any r() const;
    void r(const jsbind::Any& value);
    jsbind::Any g() const;
    void g(const jsbind::Any& value);
    jsbind::Any b() const;
    void b(const jsbind::Any& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

