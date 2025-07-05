#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class TextFormat : public emlite::Val {
    explicit TextFormat(Handle h) noexcept;

public:
    explicit TextFormat(const emlite::Val &val) noexcept;
    static TextFormat take_ownership(Handle h) noexcept;

    TextFormat clone() const noexcept;
    TextFormat();
    TextFormat(const jsbind::Any& options);
    unsigned long rangeStart() const;
    unsigned long rangeEnd() const;
    UnderlineStyle underlineStyle() const;
    UnderlineThickness underlineThickness() const;
};

