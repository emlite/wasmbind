#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSNumericValue.hpp"
#include "enums.hpp"


class CSSUnitValue : public CSSNumericValue {
    explicit CSSUnitValue(Handle h) noexcept;

public:
    explicit CSSUnitValue(const emlite::Val &val) noexcept;
    static CSSUnitValue take_ownership(Handle h) noexcept;

    CSSUnitValue clone() const noexcept;
    CSSUnitValue(double value, const jsbind::USVString& unit);
    double value() const;
    void value(double value);
    jsbind::USVString unit() const;
};

