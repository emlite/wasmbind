#include <webbind/ReadableStreamBYOBReaderReadOptions.hpp>

using emlite::Val;
namespace webbind {

ReadableStreamBYOBReaderReadOptions::ReadableStreamBYOBReaderReadOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions::take_ownership(Handle h) noexcept {
        return ReadableStreamBYOBReaderReadOptions(h);
    }
ReadableStreamBYOBReaderReadOptions::ReadableStreamBYOBReaderReadOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReadableStreamBYOBReaderReadOptions::ReadableStreamBYOBReaderReadOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions::clone() const noexcept { return *this; }

long long ReadableStreamBYOBReaderReadOptions::min() const {
    return emlite::Val::get("min").as<long long>();
}

void ReadableStreamBYOBReaderReadOptions::min(long long value) {
    emlite::Val::set("min", value);
}


} // namespace webbind