#include <webbind/ClipboardUnsanitizedFormats.hpp>

using emlite::Val;
namespace webbind {

ClipboardUnsanitizedFormats::ClipboardUnsanitizedFormats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats::take_ownership(Handle h) noexcept {
        return ClipboardUnsanitizedFormats(h);
    }
ClipboardUnsanitizedFormats::ClipboardUnsanitizedFormats(const emlite::Val &val) noexcept: emlite::Val(val) {}
ClipboardUnsanitizedFormats::ClipboardUnsanitizedFormats() noexcept: emlite::Val(emlite::Val::object()) {}
ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> ClipboardUnsanitizedFormats::unsanitized() const {
    return emlite::Val::get("unsanitized").as<jsbind::TypedArray<jsbind::String>>();
}

void ClipboardUnsanitizedFormats::unsanitized(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("unsanitized", value);
}


} // namespace webbind