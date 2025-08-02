#include <webbind/PreferenceManager.hpp>
#include <webbind/PreferenceObject.hpp>


PreferenceManager PreferenceManager::take_ownership(Handle h) noexcept {
        return PreferenceManager(h);
    }
PreferenceManager PreferenceManager::clone() const noexcept { return *this; }
emlite::Val PreferenceManager::instance() noexcept { return emlite::Val::global("PreferenceManager"); }
PreferenceManager::PreferenceManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PreferenceManager::PreferenceManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


PreferenceObject PreferenceManager::colorScheme() const {
    return emlite::Val::get("colorScheme").as<PreferenceObject>();
}

PreferenceObject PreferenceManager::contrast() const {
    return emlite::Val::get("contrast").as<PreferenceObject>();
}

PreferenceObject PreferenceManager::reducedMotion() const {
    return emlite::Val::get("reducedMotion").as<PreferenceObject>();
}

PreferenceObject PreferenceManager::reducedTransparency() const {
    return emlite::Val::get("reducedTransparency").as<PreferenceObject>();
}

PreferenceObject PreferenceManager::reducedData() const {
    return emlite::Val::get("reducedData").as<PreferenceObject>();
}

