#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSUnparsedValue;


/// The CSSVariableReferenceValue class.
/// [`CSSVariableReferenceValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue)
class CSSVariableReferenceValue : public emlite::Val {
    explicit CSSVariableReferenceValue(Handle h) noexcept;

public:
    explicit CSSVariableReferenceValue(const emlite::Val &val) noexcept;
    static CSSVariableReferenceValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSVariableReferenceValue clone() const noexcept;
    /// The `new CSSVariableReferenceValue(..)` constructor, creating a new CSSVariableReferenceValue instance
    CSSVariableReferenceValue(const jsbind::String& variable);
    /// The `new CSSVariableReferenceValue(..)` constructor, creating a new CSSVariableReferenceValue instance
    CSSVariableReferenceValue(const jsbind::String& variable, const CSSUnparsedValue& fallback);
    /// Getter of the `variable` attribute.
    /// [`CSSVariableReferenceValue.variable`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/variable)
    [[nodiscard]] jsbind::String variable() const;
    /// Setter of the `variable` attribute.
    /// [`CSSVariableReferenceValue.variable`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/variable)
    void variable(const jsbind::String& value);
    /// Getter of the `fallback` attribute.
    /// [`CSSVariableReferenceValue.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/fallback)
    [[nodiscard]] CSSUnparsedValue fallback() const;
};

