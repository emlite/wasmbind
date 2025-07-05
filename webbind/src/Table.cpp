#include <webbind/Table.hpp>


Table Table::take_ownership(Handle h) noexcept {
        return Table(h);
    }
Table Table::clone() const noexcept { return *this; }
Table::Table(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Table::Table(const emlite::Val &val) noexcept: emlite::Val(val) {}


Table::Table(const jsbind::Any& descriptor) : emlite::Val(emlite::Val::global("Table").new_(descriptor)) {}

Table::Table(const jsbind::Any& descriptor, const jsbind::Any& value) : emlite::Val(emlite::Val::global("Table").new_(descriptor, value)) {}

unsigned long Table::grow(unsigned long delta) {
    return emlite::Val::call("grow", delta).as<unsigned long>();
}

unsigned long Table::grow(unsigned long delta, const jsbind::Any& value) {
    return emlite::Val::call("grow", delta, value).as<unsigned long>();
}

jsbind::Any Table::get(unsigned long index) {
    return emlite::Val::call("get", index).as<jsbind::Any>();
}

jsbind::Undefined Table::set(unsigned long index) {
    return emlite::Val::call("set", index).as<jsbind::Undefined>();
}

jsbind::Undefined Table::set(unsigned long index, const jsbind::Any& value) {
    return emlite::Val::call("set", index, value).as<jsbind::Undefined>();
}

unsigned long Table::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

