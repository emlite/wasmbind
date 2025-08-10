#include <webbind/HmacImportParams.hpp>

namespace webbind {

HmacImportParams::HmacImportParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
HmacImportParams HmacImportParams::take_ownership(Handle h) noexcept {
    return HmacImportParams(h);
}

HmacImportParams::HmacImportParams(const emlite::Val &val) noexcept: Algorithm(val) {}

HmacImportParams::HmacImportParams() noexcept: Algorithm(emlite::Val::object()) {}

HmacImportParams HmacImportParams::clone() const noexcept { return *this; }

jsbind::Any HmacImportParams::hash() const {
    return emlite::Val::get("hash").as<jsbind::Any>();
}

void HmacImportParams::hash(const jsbind::Any& value) {
    emlite::Val::set("hash", value);
}

unsigned long HmacImportParams::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void HmacImportParams::length(unsigned long value) {
    emlite::Val::set("length", value);
}


} // namespace webbind