#include <webbind/TestUtils.hpp>


jsbind::Promise TestUtils::gc() {
    return emlite::Val::global("testutils").call("gc").as<jsbind::Promise>();
}

