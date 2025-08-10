#include <webbind/AudioParamMap.hpp>

namespace webbind {

AudioParamMap AudioParamMap::take_ownership(Handle h) noexcept {
        return AudioParamMap(h);
    }
AudioParamMap AudioParamMap::clone() const noexcept { return *this; }
emlite::Val AudioParamMap::instance() noexcept { return emlite::Val::global("AudioParamMap"); }
AudioParamMap::AudioParamMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioParamMap::AudioParamMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind