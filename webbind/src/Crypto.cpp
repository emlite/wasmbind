#include <webbind/Crypto.hpp>
#include <webbind/SubtleCrypto.hpp>

namespace webbind {

Crypto Crypto::take_ownership(Handle h) noexcept {
    return Crypto(h);
}

Crypto Crypto::clone() const noexcept { return *this; }

emlite::Val Crypto::instance() noexcept { return emlite::Val::global("Crypto"); }

Crypto::Crypto(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Crypto::Crypto(const emlite::Val &val) noexcept: emlite::Val(val) {}

SubtleCrypto Crypto::subtle() const {
    return emlite::Val::get("subtle").as<SubtleCrypto>();
}

jsbind::ArrayBufferView Crypto::getRandomValues(const jsbind::ArrayBufferView& array) {
    return emlite::Val::call("getRandomValues", array).as<jsbind::ArrayBufferView>();
}

jsbind::String Crypto::randomUUID() {
    return emlite::Val::call("randomUUID").as<jsbind::String>();
}


} // namespace webbind