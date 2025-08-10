#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>


namespace webbind {

/// Namespace TestUtils
/// [`TestUtils`](https://developer.mozilla.org/en-US/docs/Web/API/TestUtils)
namespace TestUtils {
    /// The gc function.
    /// [`TestUtils.gc`](https://developer.mozilla.org/en-US/docs/Web/API/TestUtils/gc)
    jsbind::Promise<jsbind::Undefined> gc();
} // namespace TestUtils

} // namespace webbind