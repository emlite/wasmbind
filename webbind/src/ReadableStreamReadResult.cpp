#include <webbind/ReadableStreamReadResult.hpp>

namespace webbind {

ReadableStreamReadResult::ReadableStreamReadResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamReadResult ReadableStreamReadResult::take_ownership(Handle h) noexcept {
    return ReadableStreamReadResult(h);
}

ReadableStreamReadResult::ReadableStreamReadResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReadableStreamReadResult::ReadableStreamReadResult() noexcept: emlite::Val(emlite::Val::object()) {}

ReadableStreamReadResult ReadableStreamReadResult::clone() const noexcept { return *this; }

jsbind::Any ReadableStreamReadResult::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void ReadableStreamReadResult::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}

bool ReadableStreamReadResult::done() const {
    return emlite::Val::get("done").as<bool>();
}

void ReadableStreamReadResult::done(bool value) {
    emlite::Val::set("done", value);
}


} // namespace webbind