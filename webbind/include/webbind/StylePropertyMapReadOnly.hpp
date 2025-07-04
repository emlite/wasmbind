#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSStyleValue;


class StylePropertyMapReadOnly : public emlite::Val {
    explicit StylePropertyMapReadOnly(Handle h) noexcept;

public:
    explicit StylePropertyMapReadOnly(const emlite::Val &val) noexcept;
    static StylePropertyMapReadOnly take_ownership(Handle h) noexcept;

    StylePropertyMapReadOnly clone() const noexcept;
    jsbind::Any get(const jsbind::USVString& property);
    jsbind::Sequence<CSSStyleValue> getAll(const jsbind::USVString& property);
    bool has(const jsbind::USVString& property);
    unsigned long size() const;
};

