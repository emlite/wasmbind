#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


class CSSOKLCH : public CSSColorValue {
    explicit CSSOKLCH(Handle h) noexcept;

public:
    explicit CSSOKLCH(const emlite::Val &val) noexcept;
    static CSSOKLCH take_ownership(Handle h) noexcept;

    CSSOKLCH clone() const noexcept;
    CSSOKLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h, const jsbind::Any& alpha);
    jsbind::Any l() const;
    void l(const jsbind::Any& value);
    jsbind::Any c() const;
    void c(const jsbind::Any& value);
    jsbind::Any h() const;
    void h(const jsbind::Any& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

