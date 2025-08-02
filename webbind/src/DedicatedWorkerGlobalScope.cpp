#include <webbind/DedicatedWorkerGlobalScope.hpp>
#include <webbind/MessagePort.hpp>


DedicatedWorkerGlobalScope DedicatedWorkerGlobalScope::take_ownership(Handle h) noexcept {
        return DedicatedWorkerGlobalScope(h);
    }
DedicatedWorkerGlobalScope DedicatedWorkerGlobalScope::clone() const noexcept { return *this; }
emlite::Val DedicatedWorkerGlobalScope::instance() noexcept { return emlite::Val::global("DedicatedWorkerGlobalScope"); }
DedicatedWorkerGlobalScope::DedicatedWorkerGlobalScope(Handle h) noexcept : WorkerGlobalScope(emlite::Val::take_ownership(h)) {}
DedicatedWorkerGlobalScope::DedicatedWorkerGlobalScope(const emlite::Val &val) noexcept: WorkerGlobalScope(val) {}


jsbind::String DedicatedWorkerGlobalScope::name() const {
    return WorkerGlobalScope::get("name").as<jsbind::String>();
}

jsbind::Undefined DedicatedWorkerGlobalScope::postMessage(const jsbind::Any& message) {
    return WorkerGlobalScope::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined DedicatedWorkerGlobalScope::postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options) {
    return WorkerGlobalScope::call("postMessage", message, options).as<jsbind::Undefined>();
}

jsbind::Undefined DedicatedWorkerGlobalScope::close() {
    return WorkerGlobalScope::call("close").as<jsbind::Undefined>();
}

jsbind::Any DedicatedWorkerGlobalScope::onrtctransform() const {
    return WorkerGlobalScope::get("onrtctransform").as<jsbind::Any>();
}

void DedicatedWorkerGlobalScope::onrtctransform(const jsbind::Any& value) {
    WorkerGlobalScope::set("onrtctransform", value);
}

unsigned long DedicatedWorkerGlobalScope::requestAnimationFrame(const jsbind::Function& callback) {
    return WorkerGlobalScope::call("requestAnimationFrame", callback).as<unsigned long>();
}

jsbind::Undefined DedicatedWorkerGlobalScope::cancelAnimationFrame(unsigned long handle) {
    return WorkerGlobalScope::call("cancelAnimationFrame", handle).as<jsbind::Undefined>();
}

jsbind::Any DedicatedWorkerGlobalScope::onmessage() const {
    return WorkerGlobalScope::get("onmessage").as<jsbind::Any>();
}

void DedicatedWorkerGlobalScope::onmessage(const jsbind::Any& value) {
    WorkerGlobalScope::set("onmessage", value);
}

jsbind::Any DedicatedWorkerGlobalScope::onmessageerror() const {
    return WorkerGlobalScope::get("onmessageerror").as<jsbind::Any>();
}

void DedicatedWorkerGlobalScope::onmessageerror(const jsbind::Any& value) {
    WorkerGlobalScope::set("onmessageerror", value);
}

