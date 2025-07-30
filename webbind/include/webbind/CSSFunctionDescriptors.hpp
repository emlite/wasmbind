#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleDeclaration.hpp"
#include "enums.hpp"


class CSSFunctionDescriptors : public CSSStyleDeclaration {
    explicit CSSFunctionDescriptors(Handle h) noexcept;

public:
    explicit CSSFunctionDescriptors(const emlite::Val &val) noexcept;
    static CSSFunctionDescriptors take_ownership(Handle h) noexcept;

    CSSFunctionDescriptors clone() const noexcept;
    jsbind::String result() const;
    void result(const jsbind::String& value);
};

