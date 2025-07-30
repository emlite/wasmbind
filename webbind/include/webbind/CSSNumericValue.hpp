#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"

class CSSNumericValue;
class CSSUnitValue;
class CSSMathSum;
class CSSNumericType;


class CSSNumericType : public emlite::Val {
  explicit CSSNumericType(Handle h) noexcept;
public:
    static CSSNumericType take_ownership(Handle h) noexcept;
    explicit CSSNumericType(const emlite::Val &val) noexcept;
    CSSNumericType() noexcept;
    CSSNumericType clone() const noexcept;
    long length() const;
    void length(long value);
    long angle() const;
    void angle(long value);
    long time() const;
    void time(long value);
    long frequency() const;
    void frequency(long value);
    long resolution() const;
    void resolution(long value);
    long flex() const;
    void flex(long value);
    long percent() const;
    void percent(long value);
    CSSNumericBaseType percentHint() const;
    void percentHint(const CSSNumericBaseType& value);
};

class CSSNumericValue : public CSSStyleValue {
    explicit CSSNumericValue(Handle h) noexcept;

public:
    explicit CSSNumericValue(const emlite::Val &val) noexcept;
    static CSSNumericValue take_ownership(Handle h) noexcept;

    CSSNumericValue clone() const noexcept;
    CSSNumericValue add(const jsbind::Any& values);
    CSSNumericValue sub(const jsbind::Any& values);
    CSSNumericValue mul(const jsbind::Any& values);
    CSSNumericValue div(const jsbind::Any& values);
    CSSNumericValue min(const jsbind::Any& values);
    CSSNumericValue max(const jsbind::Any& values);
    bool equals(const jsbind::Any& value);
    CSSUnitValue to(const jsbind::String& unit);
    CSSMathSum toSum(const jsbind::String& units);
    CSSNumericType type();
    static CSSNumericValue parse(const jsbind::String& cssText);
};

