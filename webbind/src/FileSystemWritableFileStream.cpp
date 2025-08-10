#include "webbind/FileSystemWritableFileStream.hpp"

namespace webbind {

FileSystemWritableFileStream FileSystemWritableFileStream::take_ownership(Handle h) noexcept {
        return FileSystemWritableFileStream(h);
    }
FileSystemWritableFileStream FileSystemWritableFileStream::clone() const noexcept { return *this; }
emlite::Val FileSystemWritableFileStream::instance() noexcept { return emlite::Val::global("FileSystemWritableFileStream"); }
FileSystemWritableFileStream::FileSystemWritableFileStream(Handle h) noexcept : WritableStream(emlite::Val::take_ownership(h)) {}
FileSystemWritableFileStream::FileSystemWritableFileStream(const emlite::Val &val) noexcept: WritableStream(val) {}

jsbind::Promise<jsbind::Undefined> FileSystemWritableFileStream::write(const jsbind::Any& data) {
    return WritableStream::call("write", data).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> FileSystemWritableFileStream::seek(long long position) {
    return WritableStream::call("seek", position).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> FileSystemWritableFileStream::truncate(long long size) {
    return WritableStream::call("truncate", size).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind