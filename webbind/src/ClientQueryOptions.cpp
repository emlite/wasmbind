#include <webbind/ClientQueryOptions.hpp>

using emlite::Val;
namespace webbind {

ClientQueryOptions::ClientQueryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ClientQueryOptions ClientQueryOptions::take_ownership(Handle h) noexcept {
        return ClientQueryOptions(h);
    }
ClientQueryOptions::ClientQueryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ClientQueryOptions::ClientQueryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ClientQueryOptions ClientQueryOptions::clone() const noexcept { return *this; }

bool ClientQueryOptions::includeUncontrolled() const {
    return emlite::Val::get("includeUncontrolled").as<bool>();
}

void ClientQueryOptions::includeUncontrolled(bool value) {
    emlite::Val::set("includeUncontrolled", value);
}

ClientType ClientQueryOptions::type() const {
    return emlite::Val::get("type").as<ClientType>();
}

void ClientQueryOptions::type(const ClientType& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind