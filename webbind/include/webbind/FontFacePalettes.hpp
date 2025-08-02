#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FontFacePalette;


/// The FontFacePalettes class.
/// [`FontFacePalettes`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalettes)
class FontFacePalettes : public emlite::Val {
    explicit FontFacePalettes(Handle h) noexcept;

public:
    explicit FontFacePalettes(const emlite::Val &val) noexcept;
    static FontFacePalettes take_ownership(Handle h) noexcept;

    [[nodiscard]] FontFacePalettes clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`FontFacePalettes.length`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalettes/length)
    [[nodiscard]] unsigned long length() const;
};

