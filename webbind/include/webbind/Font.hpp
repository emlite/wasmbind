#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Font : public emlite::Val {
    explicit Font(Handle h) noexcept;

public:
    explicit Font(const emlite::Val &val) noexcept;
    static Font take_ownership(Handle h) noexcept;

    Font clone() const noexcept;
    jsbind::String name() const;
    unsigned long glyphsRendered() const;
};

