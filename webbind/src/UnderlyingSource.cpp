#include "webbind/UnderlyingSource.hpp"

using emlite::Val;
namespace webbind {

UnderlyingSource::UnderlyingSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UnderlyingSource UnderlyingSource::take_ownership(Handle h) noexcept {
        return UnderlyingSource(h);
    }
UnderlyingSource::UnderlyingSource(const emlite::Val &val) noexcept: emlite::Val(val) {}
UnderlyingSource::UnderlyingSource() noexcept: emlite::Val(emlite::Val::object()) {}
UnderlyingSource UnderlyingSource::clone() const noexcept { return *this; }

jsbind::Function UnderlyingSource::start() const {
    return emlite::Val::get("start").as<jsbind::Function>();
}

void UnderlyingSource::start(const jsbind::Function& value) {
    emlite::Val::set("start", value);
}

jsbind::Function UnderlyingSource::pull() const {
    return emlite::Val::get("pull").as<jsbind::Function>();
}

void UnderlyingSource::pull(const jsbind::Function& value) {
    emlite::Val::set("pull", value);
}

jsbind::Function UnderlyingSource::cancel() const {
    return emlite::Val::get("cancel").as<jsbind::Function>();
}

void UnderlyingSource::cancel(const jsbind::Function& value) {
    emlite::Val::set("cancel", value);
}

ReadableStreamType UnderlyingSource::type() const {
    return emlite::Val::get("type").as<ReadableStreamType>();
}

void UnderlyingSource::type(const ReadableStreamType& value) {
    emlite::Val::set("type", value);
}

long long UnderlyingSource::autoAllocateChunkSize() const {
    return emlite::Val::get("autoAllocateChunkSize").as<long long>();
}

void UnderlyingSource::autoAllocateChunkSize(long long value) {
    emlite::Val::set("autoAllocateChunkSize", value);
}


} // namespace webbind