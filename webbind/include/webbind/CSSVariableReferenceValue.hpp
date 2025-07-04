#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSUnparsedValue;


class CSSVariableReferenceValue : public emlite::Val {
    explicit CSSVariableReferenceValue(Handle h) noexcept;

public:
    explicit CSSVariableReferenceValue(const emlite::Val &val) noexcept;
    static CSSVariableReferenceValue take_ownership(Handle h) noexcept;

    CSSVariableReferenceValue clone() const noexcept;
    CSSVariableReferenceValue(const jsbind::USVString& variable, const CSSUnparsedValue& fallback);
    jsbind::USVString variable() const;
    void variable(const jsbind::USVString& value);
    CSSUnparsedValue fallback() const;
};

