#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"

class FunctionParameter;


class FunctionParameter : public emlite::Val {
  explicit FunctionParameter(Handle h) noexcept;
public:
    static FunctionParameter take_ownership(Handle h) noexcept;
    explicit FunctionParameter(const emlite::Val &val) noexcept;
    FunctionParameter() noexcept;
    [[nodiscard]] FunctionParameter clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::String defaultValue() const;
    void defaultValue(const jsbind::String& value);
};

/// The CSSFunctionRule class.
/// [`CSSFunctionRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionRule)
class CSSFunctionRule : public CSSGroupingRule {
    explicit CSSFunctionRule(Handle h) noexcept;

public:
    explicit CSSFunctionRule(const emlite::Val &val) noexcept;
    static CSSFunctionRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSFunctionRule clone() const noexcept;
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

