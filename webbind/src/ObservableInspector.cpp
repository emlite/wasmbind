#include <webbind/ObservableInspector.hpp>

using emlite::Val;
namespace webbind {

ObservableInspector::ObservableInspector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ObservableInspector ObservableInspector::take_ownership(Handle h) noexcept {
        return ObservableInspector(h);
    }
ObservableInspector::ObservableInspector(const emlite::Val &val) noexcept: emlite::Val(val) {}
ObservableInspector::ObservableInspector() noexcept: emlite::Val(emlite::Val::object()) {}
ObservableInspector ObservableInspector::clone() const noexcept { return *this; }

jsbind::Function ObservableInspector::next() const {
    return emlite::Val::get("next").as<jsbind::Function>();
}

void ObservableInspector::next(const jsbind::Function& value) {
    emlite::Val::set("next", value);
}

jsbind::Function ObservableInspector::error() const {
    return emlite::Val::get("error").as<jsbind::Function>();
}

void ObservableInspector::error(const jsbind::Function& value) {
    emlite::Val::set("error", value);
}

jsbind::Function ObservableInspector::complete() const {
    return emlite::Val::get("complete").as<jsbind::Function>();
}

void ObservableInspector::complete(const jsbind::Function& value) {
    emlite::Val::set("complete", value);
}

jsbind::Function ObservableInspector::subscribe() const {
    return emlite::Val::get("subscribe").as<jsbind::Function>();
}

void ObservableInspector::subscribe(const jsbind::Function& value) {
    emlite::Val::set("subscribe", value);
}

jsbind::Function ObservableInspector::abort() const {
    return emlite::Val::get("abort").as<jsbind::Function>();
}

void ObservableInspector::abort(const jsbind::Function& value) {
    emlite::Val::set("abort", value);
}


} // namespace webbind