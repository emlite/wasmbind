#include <webbind/FileReaderSync.hpp>
#include <webbind/Blob.hpp>


FileReaderSync FileReaderSync::take_ownership(Handle h) noexcept {
        return FileReaderSync(h);
    }
FileReaderSync FileReaderSync::clone() const noexcept { return *this; }
FileReaderSync::FileReaderSync(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileReaderSync::FileReaderSync(const emlite::Val &val) noexcept: emlite::Val(val) {}


FileReaderSync::FileReaderSync() : emlite::Val(emlite::Val::global("FileReaderSync").new_()) {}

jsbind::ArrayBuffer FileReaderSync::readAsArrayBuffer(const Blob& blob) {
    return emlite::Val::call("readAsArrayBuffer", blob).as<jsbind::ArrayBuffer>();
}

jsbind::String FileReaderSync::readAsBinaryString(const Blob& blob) {
    return emlite::Val::call("readAsBinaryString", blob).as<jsbind::String>();
}

jsbind::String FileReaderSync::readAsText(const Blob& blob) {
    return emlite::Val::call("readAsText", blob).as<jsbind::String>();
}

jsbind::String FileReaderSync::readAsText(const Blob& blob, const jsbind::String& encoding) {
    return emlite::Val::call("readAsText", blob, encoding).as<jsbind::String>();
}

jsbind::String FileReaderSync::readAsDataURL(const Blob& blob) {
    return emlite::Val::call("readAsDataURL", blob).as<jsbind::String>();
}

