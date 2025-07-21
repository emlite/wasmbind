#include <webbind/FontData.hpp>
#include <webbind/Blob.hpp>


FontData FontData::take_ownership(Handle h) noexcept {
        return FontData(h);
    }
FontData FontData::clone() const noexcept { return *this; }
FontData::FontData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontData::FontData(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<Blob> FontData::blob() {
    return emlite::Val::call("blob").as<jsbind::Promise<Blob>>();
}

jsbind::USVString FontData::postscriptName() const {
    return emlite::Val::get("postscriptName").as<jsbind::USVString>();
}

jsbind::USVString FontData::fullName() const {
    return emlite::Val::get("fullName").as<jsbind::USVString>();
}

jsbind::USVString FontData::family() const {
    return emlite::Val::get("family").as<jsbind::USVString>();
}

jsbind::USVString FontData::style() const {
    return emlite::Val::get("style").as<jsbind::USVString>();
}

