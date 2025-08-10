#include <webbind/ReadableStreamGetReaderOptions.hpp>

namespace webbind {

ReadableStreamGetReaderOptions::ReadableStreamGetReaderOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions::take_ownership(Handle h) noexcept {
    return ReadableStreamGetReaderOptions(h);
}

ReadableStreamGetReaderOptions::ReadableStreamGetReaderOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReadableStreamGetReaderOptions::ReadableStreamGetReaderOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions::clone() const noexcept { return *this; }

ReadableStreamReaderMode ReadableStreamGetReaderOptions::mode() const {
    return emlite::Val::get("mode").as<ReadableStreamReaderMode>();
}

void ReadableStreamGetReaderOptions::mode(const ReadableStreamReaderMode& value) {
    emlite::Val::set("mode", value);
}


} // namespace webbind