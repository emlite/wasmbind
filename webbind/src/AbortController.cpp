#include <webbind/AbortController.hpp>
#include <webbind/AbortSignal.hpp>


AbortController AbortController::take_ownership(Handle h) noexcept {
        return AbortController(h);
    }
AbortController AbortController::clone() const noexcept { return *this; }
AbortController::AbortController(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AbortController::AbortController(const emlite::Val &val) noexcept: emlite::Val(val) {}


AbortController::AbortController() : emlite::Val(emlite::Val::global("AbortController").new_()) {}

AbortSignal AbortController::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

jsbind::Undefined AbortController::abort() {
    return emlite::Val::call("abort").as<jsbind::Undefined>();
}

jsbind::Undefined AbortController::abort(const jsbind::Any& reason) {
    return emlite::Val::call("abort", reason).as<jsbind::Undefined>();
}

