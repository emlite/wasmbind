#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FontFacePalette;


class FontFacePalettes : public emlite::Val {
    explicit FontFacePalettes(Handle h) noexcept;

public:
    explicit FontFacePalettes(const emlite::Val &val) noexcept;
    static FontFacePalettes take_ownership(Handle h) noexcept;

    FontFacePalettes clone() const noexcept;
    unsigned long length() const;
};

