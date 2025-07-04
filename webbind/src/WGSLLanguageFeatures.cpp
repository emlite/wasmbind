#include <webbind/WGSLLanguageFeatures.hpp>


WGSLLanguageFeatures WGSLLanguageFeatures::take_ownership(Handle h) noexcept {
        return WGSLLanguageFeatures(h);
    }
WGSLLanguageFeatures WGSLLanguageFeatures::clone() const noexcept { return *this; }
WGSLLanguageFeatures::WGSLLanguageFeatures(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WGSLLanguageFeatures::WGSLLanguageFeatures(const emlite::Val &val) noexcept: emlite::Val(val) {}


