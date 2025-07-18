#include <webbind/AudioSinkInfo.hpp>


AudioSinkInfo AudioSinkInfo::take_ownership(Handle h) noexcept {
        return AudioSinkInfo(h);
    }
AudioSinkInfo AudioSinkInfo::clone() const noexcept { return *this; }
AudioSinkInfo::AudioSinkInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioSinkInfo::AudioSinkInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}


AudioSinkType AudioSinkInfo::type() const {
    return emlite::Val::get("type").as<AudioSinkType>();
}

