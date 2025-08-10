#include <webbind/MutationObserverInit.hpp>

namespace webbind {

MutationObserverInit::MutationObserverInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MutationObserverInit MutationObserverInit::take_ownership(Handle h) noexcept {
    return MutationObserverInit(h);
}

MutationObserverInit::MutationObserverInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

MutationObserverInit::MutationObserverInit() noexcept: emlite::Val(emlite::Val::object()) {}

MutationObserverInit MutationObserverInit::clone() const noexcept { return *this; }

bool MutationObserverInit::childList() const {
    return emlite::Val::get("childList").as<bool>();
}

void MutationObserverInit::childList(bool value) {
    emlite::Val::set("childList", value);
}

bool MutationObserverInit::attributes() const {
    return emlite::Val::get("attributes").as<bool>();
}

void MutationObserverInit::attributes(bool value) {
    emlite::Val::set("attributes", value);
}

bool MutationObserverInit::characterData() const {
    return emlite::Val::get("characterData").as<bool>();
}

void MutationObserverInit::characterData(bool value) {
    emlite::Val::set("characterData", value);
}

bool MutationObserverInit::subtree() const {
    return emlite::Val::get("subtree").as<bool>();
}

void MutationObserverInit::subtree(bool value) {
    emlite::Val::set("subtree", value);
}

bool MutationObserverInit::attributeOldValue() const {
    return emlite::Val::get("attributeOldValue").as<bool>();
}

void MutationObserverInit::attributeOldValue(bool value) {
    emlite::Val::set("attributeOldValue", value);
}

bool MutationObserverInit::characterDataOldValue() const {
    return emlite::Val::get("characterDataOldValue").as<bool>();
}

void MutationObserverInit::characterDataOldValue(bool value) {
    emlite::Val::set("characterDataOldValue", value);
}

jsbind::TypedArray<jsbind::String> MutationObserverInit::attributeFilter() const {
    return emlite::Val::get("attributeFilter").as<jsbind::TypedArray<jsbind::String>>();
}

void MutationObserverInit::attributeFilter(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("attributeFilter", value);
}


} // namespace webbind