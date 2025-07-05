#include <webbind/CSSUnparsedValue.hpp>


CSSUnparsedValue CSSUnparsedValue::take_ownership(Handle h) noexcept {
        return CSSUnparsedValue(h);
    }
CSSUnparsedValue CSSUnparsedValue::clone() const noexcept { return *this; }
CSSUnparsedValue::CSSUnparsedValue(Handle h) noexcept : CSSStyleValue(emlite::Val::take_ownership(h)) {}
CSSUnparsedValue::CSSUnparsedValue(const emlite::Val &val) noexcept: CSSStyleValue(val) {}


CSSUnparsedValue::CSSUnparsedValue(const jsbind::Sequence<jsbind::Any>& members) : CSSStyleValue(emlite::Val::global("CSSUnparsedValue").new_(members)) {}

unsigned long CSSUnparsedValue::length() const {
    return CSSStyleValue::get("length").as<unsigned long>();
}

