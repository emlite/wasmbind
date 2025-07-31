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

int32_t set_timeout(const Function &cb, int32_t millis) {
    return emlite::Val::global("setTimeout")(
               cb, emlite::Val(millis)
    )
        .template as<int32_t>();
}

int32_t set_interval(const Function &cb, int32_t millis) {
    return emlite::Val::global("setInterval")(
               cb, emlite::Val(millis)
    )
        .template as<int32_t>();
}