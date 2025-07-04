#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSStyleSheet;


class StyleSheetList : public emlite::Val {
    explicit StyleSheetList(Handle h) noexcept;

public:
    explicit StyleSheetList(const emlite::Val &val) noexcept;
    static StyleSheetList take_ownership(Handle h) noexcept;

    StyleSheetList clone() const noexcept;
    CSSStyleSheet item(unsigned long index);
    unsigned long length() const;
};

