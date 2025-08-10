#include <webbind/EditContextInit.hpp>

using emlite::Val;
namespace webbind {

EditContextInit::EditContextInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EditContextInit EditContextInit::take_ownership(Handle h) noexcept {
        return EditContextInit(h);
    }
EditContextInit::EditContextInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
EditContextInit::EditContextInit() noexcept: emlite::Val(emlite::Val::object()) {}
EditContextInit EditContextInit::clone() const noexcept { return *this; }

jsbind::String EditContextInit::text() const {
    return emlite::Val::get("text").as<jsbind::String>();
}

void EditContextInit::text(const jsbind::String& value) {
    emlite::Val::set("text", value);
}

unsigned long EditContextInit::selectionStart() const {
    return emlite::Val::get("selectionStart").as<unsigned long>();
}

void EditContextInit::selectionStart(unsigned long value) {
    emlite::Val::set("selectionStart", value);
}

unsigned long EditContextInit::selectionEnd() const {
    return emlite::Val::get("selectionEnd").as<unsigned long>();
}

void EditContextInit::selectionEnd(unsigned long value) {
    emlite::Val::set("selectionEnd", value);
}


} // namespace webbind