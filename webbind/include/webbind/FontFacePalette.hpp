#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FontFacePalette : public emlite::Val {
    explicit FontFacePalette(Handle h) noexcept;

public:
    explicit FontFacePalette(const emlite::Val &val) noexcept;
    static FontFacePalette take_ownership(Handle h) noexcept;

    FontFacePalette clone() const noexcept;
    unsigned long length() const;
    bool usableWithLightBackground() const;
    bool usableWithDarkBackground() const;
};

