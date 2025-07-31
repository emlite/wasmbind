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
    [[nodiscard]] CSSNumericType clone() const noexcept;
    [[nodiscard]] long length() const;
    void length(long value);
    [[nodiscard]] long angle() const;
    void angle(long value);
    [[nodiscard]] long time() const;
    void time(long value);
    [[nodiscard]] long frequency() const;
    void frequency(long value);
    [[nodiscard]] long resolution() const;
    void resolution(long value);
    [[nodiscard]] long flex() const;
    void flex(long value);
    [[nodiscard]] long percent() const;
    void percent(long value);
    [[nodiscard]] CSSNumericBaseType percentHint() const;
    void percentHint(const CSSNumericBaseType& value);
};

/// The CSSNumericValue class.
/// [`CSSNumericValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue)
class CSSNumericValue : public CSSStyleValue {
    explicit CSSNumericValue(Handle h) noexcept;

public:
    explicit CSSNumericValue(const emlite::Val &val) noexcept;
    static CSSNumericValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSNumericValue clone() const noexcept;
    /// The add method.
    /// [`CSSNumericValue.add`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/add)
    CSSNumericValue add(const jsbind::Any& values);
    /// The sub method.
    /// [`CSSNumericValue.sub`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/sub)
    CSSNumericValue sub(const jsbind::Any& values);
    /// The mul method.
    /// [`CSSNumericValue.mul`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/mul)
    CSSNumericValue mul(const jsbind::Any& values);
    /// The div method.
    /// [`CSSNumericValue.div`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/div)
    CSSNumericValue div(const jsbind::Any& values);
    /// The min method.
    /// [`CSSNumericValue.min`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/min)
    CSSNumericValue min(const jsbind::Any& values);
    /// The max method.
    /// [`CSSNumericValue.max`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/max)
    CSSNumericValue max(const jsbind::Any& values);
    /// The equals method.
    /// [`CSSNumericValue.equals`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/equals)
    bool equals(const jsbind::Any& value);
    /// The to method.
    /// [`CSSNumericValue.to`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/to)
    CSSUnitValue to(const jsbind::String& unit);
    /// The toSum method.
    /// [`CSSNumericValue.toSum`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/toSum)
    CSSMathSum toSum(const jsbind::String& units);
    /// The type method.
    /// [`CSSNumericValue.type`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/type)
    CSSNumericType type();
    /// The parse method.
    /// [`CSSNumericValue.parse`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue/parse)
    static CSSNumericValue parse(const jsbind::String& cssText);
};

