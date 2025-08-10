#include <webbind/StartViewTransitionOptions.hpp>

namespace webbind {

StartViewTransitionOptions::StartViewTransitionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StartViewTransitionOptions StartViewTransitionOptions::take_ownership(Handle h) noexcept {
    return StartViewTransitionOptions(h);
}

StartViewTransitionOptions::StartViewTransitionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

StartViewTransitionOptions::StartViewTransitionOptions() noexcept: emlite::Val(emlite::Val::object()) {}

StartViewTransitionOptions StartViewTransitionOptions::clone() const noexcept { return *this; }

jsbind::Function StartViewTransitionOptions::update() const {
    return emlite::Val::get("update").as<jsbind::Function>();
}

void StartViewTransitionOptions::update(const jsbind::Function& value) {
    emlite::Val::set("update", value);
}

jsbind::TypedArray<jsbind::String> StartViewTransitionOptions::types() const {
    return emlite::Val::get("types").as<jsbind::TypedArray<jsbind::String>>();
}

void StartViewTransitionOptions::types(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("types", value);
}


} // namespace webbind