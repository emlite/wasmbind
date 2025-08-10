#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface Font
/// [`Font`](https://developer.mozilla.org/en-US/docs/Web/API/Font)
class Font : public emlite::Val {
    explicit Font(Handle h) noexcept;
public:
    explicit Font(const emlite::Val &val) noexcept;
    static Font take_ownership(Handle h) noexcept;
    [[nodiscard]] Font clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Font.name`](https://developer.mozilla.org/en-US/docs/Web/API/Font/name)
    /// [`Font.name`](https://developer.mozilla.org/en-US/docs/Web/API/Font/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`Font.glyphsRendered`](https://developer.mozilla.org/en-US/docs/Web/API/Font/glyphsRendered)
    /// [`Font.glyphsRendered`](https://developer.mozilla.org/en-US/docs/Web/API/Font/glyphsRendered)
    [[nodiscard]] unsigned long glyphsRendered() const;
};

} // namespace webbind