#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSNumericType
class CSSNumericType : public emlite::Val {
  explicit CSSNumericType(Handle h) noexcept;
public:
    static CSSNumericType take_ownership(Handle h) noexcept;
    explicit CSSNumericType(const emlite::Val &val) noexcept;
    CSSNumericType() noexcept;
    [[nodiscard]] CSSNumericType clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] long length() const;
    /// Setter of the `length` attribute.
    void length(long value);
    /// Getter of the `angle` attribute.
    [[nodiscard]] long angle() const;
    /// Setter of the `angle` attribute.
    void angle(long value);
    /// Getter of the `time` attribute.
    [[nodiscard]] long time() const;
    /// Setter of the `time` attribute.
    void time(long value);
    /// Getter of the `frequency` attribute.
    [[nodiscard]] long frequency() const;
    /// Setter of the `frequency` attribute.
    void frequency(long value);
    /// Getter of the `resolution` attribute.
    [[nodiscard]] long resolution() const;
    /// Setter of the `resolution` attribute.
    void resolution(long value);
    /// Getter of the `flex` attribute.
    [[nodiscard]] long flex() const;
    /// Setter of the `flex` attribute.
    void flex(long value);
    /// Getter of the `percent` attribute.
    [[nodiscard]] long percent() const;
    /// Setter of the `percent` attribute.
    void percent(long value);
    /// Getter of the `percentHint` attribute.
    [[nodiscard]] CSSNumericBaseType percentHint() const;
    /// Setter of the `percentHint` attribute.
    void percentHint(const CSSNumericBaseType& value);
};

} // namespace webbind