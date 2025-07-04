#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


class CSSOKLab : public CSSColorValue {
    explicit CSSOKLab(Handle h) noexcept;

public:
    explicit CSSOKLab(const emlite::Val &val) noexcept;
    static CSSOKLab take_ownership(Handle h) noexcept;

    CSSOKLab clone() const noexcept;
    CSSOKLab(const jsbind::Any& l, const jsbind::Any& a, const jsbind::Any& b, const jsbind::Any& alpha);
    jsbind::Any l() const;
    void l(const jsbind::Any& value);
    jsbind::Any a() const;
    void a(const jsbind::Any& value);
    jsbind::Any b() const;
    void b(const jsbind::Any& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

