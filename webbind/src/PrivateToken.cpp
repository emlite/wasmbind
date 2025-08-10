#include <webbind/PrivateToken.hpp>

using emlite::Val;
namespace webbind {

PrivateToken::PrivateToken(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PrivateToken PrivateToken::take_ownership(Handle h) noexcept {
        return PrivateToken(h);
    }
PrivateToken::PrivateToken(const emlite::Val &val) noexcept: emlite::Val(val) {}
PrivateToken::PrivateToken() noexcept: emlite::Val(emlite::Val::object()) {}
PrivateToken PrivateToken::clone() const noexcept { return *this; }

TokenVersion PrivateToken::version() const {
    return emlite::Val::get("version").as<TokenVersion>();
}

void PrivateToken::version(const TokenVersion& value) {
    emlite::Val::set("version", value);
}

OperationType PrivateToken::operation() const {
    return emlite::Val::get("operation").as<OperationType>();
}

void PrivateToken::operation(const OperationType& value) {
    emlite::Val::set("operation", value);
}

RefreshPolicy PrivateToken::refreshPolicy() const {
    return emlite::Val::get("refreshPolicy").as<RefreshPolicy>();
}

void PrivateToken::refreshPolicy(const RefreshPolicy& value) {
    emlite::Val::set("refreshPolicy", value);
}

jsbind::TypedArray<jsbind::String> PrivateToken::issuers() const {
    return emlite::Val::get("issuers").as<jsbind::TypedArray<jsbind::String>>();
}

void PrivateToken::issuers(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("issuers", value);
}


} // namespace webbind