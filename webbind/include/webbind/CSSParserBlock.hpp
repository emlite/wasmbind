#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserValue.hpp"
#include "enums.hpp"


class CSSParserBlock : public CSSParserValue {
    explicit CSSParserBlock(Handle h) noexcept;

public:
    explicit CSSParserBlock(const emlite::Val &val) noexcept;
    static CSSParserBlock take_ownership(Handle h) noexcept;

    CSSParserBlock clone() const noexcept;
    CSSParserBlock(const jsbind::DOMString& name, const jsbind::Sequence<CSSParserValue>& body);
    jsbind::DOMString name() const;
    jsbind::FrozenArray<CSSParserValue> body() const;
};

