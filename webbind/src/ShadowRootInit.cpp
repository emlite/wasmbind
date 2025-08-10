#include <webbind/ShadowRootInit.hpp>
#include <webbind/CustomElementRegistry.hpp>

using emlite::Val;
namespace webbind {

ShadowRootInit::ShadowRootInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ShadowRootInit ShadowRootInit::take_ownership(Handle h) noexcept {
        return ShadowRootInit(h);
    }
ShadowRootInit::ShadowRootInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
ShadowRootInit::ShadowRootInit() noexcept: emlite::Val(emlite::Val::object()) {}
ShadowRootInit ShadowRootInit::clone() const noexcept { return *this; }

ShadowRootMode ShadowRootInit::mode() const {
    return emlite::Val::get("mode").as<ShadowRootMode>();
}

void ShadowRootInit::mode(const ShadowRootMode& value) {
    emlite::Val::set("mode", value);
}

bool ShadowRootInit::delegatesFocus() const {
    return emlite::Val::get("delegatesFocus").as<bool>();
}

void ShadowRootInit::delegatesFocus(bool value) {
    emlite::Val::set("delegatesFocus", value);
}

SlotAssignmentMode ShadowRootInit::slotAssignment() const {
    return emlite::Val::get("slotAssignment").as<SlotAssignmentMode>();
}

void ShadowRootInit::slotAssignment(const SlotAssignmentMode& value) {
    emlite::Val::set("slotAssignment", value);
}

bool ShadowRootInit::clonable() const {
    return emlite::Val::get("clonable").as<bool>();
}

void ShadowRootInit::clonable(bool value) {
    emlite::Val::set("clonable", value);
}

bool ShadowRootInit::serializable() const {
    return emlite::Val::get("serializable").as<bool>();
}

void ShadowRootInit::serializable(bool value) {
    emlite::Val::set("serializable", value);
}

CustomElementRegistry ShadowRootInit::customElementRegistry() const {
    return emlite::Val::get("customElementRegistry").as<CustomElementRegistry>();
}

void ShadowRootInit::customElementRegistry(const CustomElementRegistry& value) {
    emlite::Val::set("customElementRegistry", value);
}


} // namespace webbind