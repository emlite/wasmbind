#include <webbind/CryptoKey.hpp>

namespace webbind {

CryptoKey CryptoKey::take_ownership(Handle h) noexcept {
        return CryptoKey(h);
    }
CryptoKey CryptoKey::clone() const noexcept { return *this; }
emlite::Val CryptoKey::instance() noexcept { return emlite::Val::global("CryptoKey"); }
CryptoKey::CryptoKey(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CryptoKey::CryptoKey(const emlite::Val &val) noexcept: emlite::Val(val) {}

KeyType CryptoKey::type() const {
    return emlite::Val::get("type").as<KeyType>();
}

bool CryptoKey::extractable() const {
    return emlite::Val::get("extractable").as<bool>();
}

jsbind::Object CryptoKey::algorithm() const {
    return emlite::Val::get("algorithm").as<jsbind::Object>();
}

jsbind::Object CryptoKey::usages() const {
    return emlite::Val::get("usages").as<jsbind::Object>();
}


} // namespace webbind