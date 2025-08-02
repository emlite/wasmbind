#include <webbind/WEBGL_lose_context.hpp>


WEBGL_lose_context WEBGL_lose_context::take_ownership(Handle h) noexcept {
        return WEBGL_lose_context(h);
    }
WEBGL_lose_context WEBGL_lose_context::clone() const noexcept { return *this; }
emlite::Val WEBGL_lose_context::instance() noexcept { return emlite::Val::global("WEBGL_lose_context"); }
WEBGL_lose_context::WEBGL_lose_context(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_lose_context::WEBGL_lose_context(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined WEBGL_lose_context::loseContext() {
    return emlite::Val::call("loseContext").as<jsbind::Undefined>();
}

jsbind::Undefined WEBGL_lose_context::restoreContext() {
    return emlite::Val::call("restoreContext").as<jsbind::Undefined>();
}

