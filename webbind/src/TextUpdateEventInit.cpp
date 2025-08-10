#include "webbind/TextUpdateEventInit.hpp"

using emlite::Val;
namespace webbind {

TextUpdateEventInit::TextUpdateEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
TextUpdateEventInit TextUpdateEventInit::take_ownership(Handle h) noexcept {
        return TextUpdateEventInit(h);
    }
TextUpdateEventInit::TextUpdateEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
TextUpdateEventInit::TextUpdateEventInit() noexcept: EventInit(emlite::Val::object()) {}
TextUpdateEventInit TextUpdateEventInit::clone() const noexcept { return *this; }

unsigned long TextUpdateEventInit::updateRangeStart() const {
    return emlite::Val::get("updateRangeStart").as<unsigned long>();
}

void TextUpdateEventInit::updateRangeStart(unsigned long value) {
    emlite::Val::set("updateRangeStart", value);
}

unsigned long TextUpdateEventInit::updateRangeEnd() const {
    return emlite::Val::get("updateRangeEnd").as<unsigned long>();
}

void TextUpdateEventInit::updateRangeEnd(unsigned long value) {
    emlite::Val::set("updateRangeEnd", value);
}

jsbind::String TextUpdateEventInit::text() const {
    return emlite::Val::get("text").as<jsbind::String>();
}

void TextUpdateEventInit::text(const jsbind::String& value) {
    emlite::Val::set("text", value);
}

unsigned long TextUpdateEventInit::selectionStart() const {
    return emlite::Val::get("selectionStart").as<unsigned long>();
}

void TextUpdateEventInit::selectionStart(unsigned long value) {
    emlite::Val::set("selectionStart", value);
}

unsigned long TextUpdateEventInit::selectionEnd() const {
    return emlite::Val::get("selectionEnd").as<unsigned long>();
}

void TextUpdateEventInit::selectionEnd(unsigned long value) {
    emlite::Val::set("selectionEnd", value);
}

unsigned long TextUpdateEventInit::compositionStart() const {
    return emlite::Val::get("compositionStart").as<unsigned long>();
}

void TextUpdateEventInit::compositionStart(unsigned long value) {
    emlite::Val::set("compositionStart", value);
}

unsigned long TextUpdateEventInit::compositionEnd() const {
    return emlite::Val::get("compositionEnd").as<unsigned long>();
}

void TextUpdateEventInit::compositionEnd(unsigned long value) {
    emlite::Val::set("compositionEnd", value);
}


} // namespace webbind