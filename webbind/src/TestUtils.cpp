#include <webbind/TestUtils.hpp>

namespace webbind {

namespace TestUtils {

jsbind::Promise<jsbind::Undefined> gc() {
    return emlite::Val::global("testutils").call("gc").as<jsbind::Promise<jsbind::Undefined>>();
}

} // namespace TestUtils

} // namespace webbind