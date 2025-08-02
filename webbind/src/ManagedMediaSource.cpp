#include <webbind/ManagedMediaSource.hpp>


ManagedMediaSource ManagedMediaSource::take_ownership(Handle h) noexcept {
        return ManagedMediaSource(h);
    }
ManagedMediaSource ManagedMediaSource::clone() const noexcept { return *this; }
emlite::Val ManagedMediaSource::instance() noexcept { return emlite::Val::global("ManagedMediaSource"); }
ManagedMediaSource::ManagedMediaSource(Handle h) noexcept : MediaSource(emlite::Val::take_ownership(h)) {}
ManagedMediaSource::ManagedMediaSource(const emlite::Val &val) noexcept: MediaSource(val) {}


ManagedMediaSource::ManagedMediaSource() : MediaSource(emlite::Val::global("ManagedMediaSource").new_()) {}

bool ManagedMediaSource::streaming() const {
    return MediaSource::get("streaming").as<bool>();
}

jsbind::Any ManagedMediaSource::onstartstreaming() const {
    return MediaSource::get("onstartstreaming").as<jsbind::Any>();
}

void ManagedMediaSource::onstartstreaming(const jsbind::Any& value) {
    MediaSource::set("onstartstreaming", value);
}

jsbind::Any ManagedMediaSource::onendstreaming() const {
    return MediaSource::get("onendstreaming").as<jsbind::Any>();
}

void ManagedMediaSource::onendstreaming(const jsbind::Any& value) {
    MediaSource::set("onendstreaming", value);
}

