#include <webbind/IDBIndexParameters.hpp>

namespace webbind {

IDBIndexParameters::IDBIndexParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBIndexParameters IDBIndexParameters::take_ownership(Handle h) noexcept {
    return IDBIndexParameters(h);
}

IDBIndexParameters::IDBIndexParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

IDBIndexParameters::IDBIndexParameters() noexcept: emlite::Val(emlite::Val::object()) {}

IDBIndexParameters IDBIndexParameters::clone() const noexcept { return *this; }

bool IDBIndexParameters::unique() const {
    return emlite::Val::get("unique").as<bool>();
}

void IDBIndexParameters::unique(bool value) {
    emlite::Val::set("unique", value);
}

bool IDBIndexParameters::multiEntry() const {
    return emlite::Val::get("multiEntry").as<bool>();
}

void IDBIndexParameters::multiEntry(bool value) {
    emlite::Val::set("multiEntry", value);
}


} // namespace webbind