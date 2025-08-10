#include "webbind/ScoringBrowserSignals.hpp"

using emlite::Val;
namespace webbind {

ScoringBrowserSignals::ScoringBrowserSignals(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ScoringBrowserSignals ScoringBrowserSignals::take_ownership(Handle h) noexcept {
        return ScoringBrowserSignals(h);
    }
ScoringBrowserSignals::ScoringBrowserSignals(const emlite::Val &val) noexcept: emlite::Val(val) {}
ScoringBrowserSignals::ScoringBrowserSignals() noexcept: emlite::Val(emlite::Val::object()) {}
ScoringBrowserSignals ScoringBrowserSignals::clone() const noexcept { return *this; }

jsbind::String ScoringBrowserSignals::topWindowHostname() const {
    return emlite::Val::get("topWindowHostname").as<jsbind::String>();
}

void ScoringBrowserSignals::topWindowHostname(const jsbind::String& value) {
    emlite::Val::set("topWindowHostname", value);
}

jsbind::String ScoringBrowserSignals::interestGroupOwner() const {
    return emlite::Val::get("interestGroupOwner").as<jsbind::String>();
}

void ScoringBrowserSignals::interestGroupOwner(const jsbind::String& value) {
    emlite::Val::set("interestGroupOwner", value);
}

jsbind::String ScoringBrowserSignals::renderURL() const {
    return emlite::Val::get("renderURL").as<jsbind::String>();
}

void ScoringBrowserSignals::renderURL(const jsbind::String& value) {
    emlite::Val::set("renderURL", value);
}

unsigned long ScoringBrowserSignals::biddingDurationMsec() const {
    return emlite::Val::get("biddingDurationMsec").as<unsigned long>();
}

void ScoringBrowserSignals::biddingDurationMsec(unsigned long value) {
    emlite::Val::set("biddingDurationMsec", value);
}

jsbind::String ScoringBrowserSignals::bidCurrency() const {
    return emlite::Val::get("bidCurrency").as<jsbind::String>();
}

void ScoringBrowserSignals::bidCurrency(const jsbind::String& value) {
    emlite::Val::set("bidCurrency", value);
}

jsbind::Record<jsbind::String, jsbind::String> ScoringBrowserSignals::renderSize() const {
    return emlite::Val::get("renderSize").as<jsbind::Record<jsbind::String, jsbind::String>>();
}

void ScoringBrowserSignals::renderSize(const jsbind::Record<jsbind::String, jsbind::String>& value) {
    emlite::Val::set("renderSize", value);
}

unsigned long ScoringBrowserSignals::dataVersion() const {
    return emlite::Val::get("dataVersion").as<unsigned long>();
}

void ScoringBrowserSignals::dataVersion(unsigned long value) {
    emlite::Val::set("dataVersion", value);
}

unsigned long ScoringBrowserSignals::crossOriginDataVersion() const {
    return emlite::Val::get("crossOriginDataVersion").as<unsigned long>();
}

void ScoringBrowserSignals::crossOriginDataVersion(unsigned long value) {
    emlite::Val::set("crossOriginDataVersion", value);
}

jsbind::TypedArray<jsbind::String> ScoringBrowserSignals::adComponents() const {
    return emlite::Val::get("adComponents").as<jsbind::TypedArray<jsbind::String>>();
}

void ScoringBrowserSignals::adComponents(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("adComponents", value);
}

bool ScoringBrowserSignals::forDebuggingOnlyInCooldownOrLockout() const {
    return emlite::Val::get("forDebuggingOnlyInCooldownOrLockout").as<bool>();
}

void ScoringBrowserSignals::forDebuggingOnlyInCooldownOrLockout(bool value) {
    emlite::Val::set("forDebuggingOnlyInCooldownOrLockout", value);
}

jsbind::String ScoringBrowserSignals::creativeScanningMetadata() const {
    return emlite::Val::get("creativeScanningMetadata").as<jsbind::String>();
}

void ScoringBrowserSignals::creativeScanningMetadata(const jsbind::String& value) {
    emlite::Val::set("creativeScanningMetadata", value);
}

jsbind::TypedArray<jsbind::String> ScoringBrowserSignals::adComponentsCreativeScanningMetadata() const {
    return emlite::Val::get("adComponentsCreativeScanningMetadata").as<jsbind::TypedArray<jsbind::String>>();
}

void ScoringBrowserSignals::adComponentsCreativeScanningMetadata(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("adComponentsCreativeScanningMetadata", value);
}


} // namespace webbind