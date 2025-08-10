#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSNumericType
/// [`CSSNumericType`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericType)
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

} // namespace webbind