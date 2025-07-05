#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSHWB : public CSSColorValue {
    explicit CSSHWB(Handle h) noexcept;

public:
    explicit CSSHWB(const emlite::Val &val) noexcept;
    static CSSHWB take_ownership(Handle h) noexcept;

    CSSHWB clone() const noexcept;
    CSSHWB(const CSSNumericValue& h, const jsbind::Any& w, const jsbind::Any& b);
    CSSHWB(const CSSNumericValue& h, const jsbind::Any& w, const jsbind::Any& b, const jsbind::Any& alpha);
    CSSNumericValue h() const;
    void h(const CSSNumericValue& value);
    jsbind::Any w() const;
    void w(const jsbind::Any& value);
    jsbind::Any b() const;
    void b(const jsbind::Any& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

