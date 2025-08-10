#include "webbind/IdentityResolveOptions.hpp"

using emlite::Val;
namespace webbind {

IdentityResolveOptions::IdentityResolveOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityResolveOptions IdentityResolveOptions::take_ownership(Handle h) noexcept {
        return IdentityResolveOptions(h);
    }
IdentityResolveOptions::IdentityResolveOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityResolveOptions::IdentityResolveOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityResolveOptions IdentityResolveOptions::clone() const noexcept { return *this; }

jsbind::String IdentityResolveOptions::accountId() const {
    return emlite::Val::get("accountId").as<jsbind::String>();
}

void IdentityResolveOptions::accountId(const jsbind::String& value) {
    emlite::Val::set("accountId", value);
}


} // namespace webbind