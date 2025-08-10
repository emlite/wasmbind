#include <webbind/BiddingBrowserSignals.hpp>

using emlite::Val;
namespace webbind {

BiddingBrowserSignals::BiddingBrowserSignals(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BiddingBrowserSignals BiddingBrowserSignals::take_ownership(Handle h) noexcept {
        return BiddingBrowserSignals(h);
    }
BiddingBrowserSignals::BiddingBrowserSignals(const emlite::Val &val) noexcept: emlite::Val(val) {}
BiddingBrowserSignals::BiddingBrowserSignals() noexcept: emlite::Val(emlite::Val::object()) {}
BiddingBrowserSignals BiddingBrowserSignals::clone() const noexcept { return *this; }

jsbind::String BiddingBrowserSignals::topWindowHostname() const {
    return emlite::Val::get("topWindowHostname").as<jsbind::String>();
}

void BiddingBrowserSignals::topWindowHostname(const jsbind::String& value) {
    emlite::Val::set("topWindowHostname", value);
}

jsbind::String BiddingBrowserSignals::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void BiddingBrowserSignals::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

long BiddingBrowserSignals::joinCount() const {
    return emlite::Val::get("joinCount").as<long>();
}

void BiddingBrowserSignals::joinCount(long value) {
    emlite::Val::set("joinCount", value);
}

long BiddingBrowserSignals::bidCount() const {
    return emlite::Val::get("bidCount").as<long>();
}

void BiddingBrowserSignals::bidCount(long value) {
    emlite::Val::set("bidCount", value);
}

long BiddingBrowserSignals::recency() const {
    return emlite::Val::get("recency").as<long>();
}

void BiddingBrowserSignals::recency(long value) {
    emlite::Val::set("recency", value);
}

long BiddingBrowserSignals::adComponentsLimit() const {
    return emlite::Val::get("adComponentsLimit").as<long>();
}

void BiddingBrowserSignals::adComponentsLimit(long value) {
    emlite::Val::set("adComponentsLimit", value);
}

unsigned short BiddingBrowserSignals::multiBidLimit() const {
    return emlite::Val::get("multiBidLimit").as<unsigned short>();
}

void BiddingBrowserSignals::multiBidLimit(unsigned short value) {
    emlite::Val::set("multiBidLimit", value);
}

jsbind::Record<jsbind::String, jsbind::String> BiddingBrowserSignals::requestedSize() const {
    return emlite::Val::get("requestedSize").as<jsbind::Record<jsbind::String, jsbind::String>>();
}

void BiddingBrowserSignals::requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value) {
    emlite::Val::set("requestedSize", value);
}

jsbind::String BiddingBrowserSignals::topLevelSeller() const {
    return emlite::Val::get("topLevelSeller").as<jsbind::String>();
}

void BiddingBrowserSignals::topLevelSeller(const jsbind::String& value) {
    emlite::Val::set("topLevelSeller", value);
}

jsbind::TypedArray<jsbind::Any> BiddingBrowserSignals::prevWinsMs() const {
    return emlite::Val::get("prevWinsMs").as<jsbind::TypedArray<jsbind::Any>>();
}

void BiddingBrowserSignals::prevWinsMs(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("prevWinsMs", value);
}

jsbind::Object BiddingBrowserSignals::wasmHelper() const {
    return emlite::Val::get("wasmHelper").as<jsbind::Object>();
}

void BiddingBrowserSignals::wasmHelper(const jsbind::Object& value) {
    emlite::Val::set("wasmHelper", value);
}

unsigned long BiddingBrowserSignals::dataVersion() const {
    return emlite::Val::get("dataVersion").as<unsigned long>();
}

void BiddingBrowserSignals::dataVersion(unsigned long value) {
    emlite::Val::set("dataVersion", value);
}

unsigned long BiddingBrowserSignals::crossOriginDataVersion() const {
    return emlite::Val::get("crossOriginDataVersion").as<unsigned long>();
}

void BiddingBrowserSignals::crossOriginDataVersion(unsigned long value) {
    emlite::Val::set("crossOriginDataVersion", value);
}

bool BiddingBrowserSignals::forDebuggingOnlyInCooldownOrLockout() const {
    return emlite::Val::get("forDebuggingOnlyInCooldownOrLockout").as<bool>();
}

void BiddingBrowserSignals::forDebuggingOnlyInCooldownOrLockout(bool value) {
    emlite::Val::set("forDebuggingOnlyInCooldownOrLockout", value);
}


} // namespace webbind