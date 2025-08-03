#include <jsbind/time.hpp>

using namespace jsbind;

double Performance::now() noexcept {
    return emlite::Val::global("performance").call("now").template as<double>();
}

void clearTimeout(int32_t id) { emlite::Val::global("clearTimeout")(emlite::Val(id)); }

void clearInterval(int32_t id) { emlite::Val::global("clearInterval")(emlite::Val(id)); }

int32_t setTimeout(const Function &cb, int32_t millis) {
    return emlite::Val::global("setTimeout")(cb, emlite::Val(millis)).template as<int32_t>();
}

int32_t setInterval(const Function &cb, int32_t millis) {
    return emlite::Val::global("setInterval")(cb, emlite::Val(millis)).template as<int32_t>();
}