#include <webbind/PerformanceObserverInit.hpp>

using emlite::Val;
namespace webbind {

PerformanceObserverInit::PerformanceObserverInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceObserverInit PerformanceObserverInit::take_ownership(Handle h) noexcept {
        return PerformanceObserverInit(h);
    }
PerformanceObserverInit::PerformanceObserverInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
PerformanceObserverInit::PerformanceObserverInit() noexcept: emlite::Val(emlite::Val::object()) {}
PerformanceObserverInit PerformanceObserverInit::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> PerformanceObserverInit::entryTypes() const {
    return emlite::Val::get("entryTypes").as<jsbind::TypedArray<jsbind::String>>();
}

void PerformanceObserverInit::entryTypes(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("entryTypes", value);
}

jsbind::String PerformanceObserverInit::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void PerformanceObserverInit::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

bool PerformanceObserverInit::buffered() const {
    return emlite::Val::get("buffered").as<bool>();
}

void PerformanceObserverInit::buffered(bool value) {
    emlite::Val::set("buffered", value);
}


} // namespace webbind