#include <jsbind/time.hpp>

using namespace jsbind;

double Performance::now() noexcept {
    return emlite::Val::global("performance")
        .call("now")
        .template as<double>();
}

void clear_timeout(int32_t id) {
    emlite::Val::global("clearTimeout")(emlite::Val(id));
}

void clear_interval(int32_t id) {
    emlite::Val::global("clearInterval")(emlite::Val(id));
}