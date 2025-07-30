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
    FunctionParameter clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String defaultValue() const;
    void defaultValue(const jsbind::String& value);
};

class CSSFunctionRule : public CSSGroupingRule {
    explicit CSSFunctionRule(Handle h) noexcept;

public:
    explicit CSSFunctionRule(const emlite::Val &val) noexcept;
    static CSSFunctionRule take_ownership(Handle h) noexcept;

    CSSFunctionRule clone() const noexcept;
    jsbind::String name() const;
    jsbind::TypedArray<FunctionParameter> getParameters();
    jsbind::String returnType() const;
};

