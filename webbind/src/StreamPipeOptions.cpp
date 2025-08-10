#include "webbind/StreamPipeOptions.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

StreamPipeOptions::StreamPipeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StreamPipeOptions StreamPipeOptions::take_ownership(Handle h) noexcept {
        return StreamPipeOptions(h);
    }
StreamPipeOptions::StreamPipeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
StreamPipeOptions::StreamPipeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
StreamPipeOptions StreamPipeOptions::clone() const noexcept { return *this; }

bool StreamPipeOptions::preventClose() const {
    return emlite::Val::get("preventClose").as<bool>();
}

void StreamPipeOptions::preventClose(bool value) {
    emlite::Val::set("preventClose", value);
}

bool StreamPipeOptions::preventAbort() const {
    return emlite::Val::get("preventAbort").as<bool>();
}

void StreamPipeOptions::preventAbort(bool value) {
    emlite::Val::set("preventAbort", value);
}

bool StreamPipeOptions::preventCancel() const {
    return emlite::Val::get("preventCancel").as<bool>();
}

void StreamPipeOptions::preventCancel(bool value) {
    emlite::Val::set("preventCancel", value);
}

AbortSignal StreamPipeOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void StreamPipeOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind