#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FontFaceFeatures class.
/// [`FontFaceFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceFeatures)
class FontFaceFeatures : public emlite::Val {
    explicit FontFaceFeatures(Handle h) noexcept;

public:
    explicit FontFaceFeatures(const emlite::Val &val) noexcept;
    static FontFaceFeatures take_ownership(Handle h) noexcept;

    [[nodiscard]] FontFaceFeatures clone() const noexcept;
};

