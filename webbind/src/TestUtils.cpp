#include <webbind/TestUtils.hpp>


jsbind::Promise<jsbind::Undefined> TestUtils::gc() {
    return emlite::Val::global("testutils").call("gc").as<jsbind::Promise<jsbind::Undefined>>();
}

