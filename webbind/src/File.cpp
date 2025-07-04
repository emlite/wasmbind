#include <webbind/File.hpp>


File File::take_ownership(Handle h) noexcept {
        return File(h);
    }
File File::clone() const noexcept { return *this; }
File::File(Handle h) noexcept : Blob(emlite::Val::take_ownership(h)) {}
File::File(const emlite::Val &val) noexcept: Blob(val) {}


File::File(const jsbind::Sequence<jsbind::Any>& fileBits, const jsbind::USVString& fileName, const jsbind::Any& options): Blob(emlite::Val::global("File").new_(fileBits, fileName, options)) {}

jsbind::DOMString File::name() const {
    return Blob::get("name").as<jsbind::DOMString>();
}

long long File::lastModified() const {
    return Blob::get("lastModified").as<long long>();
}

jsbind::USVString File::webkitRelativePath() const {
    return Blob::get("webkitRelativePath").as<jsbind::USVString>();
}

