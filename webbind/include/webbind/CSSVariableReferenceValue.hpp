#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSUnparsedValue;

/// Interface CSSVariableReferenceValue
/// [`CSSVariableReferenceValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue)
class CSSVariableReferenceValue : public emlite::Val {
    explicit CSSVariableReferenceValue(Handle h) noexcept;
public:
    explicit CSSVariableReferenceValue(const emlite::Val &val) noexcept;
    static CSSVariableReferenceValue take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSVariableReferenceValue clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSVariableReferenceValue(..)` constructor, creating a new CSSVariableReferenceValue instance
    CSSVariableReferenceValue(const jsbind::String& variable);
    /// The `new CSSVariableReferenceValue(..)` constructor, creating a new CSSVariableReferenceValue instance
    CSSVariableReferenceValue(const jsbind::String& variable, const CSSUnparsedValue& fallback);
    /// [`CSSVariableReferenceValue.variable`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/variable)
    /// [`CSSVariableReferenceValue.variable`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/variable)
    [[nodiscard]] jsbind::String variable() const;
    /// Setter of the `variable` attribute.
    /// [`CSSVariableReferenceValue.variable`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/variable)
    void variable(const jsbind::String& value);
    /// [`CSSVariableReferenceValue.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/fallback)
    /// [`CSSVariableReferenceValue.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue/fallback)
    [[nodiscard]] CSSUnparsedValue fallback() const;
};

} // namespace webbind