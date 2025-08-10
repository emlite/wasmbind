#include "webbind/DisconnectedAccount.hpp"

using emlite::Val;
namespace webbind {

DisconnectedAccount::DisconnectedAccount(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DisconnectedAccount DisconnectedAccount::take_ownership(Handle h) noexcept {
        return DisconnectedAccount(h);
    }
DisconnectedAccount::DisconnectedAccount(const emlite::Val &val) noexcept: emlite::Val(val) {}
DisconnectedAccount::DisconnectedAccount() noexcept: emlite::Val(emlite::Val::object()) {}
DisconnectedAccount DisconnectedAccount::clone() const noexcept { return *this; }

jsbind::String DisconnectedAccount::account_id() const {
    return emlite::Val::get("account_id").as<jsbind::String>();
}

void DisconnectedAccount::account_id(const jsbind::String& value) {
    emlite::Val::set("account_id", value);
}


} // namespace webbind