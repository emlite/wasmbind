#include <webbind/GPUSampler.hpp>


GPUSampler GPUSampler::take_ownership(Handle h) noexcept {
        return GPUSampler(h);
    }
GPUSampler GPUSampler::clone() const noexcept { return *this; }
GPUSampler::GPUSampler(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUSampler::GPUSampler(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString GPUSampler::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPUSampler::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

