#include <webbind/MimeTypeArray.hpp>
#include <webbind/MimeType.hpp>


MimeTypeArray MimeTypeArray::take_ownership(Handle h) noexcept {
        return MimeTypeArray(h);
    }
MimeTypeArray MimeTypeArray::clone() const noexcept { return *this; }
emlite::Val MimeTypeArray::instance() noexcept { return emlite::Val::global("MimeTypeArray"); }
MimeTypeArray::MimeTypeArray(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MimeTypeArray::MimeTypeArray(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long MimeTypeArray::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

MimeType MimeTypeArray::item(unsigned long index) {
    return emlite::Val::call("item", index).as<MimeType>();
}

MimeType MimeTypeArray::namedItem(const jsbind::String& name) {
    return emlite::Val::call("namedItem", name).as<MimeType>();
}

