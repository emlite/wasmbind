#include <webbind/ViewTransition.hpp>
#include <webbind/ViewTransitionTypeSet.hpp>

namespace webbind {

ViewTransition ViewTransition::take_ownership(Handle h) noexcept {
        return ViewTransition(h);
    }
ViewTransition ViewTransition::clone() const noexcept { return *this; }
emlite::Val ViewTransition::instance() noexcept { return emlite::Val::global("ViewTransition"); }
ViewTransition::ViewTransition(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ViewTransition::ViewTransition(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> ViewTransition::updateCallbackDone() const {
    return emlite::Val::get("updateCallbackDone").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ViewTransition::ready() const {
    return emlite::Val::get("ready").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ViewTransition::finished() const {
    return emlite::Val::get("finished").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined ViewTransition::skipTransition() {
    return emlite::Val::call("skipTransition").as<jsbind::Undefined>();
}

ViewTransitionTypeSet ViewTransition::types() const {
    return emlite::Val::get("types").as<ViewTransitionTypeSet>();
}

void ViewTransition::types(const ViewTransitionTypeSet& value) {
    emlite::Val::set("types", value);
}


} // namespace webbind