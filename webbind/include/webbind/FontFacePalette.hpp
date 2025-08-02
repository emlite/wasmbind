#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FontFacePalette class.
/// [`FontFacePalette`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette)
class FontFacePalette : public emlite::Val {
    explicit FontFacePalette(Handle h) noexcept;

public:
    explicit FontFacePalette(const emlite::Val &val) noexcept;
    static FontFacePalette take_ownership(Handle h) noexcept;

    [[nodiscard]] FontFacePalette clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`FontFacePalette.length`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `usableWithLightBackground` attribute.
    /// [`FontFacePalette.usableWithLightBackground`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/usableWithLightBackground)
    [[nodiscard]] bool usableWithLightBackground() const;
    /// Getter of the `usableWithDarkBackground` attribute.
    /// [`FontFacePalette.usableWithDarkBackground`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/usableWithDarkBackground)
    [[nodiscard]] bool usableWithDarkBackground() const;
};

