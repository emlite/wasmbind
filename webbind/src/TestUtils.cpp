#include <webbind/TestUtils.hpp>

using emlite::Val;

namespace webbind {

namespace TestUtils {

jsbind::Promise<jsbind::Undefined> gc() {
    return emlite::Val::global("testutils").call("gc").as<jsbind::Promise<jsbind::Undefined>>();
}

} // namespace TestUtils

} // namespace webbind