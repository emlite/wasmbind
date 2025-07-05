#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


class CSSLCH : public CSSColorValue {
    explicit CSSLCH(Handle h) noexcept;

public:
    explicit CSSLCH(const emlite::Val &val) noexcept;
    static CSSLCH take_ownership(Handle h) noexcept;

    CSSLCH clone() const noexcept;
    CSSLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h);
    CSSLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h, const jsbind::Any& alpha);
    jsbind::Any l() const;
    void l(const jsbind::Any& value);
    jsbind::Any c() const;
    void c(const jsbind::Any& value);
    jsbind::Any h() const;
    void h(const jsbind::Any& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

