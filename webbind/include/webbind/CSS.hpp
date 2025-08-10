#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>


namespace webbind {

/// Namespace CSS
/// [`CSS`](https://developer.mozilla.org/en-US/docs/Web/API/CSS)
namespace CSS {
    /// The escape function.
    /// [`CSS.escape`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/escape)
    jsbind::String escape(const jsbind::String& ident);
} // namespace CSS

} // namespace webbind