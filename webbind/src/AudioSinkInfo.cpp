#include "webbind/AudioSinkInfo.hpp"

namespace webbind {

AudioSinkInfo AudioSinkInfo::take_ownership(Handle h) noexcept {
        return AudioSinkInfo(h);
    }
AudioSinkInfo AudioSinkInfo::clone() const noexcept { return *this; }
emlite::Val AudioSinkInfo::instance() noexcept { return emlite::Val::global("AudioSinkInfo"); }
AudioSinkInfo::AudioSinkInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioSinkInfo::AudioSinkInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioSinkType AudioSinkInfo::type() const {
    return emlite::Val::get("type").as<AudioSinkType>();
}


} // namespace webbind