#include "webbind/ReadableStreamIteratorOptions.hpp"

using emlite::Val;
namespace webbind {

ReadableStreamIteratorOptions::ReadableStreamIteratorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamIteratorOptions ReadableStreamIteratorOptions::take_ownership(Handle h) noexcept {
        return ReadableStreamIteratorOptions(h);
    }
ReadableStreamIteratorOptions::ReadableStreamIteratorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReadableStreamIteratorOptions::ReadableStreamIteratorOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ReadableStreamIteratorOptions ReadableStreamIteratorOptions::clone() const noexcept { return *this; }

bool ReadableStreamIteratorOptions::preventCancel() const {
    return emlite::Val::get("preventCancel").as<bool>();
}

void ReadableStreamIteratorOptions::preventCancel(bool value) {
    emlite::Val::set("preventCancel", value);
}


} // namespace webbind