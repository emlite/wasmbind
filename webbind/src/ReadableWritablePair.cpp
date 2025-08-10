#include "webbind/ReadableWritablePair.hpp"
#include "webbind/ReadableStream.hpp"
#include "webbind/WritableStream.hpp"

using emlite::Val;
namespace webbind {

ReadableWritablePair::ReadableWritablePair(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableWritablePair ReadableWritablePair::take_ownership(Handle h) noexcept {
        return ReadableWritablePair(h);
    }
ReadableWritablePair::ReadableWritablePair(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReadableWritablePair::ReadableWritablePair() noexcept: emlite::Val(emlite::Val::object()) {}
ReadableWritablePair ReadableWritablePair::clone() const noexcept { return *this; }

ReadableStream ReadableWritablePair::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

void ReadableWritablePair::readable(const ReadableStream& value) {
    emlite::Val::set("readable", value);
}

WritableStream ReadableWritablePair::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}

void ReadableWritablePair::writable(const WritableStream& value) {
    emlite::Val::set("writable", value);
}


} // namespace webbind