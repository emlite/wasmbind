#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class FontFacePalette;

/// Interface FontFacePalettes
/// [`FontFacePalettes`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalettes)
class FontFacePalettes : public emlite::Val {
    explicit FontFacePalettes(Handle h) noexcept;
public:
    explicit FontFacePalettes(const emlite::Val &val) noexcept;
    static FontFacePalettes take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFacePalettes clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`FontFacePalettes.length`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalettes/length)
    /// [`FontFacePalettes.length`](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalettes/length)
    [[nodiscard]] unsigned long length() const;
};

} // namespace webbind