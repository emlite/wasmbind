#include <webbind/FilePropertyBag.hpp>

namespace webbind {

FilePropertyBag::FilePropertyBag(Handle h) noexcept : BlobPropertyBag(emlite::Val::take_ownership(h)) {}
FilePropertyBag FilePropertyBag::take_ownership(Handle h) noexcept {
    return FilePropertyBag(h);
}

FilePropertyBag::FilePropertyBag(const emlite::Val &val) noexcept: BlobPropertyBag(val) {}

FilePropertyBag::FilePropertyBag() noexcept: BlobPropertyBag(emlite::Val::object()) {}

FilePropertyBag FilePropertyBag::clone() const noexcept { return *this; }

long long FilePropertyBag::lastModified() const {
    return emlite::Val::get("lastModified").as<long long>();
}

void FilePropertyBag::lastModified(long long value) {
    emlite::Val::set("lastModified", value);
}


} // namespace webbind