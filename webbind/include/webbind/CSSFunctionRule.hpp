#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSGroupingRule.hpp"
#include "FunctionParameter.hpp"

namespace webbind {

/// Interface CSSFunctionRule
/// [`CSSFunctionRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionRule)
class CSSFunctionRule : public CSSGroupingRule {
    explicit CSSFunctionRule(Handle h) noexcept;
public:
    explicit CSSFunctionRule(const emlite::Val &val) noexcept;
    static CSSFunctionRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSFunctionRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSFunctionRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// The getParameters method.
    /// [`CSSFunctionRule.getParameters`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionRule/getParameters)
    jsbind::TypedArray<FunctionParameter> getParameters();
    /// Getter of the `returnType` attribute.
    /// [`CSSFunctionRule.returnType`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionRule/returnType)
    [[nodiscard]] jsbind::String returnType() const;
};

} // namespace webbind