#include <webbind/WritableStreamDefaultController.hpp>
#include <webbind/AbortSignal.hpp>


WritableStreamDefaultController WritableStreamDefaultController::take_ownership(Handle h) noexcept {
        return WritableStreamDefaultController(h);
    }
WritableStreamDefaultController WritableStreamDefaultController::clone() const noexcept { return *this; }
WritableStreamDefaultController::WritableStreamDefaultController(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WritableStreamDefaultController::WritableStreamDefaultController(const emlite::Val &val) noexcept: emlite::Val(val) {}


AbortSignal WritableStreamDefaultController::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

jsbind::Undefined WritableStreamDefaultController::error() {
    return emlite::Val::call("error").as<jsbind::Undefined>();
}

jsbind::Undefined WritableStreamDefaultController::error(const jsbind::Any& e) {
    return emlite::Val::call("error", e).as<jsbind::Undefined>();
}

