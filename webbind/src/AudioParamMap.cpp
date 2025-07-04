#include <webbind/AudioParamMap.hpp>


AudioParamMap AudioParamMap::take_ownership(Handle h) noexcept {
        return AudioParamMap(h);
    }
AudioParamMap AudioParamMap::clone() const noexcept { return *this; }
AudioParamMap::AudioParamMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioParamMap::AudioParamMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


