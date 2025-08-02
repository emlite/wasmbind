#include <webbind/ReadableStreamDefaultController.hpp>


ReadableStreamDefaultController ReadableStreamDefaultController::take_ownership(Handle h) noexcept {
        return ReadableStreamDefaultController(h);
    }
ReadableStreamDefaultController ReadableStreamDefaultController::clone() const noexcept { return *this; }
emlite::Val ReadableStreamDefaultController::instance() noexcept { return emlite::Val::global("ReadableStreamDefaultController"); }
ReadableStreamDefaultController::ReadableStreamDefaultController(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamDefaultController::ReadableStreamDefaultController(const emlite::Val &val) noexcept: emlite::Val(val) {}


double ReadableStreamDefaultController::desiredSize() const {
    return emlite::Val::get("desiredSize").as<double>();
}

jsbind::Undefined ReadableStreamDefaultController::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined ReadableStreamDefaultController::enqueue() {
    return emlite::Val::call("enqueue").as<jsbind::Undefined>();
}

jsbind::Undefined ReadableStreamDefaultController::enqueue(const jsbind::Any& chunk) {
    return emlite::Val::call("enqueue", chunk).as<jsbind::Undefined>();
}

jsbind::Undefined ReadableStreamDefaultController::error() {
    return emlite::Val::call("error").as<jsbind::Undefined>();
}

jsbind::Undefined ReadableStreamDefaultController::error(const jsbind::Any& e) {
    return emlite::Val::call("error", e).as<jsbind::Undefined>();
}

