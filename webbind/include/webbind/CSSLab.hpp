#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


class CSSLab : public CSSColorValue {
    explicit CSSLab(Handle h) noexcept;

public:
    explicit CSSLab(const emlite::Val &val) noexcept;
    static CSSLab take_ownership(Handle h) noexcept;

    CSSLab clone() const noexcept;
    CSSLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b, const jsbind::Any& alpha);
    jsbind::Any l() const;
    void l(const jsbind::Any& value);
    jsbind::Any a() const;
    void a(const jsbind::Any& value);
    jsbind::Any b() const;
    void b(const jsbind::Any& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

