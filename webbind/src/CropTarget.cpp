#include <webbind/CropTarget.hpp>
#include <webbind/Element.hpp>


CropTarget CropTarget::take_ownership(Handle h) noexcept {
        return CropTarget(h);
    }
CropTarget CropTarget::clone() const noexcept { return *this; }
emlite::Val CropTarget::instance() noexcept { return emlite::Val::global("CropTarget"); }
CropTarget::CropTarget(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CropTarget::CropTarget(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<CropTarget> CropTarget::fromElement(const Element& element) {
    return emlite::Val::global("croptarget").call("fromElement", element).as<jsbind::Promise<CropTarget>>();
}

