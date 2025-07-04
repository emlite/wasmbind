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
    jsbind::CSSOMString name() const;
    void name(const jsbind::CSSOMString& value);
    jsbind::CSSOMString type() const;
    void type(const jsbind::CSSOMString& value);
    jsbind::CSSOMString defaultValue() const;
    void defaultValue(const jsbind::CSSOMString& value);
};

class CSSFunctionRule : public CSSGroupingRule {
    explicit CSSFunctionRule(Handle h) noexcept;

public:
    explicit CSSFunctionRule(const emlite::Val &val) noexcept;
    static CSSFunctionRule take_ownership(Handle h) noexcept;

    CSSFunctionRule clone() const noexcept;
    jsbind::CSSOMString name() const;
    jsbind::Sequence<FunctionParameter> getParameters();
    jsbind::CSSOMString returnType() const;
};

