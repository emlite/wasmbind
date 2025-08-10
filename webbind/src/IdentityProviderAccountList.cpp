#include <webbind/IdentityProviderAccountList.hpp>
#include <webbind/IdentityProviderAccount.hpp>

using emlite::Val;
namespace webbind {

IdentityProviderAccountList::IdentityProviderAccountList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderAccountList IdentityProviderAccountList::take_ownership(Handle h) noexcept {
        return IdentityProviderAccountList(h);
    }
IdentityProviderAccountList::IdentityProviderAccountList(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityProviderAccountList::IdentityProviderAccountList() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityProviderAccountList IdentityProviderAccountList::clone() const noexcept { return *this; }

jsbind::TypedArray<IdentityProviderAccount> IdentityProviderAccountList::accounts() const {
    return emlite::Val::get("accounts").as<jsbind::TypedArray<IdentityProviderAccount>>();
}

void IdentityProviderAccountList::accounts(const jsbind::TypedArray<IdentityProviderAccount>& value) {
    emlite::Val::set("accounts", value);
}


} // namespace webbind