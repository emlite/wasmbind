#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FontFaceVariations class.
/// [`FontFaceVariations`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariations)
class FontFaceVariations : public emlite::Val {
    explicit FontFaceVariations(Handle h) noexcept;

public:
    explicit FontFaceVariations(const emlite::Val &val) noexcept;
    static FontFaceVariations take_ownership(Handle h) noexcept;

    [[nodiscard]] FontFaceVariations clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

