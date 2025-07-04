#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserValue.hpp"
#include "enums.hpp"


class CSSParserFunction : public CSSParserValue {
    explicit CSSParserFunction(Handle h) noexcept;

public:
    explicit CSSParserFunction(const emlite::Val &val) noexcept;
    static CSSParserFunction take_ownership(Handle h) noexcept;

    CSSParserFunction clone() const noexcept;
    CSSParserFunction(const jsbind::DOMString& name, const jsbind::Sequence<jsbind::Sequence<CSSParserValue>>& args);
    jsbind::DOMString name() const;
    jsbind::FrozenArray<jsbind::FrozenArray<CSSParserValue>> args() const;
};

