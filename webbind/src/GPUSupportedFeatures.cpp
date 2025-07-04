#include <webbind/GPUSupportedFeatures.hpp>


GPUSupportedFeatures GPUSupportedFeatures::take_ownership(Handle h) noexcept {
        return GPUSupportedFeatures(h);
    }
GPUSupportedFeatures GPUSupportedFeatures::clone() const noexcept { return *this; }
GPUSupportedFeatures::GPUSupportedFeatures(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUSupportedFeatures::GPUSupportedFeatures(const emlite::Val &val) noexcept: emlite::Val(val) {}


