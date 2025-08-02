#include <webbind/FontData.hpp>
#include <webbind/Blob.hpp>


FontData FontData::take_ownership(Handle h) noexcept {
        return FontData(h);
    }
FontData FontData::clone() const noexcept { return *this; }
emlite::Val FontData::instance() noexcept { return emlite::Val::global("FontData"); }
FontData::FontData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontData::FontData(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<Blob> FontData::blob() {
    return emlite::Val::call("blob").as<jsbind::Promise<Blob>>();
}

jsbind::String FontData::postscriptName() const {
    return emlite::Val::get("postscriptName").as<jsbind::String>();
}

jsbind::String FontData::fullName() const {
    return emlite::Val::get("fullName").as<jsbind::String>();
}

jsbind::String FontData::family() const {
    return emlite::Val::get("family").as<jsbind::String>();
}

jsbind::String FontData::style() const {
    return emlite::Val::get("style").as<jsbind::String>();
}

