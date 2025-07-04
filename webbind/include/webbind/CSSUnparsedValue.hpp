#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


class CSSUnparsedValue : public CSSStyleValue {
    explicit CSSUnparsedValue(Handle h) noexcept;

public:
    explicit CSSUnparsedValue(const emlite::Val &val) noexcept;
    static CSSUnparsedValue take_ownership(Handle h) noexcept;

    CSSUnparsedValue clone() const noexcept;
    CSSUnparsedValue(const jsbind::Sequence<jsbind::Any>& members);
    unsigned long length() const;
};

