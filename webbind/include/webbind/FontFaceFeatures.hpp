#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FontFaceFeatures : public emlite::Val {
    explicit FontFaceFeatures(Handle h) noexcept;

public:
    explicit FontFaceFeatures(const emlite::Val &val) noexcept;
    static FontFaceFeatures take_ownership(Handle h) noexcept;

    FontFaceFeatures clone() const noexcept;
};

