#include "webbind/BrowserBoundSignature.hpp"

using emlite::Val;
namespace webbind {

BrowserBoundSignature::BrowserBoundSignature(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BrowserBoundSignature BrowserBoundSignature::take_ownership(Handle h) noexcept {
        return BrowserBoundSignature(h);
    }
BrowserBoundSignature::BrowserBoundSignature(const emlite::Val &val) noexcept: emlite::Val(val) {}
BrowserBoundSignature::BrowserBoundSignature() noexcept: emlite::Val(emlite::Val::object()) {}
BrowserBoundSignature BrowserBoundSignature::clone() const noexcept { return *this; }

jsbind::ArrayBuffer BrowserBoundSignature::signature() const {
    return emlite::Val::get("signature").as<jsbind::ArrayBuffer>();
}

void BrowserBoundSignature::signature(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("signature", value);
}


} // namespace webbind