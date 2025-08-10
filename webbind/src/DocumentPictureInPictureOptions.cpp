#include "webbind/DocumentPictureInPictureOptions.hpp"

using emlite::Val;
namespace webbind {

DocumentPictureInPictureOptions::DocumentPictureInPictureOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DocumentPictureInPictureOptions DocumentPictureInPictureOptions::take_ownership(Handle h) noexcept {
        return DocumentPictureInPictureOptions(h);
    }
DocumentPictureInPictureOptions::DocumentPictureInPictureOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
DocumentPictureInPictureOptions::DocumentPictureInPictureOptions() noexcept: emlite::Val(emlite::Val::object()) {}
DocumentPictureInPictureOptions DocumentPictureInPictureOptions::clone() const noexcept { return *this; }

long long DocumentPictureInPictureOptions::width() const {
    return emlite::Val::get("width").as<long long>();
}

void DocumentPictureInPictureOptions::width(long long value) {
    emlite::Val::set("width", value);
}

long long DocumentPictureInPictureOptions::height() const {
    return emlite::Val::get("height").as<long long>();
}

void DocumentPictureInPictureOptions::height(long long value) {
    emlite::Val::set("height", value);
}

bool DocumentPictureInPictureOptions::disallowReturnToOpener() const {
    return emlite::Val::get("disallowReturnToOpener").as<bool>();
}

void DocumentPictureInPictureOptions::disallowReturnToOpener(bool value) {
    emlite::Val::set("disallowReturnToOpener", value);
}

bool DocumentPictureInPictureOptions::preferInitialWindowPlacement() const {
    return emlite::Val::get("preferInitialWindowPlacement").as<bool>();
}

void DocumentPictureInPictureOptions::preferInitialWindowPlacement(bool value) {
    emlite::Val::set("preferInitialWindowPlacement", value);
}


} // namespace webbind