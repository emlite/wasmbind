#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FontFaceVariations : public emlite::Val {
    explicit FontFaceVariations(Handle h) noexcept;

public:
    explicit FontFaceVariations(const emlite::Val &val) noexcept;
    static FontFaceVariations take_ownership(Handle h) noexcept;

    FontFaceVariations clone() const noexcept;
};

