#include <webbind/TrustedHTML.hpp>


TrustedHTML TrustedHTML::take_ownership(Handle h) noexcept {
        return TrustedHTML(h);
    }
TrustedHTML TrustedHTML::clone() const noexcept { return *this; }
TrustedHTML::TrustedHTML(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedHTML::TrustedHTML(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String TrustedHTML::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::String>();
}

