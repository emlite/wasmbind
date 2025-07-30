#include <webbind/Crypto.hpp>
#include <webbind/SubtleCrypto.hpp>


Crypto Crypto::take_ownership(Handle h) noexcept {
        return Crypto(h);
    }
Crypto Crypto::clone() const noexcept { return *this; }
Crypto::Crypto(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Crypto::Crypto(const emlite::Val &val) noexcept: emlite::Val(val) {}


SubtleCrypto Crypto::subtle() const {
    return emlite::Val::get("subtle").as<SubtleCrypto>();
}

jsbind::Any Crypto::getRandomValues(const jsbind::Any& array) {
    return emlite::Val::call("getRandomValues", array).as<jsbind::Any>();
}

jsbind::String Crypto::randomUUID() {
    return emlite::Val::call("randomUUID").as<jsbind::String>();
}

