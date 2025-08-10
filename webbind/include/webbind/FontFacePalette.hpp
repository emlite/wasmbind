#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface FontFacePalette
/// [`FontFacePalette`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette)
class FontFacePalette : public emlite::Val {
    explicit FontFacePalette(Handle h) noexcept;
public:
    explicit FontFacePalette(const emlite::Val &val) noexcept;
    static FontFacePalette take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFacePalette clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`FontFacePalette.length`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/length)
    /// [`FontFacePalette.length`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/length)
    [[nodiscard]] unsigned long length() const;
    /// [`FontFacePalette.usableWithLightBackground`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/usableWithLightBackground)
    /// [`FontFacePalette.usableWithLightBackground`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/usableWithLightBackground)
    [[nodiscard]] bool usableWithLightBackground() const;
    /// [`FontFacePalette.usableWithDarkBackground`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/usableWithDarkBackground)
    /// [`FontFacePalette.usableWithDarkBackground`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette/usableWithDarkBackground)
    [[nodiscard]] bool usableWithDarkBackground() const;
};

} // namespace webbind