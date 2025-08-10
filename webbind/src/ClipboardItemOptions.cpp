#include "webbind/ClipboardItemOptions.hpp"

using emlite::Val;
namespace webbind {

ClipboardItemOptions::ClipboardItemOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ClipboardItemOptions ClipboardItemOptions::take_ownership(Handle h) noexcept {
        return ClipboardItemOptions(h);
    }
ClipboardItemOptions::ClipboardItemOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ClipboardItemOptions::ClipboardItemOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ClipboardItemOptions ClipboardItemOptions::clone() const noexcept { return *this; }

PresentationStyle ClipboardItemOptions::presentationStyle() const {
    return emlite::Val::get("presentationStyle").as<PresentationStyle>();
}

void ClipboardItemOptions::presentationStyle(const PresentationStyle& value) {
    emlite::Val::set("presentationStyle", value);
}


} // namespace webbind