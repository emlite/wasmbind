#include <webbind/PayerErrors.hpp>

using emlite::Val;
namespace webbind {

PayerErrors::PayerErrors(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PayerErrors PayerErrors::take_ownership(Handle h) noexcept {
        return PayerErrors(h);
    }
PayerErrors::PayerErrors(const emlite::Val &val) noexcept: emlite::Val(val) {}
PayerErrors::PayerErrors() noexcept: emlite::Val(emlite::Val::object()) {}
PayerErrors PayerErrors::clone() const noexcept { return *this; }

jsbind::String PayerErrors::email() const {
    return emlite::Val::get("email").as<jsbind::String>();
}

void PayerErrors::email(const jsbind::String& value) {
    emlite::Val::set("email", value);
}

jsbind::String PayerErrors::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void PayerErrors::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String PayerErrors::phone() const {
    return emlite::Val::get("phone").as<jsbind::String>();
}

void PayerErrors::phone(const jsbind::String& value) {
    emlite::Val::set("phone", value);
}


} // namespace webbind