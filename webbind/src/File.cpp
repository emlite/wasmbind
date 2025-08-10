#include "webbind/File.hpp"
#include "webbind/FilePropertyBag.hpp"

namespace webbind {

File File::take_ownership(Handle h) noexcept {
        return File(h);
    }
File File::clone() const noexcept { return *this; }
emlite::Val File::instance() noexcept { return emlite::Val::global("File"); }
File::File(Handle h) noexcept : Blob(emlite::Val::take_ownership(h)) {}
File::File(const emlite::Val &val) noexcept: Blob(val) {}

File::File(const jsbind::TypedArray<jsbind::Any>& fileBits, const jsbind::String& fileName) : Blob(emlite::Val::global("File").new_(fileBits, fileName)) {}

File::File(const jsbind::TypedArray<jsbind::Any>& fileBits, const jsbind::String& fileName, const FilePropertyBag& options) : Blob(emlite::Val::global("File").new_(fileBits, fileName, options)) {}

jsbind::String File::name() const {
    return Blob::get("name").as<jsbind::String>();
}

long long File::lastModified() const {
    return Blob::get("lastModified").as<long long>();
}

jsbind::String File::webkitRelativePath() const {
    return Blob::get("webkitRelativePath").as<jsbind::String>();
}


} // namespace webbind