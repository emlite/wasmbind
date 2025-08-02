#include <webbind/TransformStreamDefaultController.hpp>


TransformStreamDefaultController TransformStreamDefaultController::take_ownership(Handle h) noexcept {
        return TransformStreamDefaultController(h);
    }
TransformStreamDefaultController TransformStreamDefaultController::clone() const noexcept { return *this; }
emlite::Val TransformStreamDefaultController::instance() noexcept { return emlite::Val::global("TransformStreamDefaultController"); }
TransformStreamDefaultController::TransformStreamDefaultController(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TransformStreamDefaultController::TransformStreamDefaultController(const emlite::Val &val) noexcept: emlite::Val(val) {}


double TransformStreamDefaultController::desiredSize() const {
    return emlite::Val::get("desiredSize").as<double>();
}

jsbind::Undefined TransformStreamDefaultController::enqueue() {
    return emlite::Val::call("enqueue").as<jsbind::Undefined>();
}

jsbind::Undefined TransformStreamDefaultController::enqueue(const jsbind::Any& chunk) {
    return emlite::Val::call("enqueue", chunk).as<jsbind::Undefined>();
}

jsbind::Undefined TransformStreamDefaultController::error() {
    return emlite::Val::call("error").as<jsbind::Undefined>();
}

jsbind::Undefined TransformStreamDefaultController::error(const jsbind::Any& reason) {
    return emlite::Val::call("error", reason).as<jsbind::Undefined>();
}

jsbind::Undefined TransformStreamDefaultController::terminate() {
    return emlite::Val::call("terminate").as<jsbind::Undefined>();
}

