#include <webbind/Navigator.hpp>
#include <webbind/AudioSession.hpp>
#include <webbind/AudioContext.hpp>
#include <webbind/BatteryManager.hpp>
#include <webbind/Clipboard.hpp>
#include <webbind/ContactsManager.hpp>
#include <webbind/CredentialsContainer.hpp>
#include <webbind/DevicePosture.hpp>
#include <webbind/MediaKeySystemAccess.hpp>
#include <webbind/Gamepad.hpp>
#include <webbind/Geolocation.hpp>
#include <webbind/HandwritingRecognizer.hpp>
#include <webbind/UserActivation.hpp>
#include <webbind/Ink.hpp>
#include <webbind/Scheduling.hpp>
#include <webbind/Keyboard.hpp>
#include <webbind/NavigatorLogin.hpp>
#include <webbind/NavigatorManagedData.hpp>
#include <webbind/MediaCapabilities.hpp>
#include <webbind/MediaDevices.hpp>
#include <webbind/PreferenceManager.hpp>
#include <webbind/MediaSession.hpp>
#include <webbind/Permissions.hpp>
#include <webbind/Presentation.hpp>
#include <webbind/Attribution.hpp>
#include <webbind/WakeLock.hpp>
#include <webbind/Serial.hpp>
#include <webbind/ServiceWorkerContainer.hpp>
#include <webbind/ProtectedAudience.hpp>
#include <webbind/VirtualKeyboard.hpp>
#include <webbind/Bluetooth.hpp>
#include <webbind/HID.hpp>
#include <webbind/MIDIAccess.hpp>
#include <webbind/USB.hpp>
#include <webbind/XRSystem.hpp>
#include <webbind/WindowControlsOverlay.hpp>
#include <webbind/PluginArray.hpp>
#include <webbind/MimeTypeArray.hpp>
#include <webbind/NetworkInformation.hpp>
#include <webbind/StorageBucketManager.hpp>
#include <webbind/StorageManager.hpp>
#include <webbind/NavigatorUAData.hpp>
#include <webbind/LockManager.hpp>
#include <webbind/GPU.hpp>
#include <webbind/ML.hpp>
#include <webbind/AbortSignal.hpp>


MediaKeySystemConfiguration::MediaKeySystemConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaKeySystemConfiguration MediaKeySystemConfiguration::take_ownership(Handle h) noexcept {
        return MediaKeySystemConfiguration(h);
    }
MediaKeySystemConfiguration::MediaKeySystemConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaKeySystemConfiguration::MediaKeySystemConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
MediaKeySystemConfiguration MediaKeySystemConfiguration::clone() const noexcept { return *this; }

jsbind::String MediaKeySystemConfiguration::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void MediaKeySystemConfiguration::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::TypedArray<jsbind::String> MediaKeySystemConfiguration::initDataTypes() const {
    return emlite::Val::get("initDataTypes").as<jsbind::TypedArray<jsbind::String>>();
}

void MediaKeySystemConfiguration::initDataTypes(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("initDataTypes", value);
}

jsbind::TypedArray<jsbind::Any> MediaKeySystemConfiguration::audioCapabilities() const {
    return emlite::Val::get("audioCapabilities").as<jsbind::TypedArray<jsbind::Any>>();
}

void MediaKeySystemConfiguration::audioCapabilities(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("audioCapabilities", value);
}

jsbind::TypedArray<jsbind::Any> MediaKeySystemConfiguration::videoCapabilities() const {
    return emlite::Val::get("videoCapabilities").as<jsbind::TypedArray<jsbind::Any>>();
}

void MediaKeySystemConfiguration::videoCapabilities(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("videoCapabilities", value);
}

MediaKeysRequirement MediaKeySystemConfiguration::distinctiveIdentifier() const {
    return emlite::Val::get("distinctiveIdentifier").as<MediaKeysRequirement>();
}

void MediaKeySystemConfiguration::distinctiveIdentifier(const MediaKeysRequirement& value) {
    emlite::Val::set("distinctiveIdentifier", value);
}

MediaKeysRequirement MediaKeySystemConfiguration::persistentState() const {
    return emlite::Val::get("persistentState").as<MediaKeysRequirement>();
}

void MediaKeySystemConfiguration::persistentState(const MediaKeysRequirement& value) {
    emlite::Val::set("persistentState", value);
}

jsbind::TypedArray<jsbind::String> MediaKeySystemConfiguration::sessionTypes() const {
    return emlite::Val::get("sessionTypes").as<jsbind::TypedArray<jsbind::String>>();
}

void MediaKeySystemConfiguration::sessionTypes(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("sessionTypes", value);
}

RelatedApplication::RelatedApplication(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RelatedApplication RelatedApplication::take_ownership(Handle h) noexcept {
        return RelatedApplication(h);
    }
RelatedApplication::RelatedApplication(const emlite::Val &val) noexcept: emlite::Val(val) {}
RelatedApplication::RelatedApplication() noexcept: emlite::Val(emlite::Val::object()) {}
RelatedApplication RelatedApplication::clone() const noexcept { return *this; }

jsbind::String RelatedApplication::platform() const {
    return emlite::Val::get("platform").as<jsbind::String>();
}

void RelatedApplication::platform(const jsbind::String& value) {
    emlite::Val::set("platform", value);
}

jsbind::String RelatedApplication::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void RelatedApplication::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

jsbind::String RelatedApplication::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void RelatedApplication::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String RelatedApplication::version() const {
    return emlite::Val::get("version").as<jsbind::String>();
}

void RelatedApplication::version(const jsbind::String& value) {
    emlite::Val::set("version", value);
}

HandwritingRecognizerQueryResult::HandwritingRecognizerQueryResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult::take_ownership(Handle h) noexcept {
        return HandwritingRecognizerQueryResult(h);
    }
HandwritingRecognizerQueryResult::HandwritingRecognizerQueryResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingRecognizerQueryResult::HandwritingRecognizerQueryResult() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult::clone() const noexcept { return *this; }

bool HandwritingRecognizerQueryResult::textAlternatives() const {
    return emlite::Val::get("textAlternatives").as<bool>();
}

void HandwritingRecognizerQueryResult::textAlternatives(bool value) {
    emlite::Val::set("textAlternatives", value);
}

bool HandwritingRecognizerQueryResult::textSegmentation() const {
    return emlite::Val::get("textSegmentation").as<bool>();
}

void HandwritingRecognizerQueryResult::textSegmentation(bool value) {
    emlite::Val::set("textSegmentation", value);
}

jsbind::Any HandwritingRecognizerQueryResult::hints() const {
    return emlite::Val::get("hints").as<jsbind::Any>();
}

void HandwritingRecognizerQueryResult::hints(const jsbind::Any& value) {
    emlite::Val::set("hints", value);
}

HandwritingModelConstraint::HandwritingModelConstraint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingModelConstraint HandwritingModelConstraint::take_ownership(Handle h) noexcept {
        return HandwritingModelConstraint(h);
    }
HandwritingModelConstraint::HandwritingModelConstraint(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingModelConstraint::HandwritingModelConstraint() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingModelConstraint HandwritingModelConstraint::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> HandwritingModelConstraint::languages() const {
    return emlite::Val::get("languages").as<jsbind::TypedArray<jsbind::String>>();
}

void HandwritingModelConstraint::languages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("languages", value);
}

AuctionAdInterestGroup::AuctionAdInterestGroup(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAdInterestGroup AuctionAdInterestGroup::take_ownership(Handle h) noexcept {
        return AuctionAdInterestGroup(h);
    }
AuctionAdInterestGroup::AuctionAdInterestGroup(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionAdInterestGroup::AuctionAdInterestGroup() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionAdInterestGroup AuctionAdInterestGroup::clone() const noexcept { return *this; }

double AuctionAdInterestGroup::priority() const {
    return emlite::Val::get("priority").as<double>();
}

void AuctionAdInterestGroup::priority(double value) {
    emlite::Val::set("priority", value);
}

jsbind::Record<jsbind::String, double> AuctionAdInterestGroup::prioritySignalsOverrides() const {
    return emlite::Val::get("prioritySignalsOverrides").as<jsbind::Record<jsbind::String, double>>();
}

void AuctionAdInterestGroup::prioritySignalsOverrides(jsbind::Record<jsbind::String, double> value) {
    emlite::Val::set("prioritySignalsOverrides", value);
}

double AuctionAdInterestGroup::lifetimeMs() const {
    return emlite::Val::get("lifetimeMs").as<double>();
}

void AuctionAdInterestGroup::lifetimeMs(double value) {
    emlite::Val::set("lifetimeMs", value);
}

jsbind::String AuctionAdInterestGroup::additionalBidKey() const {
    return emlite::Val::get("additionalBidKey").as<jsbind::String>();
}

void AuctionAdInterestGroup::additionalBidKey(const jsbind::String& value) {
    emlite::Val::set("additionalBidKey", value);
}

jsbind::Any AuctionAdInterestGroup::privateAggregationConfig() const {
    return emlite::Val::get("privateAggregationConfig").as<jsbind::Any>();
}

void AuctionAdInterestGroup::privateAggregationConfig(const jsbind::Any& value) {
    emlite::Val::set("privateAggregationConfig", value);
}

AuctionAdInterestGroupKey::AuctionAdInterestGroupKey(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAdInterestGroupKey AuctionAdInterestGroupKey::take_ownership(Handle h) noexcept {
        return AuctionAdInterestGroupKey(h);
    }
AuctionAdInterestGroupKey::AuctionAdInterestGroupKey(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionAdInterestGroupKey::AuctionAdInterestGroupKey() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionAdInterestGroupKey AuctionAdInterestGroupKey::clone() const noexcept { return *this; }

jsbind::String AuctionAdInterestGroupKey::owner() const {
    return emlite::Val::get("owner").as<jsbind::String>();
}

void AuctionAdInterestGroupKey::owner(const jsbind::String& value) {
    emlite::Val::set("owner", value);
}

jsbind::String AuctionAdInterestGroupKey::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void AuctionAdInterestGroupKey::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

AuctionAdConfig::AuctionAdConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAdConfig AuctionAdConfig::take_ownership(Handle h) noexcept {
        return AuctionAdConfig(h);
    }
AuctionAdConfig::AuctionAdConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionAdConfig::AuctionAdConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionAdConfig AuctionAdConfig::clone() const noexcept { return *this; }

jsbind::String AuctionAdConfig::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void AuctionAdConfig::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

jsbind::String AuctionAdConfig::decisionLogicURL() const {
    return emlite::Val::get("decisionLogicURL").as<jsbind::String>();
}

void AuctionAdConfig::decisionLogicURL(const jsbind::String& value) {
    emlite::Val::set("decisionLogicURL", value);
}

jsbind::String AuctionAdConfig::trustedScoringSignalsURL() const {
    return emlite::Val::get("trustedScoringSignalsURL").as<jsbind::String>();
}

void AuctionAdConfig::trustedScoringSignalsURL(const jsbind::String& value) {
    emlite::Val::set("trustedScoringSignalsURL", value);
}

long AuctionAdConfig::maxTrustedScoringSignalsURLLength() const {
    return emlite::Val::get("maxTrustedScoringSignalsURLLength").as<long>();
}

void AuctionAdConfig::maxTrustedScoringSignalsURLLength(long value) {
    emlite::Val::set("maxTrustedScoringSignalsURLLength", value);
}

jsbind::String AuctionAdConfig::trustedScoringSignalsCoordinator() const {
    return emlite::Val::get("trustedScoringSignalsCoordinator").as<jsbind::String>();
}

void AuctionAdConfig::trustedScoringSignalsCoordinator(const jsbind::String& value) {
    emlite::Val::set("trustedScoringSignalsCoordinator", value);
}

bool AuctionAdConfig::sendCreativeScanningMetadata() const {
    return emlite::Val::get("sendCreativeScanningMetadata").as<bool>();
}

void AuctionAdConfig::sendCreativeScanningMetadata(bool value) {
    emlite::Val::set("sendCreativeScanningMetadata", value);
}

jsbind::TypedArray<jsbind::String> AuctionAdConfig::interestGroupBuyers() const {
    return emlite::Val::get("interestGroupBuyers").as<jsbind::TypedArray<jsbind::String>>();
}

void AuctionAdConfig::interestGroupBuyers(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("interestGroupBuyers", value);
}

jsbind::Promise<jsbind::Any> AuctionAdConfig::auctionSignals() const {
    return emlite::Val::get("auctionSignals").as<jsbind::Promise<jsbind::Any>>();
}

void AuctionAdConfig::auctionSignals(const jsbind::Promise<jsbind::Any>& value) {
    emlite::Val::set("auctionSignals", value);
}

jsbind::Promise<jsbind::Any> AuctionAdConfig::sellerSignals() const {
    return emlite::Val::get("sellerSignals").as<jsbind::Promise<jsbind::Any>>();
}

void AuctionAdConfig::sellerSignals(const jsbind::Promise<jsbind::Any>& value) {
    emlite::Val::set("sellerSignals", value);
}

jsbind::Promise<jsbind::String> AuctionAdConfig::directFromSellerSignalsHeaderAdSlot() const {
    return emlite::Val::get("directFromSellerSignalsHeaderAdSlot").as<jsbind::Promise<jsbind::String>>();
}

void AuctionAdConfig::directFromSellerSignalsHeaderAdSlot(const jsbind::Promise<jsbind::String>& value) {
    emlite::Val::set("directFromSellerSignalsHeaderAdSlot", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> AuctionAdConfig::deprecatedRenderURLReplacements() const {
    return emlite::Val::get("deprecatedRenderURLReplacements").as<jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>>();
}

void AuctionAdConfig::deprecatedRenderURLReplacements(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value) {
    emlite::Val::set("deprecatedRenderURLReplacements", value);
}

long long AuctionAdConfig::sellerTimeout() const {
    return emlite::Val::get("sellerTimeout").as<long long>();
}

void AuctionAdConfig::sellerTimeout(long long value) {
    emlite::Val::set("sellerTimeout", value);
}

unsigned short AuctionAdConfig::sellerExperimentGroupId() const {
    return emlite::Val::get("sellerExperimentGroupId").as<unsigned short>();
}

void AuctionAdConfig::sellerExperimentGroupId(unsigned short value) {
    emlite::Val::set("sellerExperimentGroupId", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>> AuctionAdConfig::perBuyerSignals() const {
    return emlite::Val::get("perBuyerSignals").as<jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>>();
}

void AuctionAdConfig::perBuyerSignals(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>& value) {
    emlite::Val::set("perBuyerSignals", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, long long>> AuctionAdConfig::perBuyerTimeouts() const {
    return emlite::Val::get("perBuyerTimeouts").as<jsbind::Promise<jsbind::Record<jsbind::String, long long>>>();
}

void AuctionAdConfig::perBuyerTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value) {
    emlite::Val::set("perBuyerTimeouts", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, long long>> AuctionAdConfig::perBuyerCumulativeTimeouts() const {
    return emlite::Val::get("perBuyerCumulativeTimeouts").as<jsbind::Promise<jsbind::Record<jsbind::String, long long>>>();
}

void AuctionAdConfig::perBuyerCumulativeTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value) {
    emlite::Val::set("perBuyerCumulativeTimeouts", value);
}

long long AuctionAdConfig::reportingTimeout() const {
    return emlite::Val::get("reportingTimeout").as<long long>();
}

void AuctionAdConfig::reportingTimeout(long long value) {
    emlite::Val::set("reportingTimeout", value);
}

jsbind::String AuctionAdConfig::sellerCurrency() const {
    return emlite::Val::get("sellerCurrency").as<jsbind::String>();
}

void AuctionAdConfig::sellerCurrency(const jsbind::String& value) {
    emlite::Val::set("sellerCurrency", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> AuctionAdConfig::perBuyerCurrencies() const {
    return emlite::Val::get("perBuyerCurrencies").as<jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>>();
}

void AuctionAdConfig::perBuyerCurrencies(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value) {
    emlite::Val::set("perBuyerCurrencies", value);
}

jsbind::Record<jsbind::String, unsigned short> AuctionAdConfig::perBuyerMultiBidLimits() const {
    return emlite::Val::get("perBuyerMultiBidLimits").as<jsbind::Record<jsbind::String, unsigned short>>();
}

void AuctionAdConfig::perBuyerMultiBidLimits(jsbind::Record<jsbind::String, unsigned short> value) {
    emlite::Val::set("perBuyerMultiBidLimits", value);
}

jsbind::Record<jsbind::String, unsigned short> AuctionAdConfig::perBuyerGroupLimits() const {
    return emlite::Val::get("perBuyerGroupLimits").as<jsbind::Record<jsbind::String, unsigned short>>();
}

void AuctionAdConfig::perBuyerGroupLimits(jsbind::Record<jsbind::String, unsigned short> value) {
    emlite::Val::set("perBuyerGroupLimits", value);
}

jsbind::Record<jsbind::String, unsigned short> AuctionAdConfig::perBuyerExperimentGroupIds() const {
    return emlite::Val::get("perBuyerExperimentGroupIds").as<jsbind::Record<jsbind::String, unsigned short>>();
}

void AuctionAdConfig::perBuyerExperimentGroupIds(jsbind::Record<jsbind::String, unsigned short> value) {
    emlite::Val::set("perBuyerExperimentGroupIds", value);
}

jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> AuctionAdConfig::perBuyerPrioritySignals() const {
    return emlite::Val::get("perBuyerPrioritySignals").as<jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>>>();
}

void AuctionAdConfig::perBuyerPrioritySignals(jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> value) {
    emlite::Val::set("perBuyerPrioritySignals", value);
}

jsbind::TypedArray<long long> AuctionAdConfig::auctionReportBuyerKeys() const {
    return emlite::Val::get("auctionReportBuyerKeys").as<jsbind::TypedArray<long long>>();
}

void AuctionAdConfig::auctionReportBuyerKeys(jsbind::TypedArray<long long> value) {
    emlite::Val::set("auctionReportBuyerKeys", value);
}

jsbind::Record<jsbind::String, jsbind::Any> AuctionAdConfig::auctionReportBuyers() const {
    return emlite::Val::get("auctionReportBuyers").as<jsbind::Record<jsbind::String, jsbind::Any>>();
}

void AuctionAdConfig::auctionReportBuyers(const jsbind::Record<jsbind::String, jsbind::Any>& value) {
    emlite::Val::set("auctionReportBuyers", value);
}

jsbind::Any AuctionAdConfig::auctionReportBuyerDebugModeConfig() const {
    return emlite::Val::get("auctionReportBuyerDebugModeConfig").as<jsbind::Any>();
}

void AuctionAdConfig::auctionReportBuyerDebugModeConfig(const jsbind::Any& value) {
    emlite::Val::set("auctionReportBuyerDebugModeConfig", value);
}

jsbind::TypedArray<jsbind::String> AuctionAdConfig::requiredSellerCapabilities() const {
    return emlite::Val::get("requiredSellerCapabilities").as<jsbind::TypedArray<jsbind::String>>();
}

void AuctionAdConfig::requiredSellerCapabilities(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("requiredSellerCapabilities", value);
}

jsbind::Any AuctionAdConfig::privateAggregationConfig() const {
    return emlite::Val::get("privateAggregationConfig").as<jsbind::Any>();
}

void AuctionAdConfig::privateAggregationConfig(const jsbind::Any& value) {
    emlite::Val::set("privateAggregationConfig", value);
}

jsbind::Record<jsbind::String, jsbind::String> AuctionAdConfig::requestedSize() const {
    return emlite::Val::get("requestedSize").as<jsbind::Record<jsbind::String, jsbind::String>>();
}

void AuctionAdConfig::requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value) {
    emlite::Val::set("requestedSize", value);
}

jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>> AuctionAdConfig::allSlotsRequestedSizes() const {
    return emlite::Val::get("allSlotsRequestedSizes").as<jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>>();
}

void AuctionAdConfig::allSlotsRequestedSizes(const jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>& value) {
    emlite::Val::set("allSlotsRequestedSizes", value);
}

jsbind::Promise<jsbind::Undefined> AuctionAdConfig::additionalBids() const {
    return emlite::Val::get("additionalBids").as<jsbind::Promise<jsbind::Undefined>>();
}

void AuctionAdConfig::additionalBids(const jsbind::Promise<jsbind::Undefined>& value) {
    emlite::Val::set("additionalBids", value);
}

jsbind::String AuctionAdConfig::auctionNonce() const {
    return emlite::Val::get("auctionNonce").as<jsbind::String>();
}

void AuctionAdConfig::auctionNonce(const jsbind::String& value) {
    emlite::Val::set("auctionNonce", value);
}

jsbind::Any AuctionAdConfig::sellerRealTimeReportingConfig() const {
    return emlite::Val::get("sellerRealTimeReportingConfig").as<jsbind::Any>();
}

void AuctionAdConfig::sellerRealTimeReportingConfig(const jsbind::Any& value) {
    emlite::Val::set("sellerRealTimeReportingConfig", value);
}

jsbind::Record<jsbind::String, jsbind::Any> AuctionAdConfig::perBuyerRealTimeReportingConfig() const {
    return emlite::Val::get("perBuyerRealTimeReportingConfig").as<jsbind::Record<jsbind::String, jsbind::Any>>();
}

void AuctionAdConfig::perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::String, jsbind::Any>& value) {
    emlite::Val::set("perBuyerRealTimeReportingConfig", value);
}

jsbind::TypedArray<AuctionAdConfig> AuctionAdConfig::componentAuctions() const {
    return emlite::Val::get("componentAuctions").as<jsbind::TypedArray<AuctionAdConfig>>();
}

void AuctionAdConfig::componentAuctions(const jsbind::TypedArray<AuctionAdConfig>& value) {
    emlite::Val::set("componentAuctions", value);
}

AbortSignal AuctionAdConfig::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void AuctionAdConfig::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Promise<bool> AuctionAdConfig::resolveToConfig() const {
    return emlite::Val::get("resolveToConfig").as<jsbind::Promise<bool>>();
}

void AuctionAdConfig::resolveToConfig(jsbind::Promise<bool> value) {
    emlite::Val::set("resolveToConfig", value);
}

jsbind::Promise<jsbind::Uint8Array> AuctionAdConfig::serverResponse() const {
    return emlite::Val::get("serverResponse").as<jsbind::Promise<jsbind::Uint8Array>>();
}

void AuctionAdConfig::serverResponse(const jsbind::Promise<jsbind::Uint8Array>& value) {
    emlite::Val::set("serverResponse", value);
}

jsbind::String AuctionAdConfig::requestId() const {
    return emlite::Val::get("requestId").as<jsbind::String>();
}

void AuctionAdConfig::requestId(const jsbind::String& value) {
    emlite::Val::set("requestId", value);
}

AdAuctionData::AdAuctionData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionData AdAuctionData::take_ownership(Handle h) noexcept {
        return AdAuctionData(h);
    }
AdAuctionData::AdAuctionData(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdAuctionData::AdAuctionData() noexcept: emlite::Val(emlite::Val::object()) {}
AdAuctionData AdAuctionData::clone() const noexcept { return *this; }

jsbind::String AdAuctionData::requestId() const {
    return emlite::Val::get("requestId").as<jsbind::String>();
}

void AdAuctionData::requestId(const jsbind::String& value) {
    emlite::Val::set("requestId", value);
}

jsbind::Uint8Array AdAuctionData::request() const {
    return emlite::Val::get("request").as<jsbind::Uint8Array>();
}

void AdAuctionData::request(const jsbind::Uint8Array& value) {
    emlite::Val::set("request", value);
}

jsbind::TypedArray<jsbind::Any> AdAuctionData::requests() const {
    return emlite::Val::get("requests").as<jsbind::TypedArray<jsbind::Any>>();
}

void AdAuctionData::requests(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("requests", value);
}

AdAuctionDataConfig::AdAuctionDataConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionDataConfig AdAuctionDataConfig::take_ownership(Handle h) noexcept {
        return AdAuctionDataConfig(h);
    }
AdAuctionDataConfig::AdAuctionDataConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdAuctionDataConfig::AdAuctionDataConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AdAuctionDataConfig AdAuctionDataConfig::clone() const noexcept { return *this; }

jsbind::String AdAuctionDataConfig::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void AdAuctionDataConfig::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

jsbind::String AdAuctionDataConfig::coordinatorOrigin() const {
    return emlite::Val::get("coordinatorOrigin").as<jsbind::String>();
}

void AdAuctionDataConfig::coordinatorOrigin(const jsbind::String& value) {
    emlite::Val::set("coordinatorOrigin", value);
}

jsbind::TypedArray<jsbind::Any> AdAuctionDataConfig::sellers() const {
    return emlite::Val::get("sellers").as<jsbind::TypedArray<jsbind::Any>>();
}

void AdAuctionDataConfig::sellers(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("sellers", value);
}

unsigned long AdAuctionDataConfig::requestSize() const {
    return emlite::Val::get("requestSize").as<unsigned long>();
}

void AdAuctionDataConfig::requestSize(unsigned long value) {
    emlite::Val::set("requestSize", value);
}

jsbind::Record<jsbind::String, jsbind::Any> AdAuctionDataConfig::perBuyerConfig() const {
    return emlite::Val::get("perBuyerConfig").as<jsbind::Record<jsbind::String, jsbind::Any>>();
}

void AdAuctionDataConfig::perBuyerConfig(const jsbind::Record<jsbind::String, jsbind::Any>& value) {
    emlite::Val::set("perBuyerConfig", value);
}

ShareData::ShareData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ShareData ShareData::take_ownership(Handle h) noexcept {
        return ShareData(h);
    }
ShareData::ShareData(const emlite::Val &val) noexcept: emlite::Val(val) {}
ShareData::ShareData() noexcept: emlite::Val(emlite::Val::object()) {}
ShareData ShareData::clone() const noexcept { return *this; }

jsbind::TypedArray<File> ShareData::files() const {
    return emlite::Val::get("files").as<jsbind::TypedArray<File>>();
}

void ShareData::files(const jsbind::TypedArray<File>& value) {
    emlite::Val::set("files", value);
}

jsbind::String ShareData::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void ShareData::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

jsbind::String ShareData::text() const {
    return emlite::Val::get("text").as<jsbind::String>();
}

void ShareData::text(const jsbind::String& value) {
    emlite::Val::set("text", value);
}

jsbind::String ShareData::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void ShareData::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

MIDIOptions::MIDIOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MIDIOptions MIDIOptions::take_ownership(Handle h) noexcept {
        return MIDIOptions(h);
    }
MIDIOptions::MIDIOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MIDIOptions::MIDIOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MIDIOptions MIDIOptions::clone() const noexcept { return *this; }

bool MIDIOptions::sysex() const {
    return emlite::Val::get("sysex").as<bool>();
}

void MIDIOptions::sysex(bool value) {
    emlite::Val::set("sysex", value);
}

bool MIDIOptions::software() const {
    return emlite::Val::get("software").as<bool>();
}

void MIDIOptions::software(bool value) {
    emlite::Val::set("software", value);
}

Navigator Navigator::take_ownership(Handle h) noexcept {
        return Navigator(h);
    }
Navigator Navigator::clone() const noexcept { return *this; }
Navigator::Navigator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Navigator::Navigator(const emlite::Val &val) noexcept: emlite::Val(val) {}


AudioSession Navigator::audioSession() const {
    return emlite::Val::get("audioSession").as<AudioSession>();
}

AutoplayPolicy Navigator::getAutoplayPolicy(const AudioContext& context) {
    return emlite::Val::call("getAutoplayPolicy", context).as<AutoplayPolicy>();
}

jsbind::Promise<BatteryManager> Navigator::getBattery() {
    return emlite::Val::call("getBattery").as<jsbind::Promise<BatteryManager>>();
}

bool Navigator::sendBeacon(const jsbind::String& url) {
    return emlite::Val::call("sendBeacon", url).as<bool>();
}

bool Navigator::sendBeacon(const jsbind::String& url, const jsbind::Any& data) {
    return emlite::Val::call("sendBeacon", url, data).as<bool>();
}

Clipboard Navigator::clipboard() const {
    return emlite::Val::get("clipboard").as<Clipboard>();
}

ContactsManager Navigator::contacts() const {
    return emlite::Val::get("contacts").as<ContactsManager>();
}

CredentialsContainer Navigator::credentials() const {
    return emlite::Val::get("credentials").as<CredentialsContainer>();
}

DevicePosture Navigator::devicePosture() const {
    return emlite::Val::get("devicePosture").as<DevicePosture>();
}

jsbind::Promise<MediaKeySystemAccess> Navigator::requestMediaKeySystemAccess(const jsbind::String& keySystem, const jsbind::TypedArray<MediaKeySystemConfiguration>& supportedConfigurations) {
    return emlite::Val::call("requestMediaKeySystemAccess", keySystem, supportedConfigurations).as<jsbind::Promise<MediaKeySystemAccess>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::deprecatedReplaceInURN(const jsbind::Any& urnOrConfig, const jsbind::Record<jsbind::String, jsbind::String>& replacements) {
    return emlite::Val::call("deprecatedReplaceInURN", urnOrConfig, replacements).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::String> Navigator::deprecatedURNtoURL(const jsbind::Any& urnOrConfig) {
    return emlite::Val::call("deprecatedURNtoURL", urnOrConfig).as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> Navigator::deprecatedURNtoURL(const jsbind::Any& urnOrConfig, bool send_reports) {
    return emlite::Val::call("deprecatedURNtoURL", urnOrConfig, send_reports).as<jsbind::Promise<jsbind::String>>();
}

jsbind::TypedArray<jsbind::String> Navigator::adAuctionComponents(unsigned short numAdComponents) {
    return emlite::Val::call("adAuctionComponents", numAdComponents).as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::TypedArray<Gamepad> Navigator::getGamepads() {
    return emlite::Val::call("getGamepads").as<jsbind::TypedArray<Gamepad>>();
}

Geolocation Navigator::geolocation() const {
    return emlite::Val::get("geolocation").as<Geolocation>();
}

jsbind::Promise<jsbind::TypedArray<RelatedApplication>> Navigator::getInstalledRelatedApps() {
    return emlite::Val::call("getInstalledRelatedApps").as<jsbind::Promise<jsbind::TypedArray<RelatedApplication>>>();
}

jsbind::Promise<HandwritingRecognizerQueryResult> Navigator::queryHandwritingRecognizer(const HandwritingModelConstraint& constraint) {
    return emlite::Val::call("queryHandwritingRecognizer", constraint).as<jsbind::Promise<HandwritingRecognizerQueryResult>>();
}

jsbind::Promise<HandwritingRecognizer> Navigator::createHandwritingRecognizer(const HandwritingModelConstraint& constraint) {
    return emlite::Val::call("createHandwritingRecognizer", constraint).as<jsbind::Promise<HandwritingRecognizer>>();
}

UserActivation Navigator::userActivation() const {
    return emlite::Val::get("userActivation").as<UserActivation>();
}

Ink Navigator::ink() const {
    return emlite::Val::get("ink").as<Ink>();
}

Scheduling Navigator::scheduling() const {
    return emlite::Val::get("scheduling").as<Scheduling>();
}

Keyboard Navigator::keyboard() const {
    return emlite::Val::get("keyboard").as<Keyboard>();
}

NavigatorLogin Navigator::login() const {
    return emlite::Val::get("login").as<NavigatorLogin>();
}

NavigatorManagedData Navigator::managed() const {
    return emlite::Val::get("managed").as<NavigatorManagedData>();
}

MediaCapabilities Navigator::mediaCapabilities() const {
    return emlite::Val::get("mediaCapabilities").as<MediaCapabilities>();
}

MediaDevices Navigator::mediaDevices() const {
    return emlite::Val::get("mediaDevices").as<MediaDevices>();
}

PreferenceManager Navigator::preferences() const {
    return emlite::Val::get("preferences").as<PreferenceManager>();
}

MediaSession Navigator::mediaSession() const {
    return emlite::Val::get("mediaSession").as<MediaSession>();
}

Permissions Navigator::permissions() const {
    return emlite::Val::get("permissions").as<Permissions>();
}

long Navigator::maxTouchPoints() const {
    return emlite::Val::get("maxTouchPoints").as<long>();
}

Presentation Navigator::presentation() const {
    return emlite::Val::get("presentation").as<Presentation>();
}

Attribution Navigator::attribution() const {
    return emlite::Val::get("attribution").as<Attribution>();
}

WakeLock Navigator::wakeLock() const {
    return emlite::Val::get("wakeLock").as<WakeLock>();
}

Serial Navigator::serial() const {
    return emlite::Val::get("serial").as<Serial>();
}

ServiceWorkerContainer Navigator::serviceWorker() const {
    return emlite::Val::get("serviceWorker").as<ServiceWorkerContainer>();
}

jsbind::Promise<jsbind::Undefined> Navigator::joinAdInterestGroup(const AuctionAdInterestGroup& group) {
    return emlite::Val::call("joinAdInterestGroup", group).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::leaveAdInterestGroup() {
    return emlite::Val::call("leaveAdInterestGroup").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::leaveAdInterestGroup(const AuctionAdInterestGroupKey& group) {
    return emlite::Val::call("leaveAdInterestGroup", group).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::clearOriginJoinedAdInterestGroups(const jsbind::String& owner) {
    return emlite::Val::call("clearOriginJoinedAdInterestGroups", owner).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::clearOriginJoinedAdInterestGroups(const jsbind::String& owner, const jsbind::TypedArray<jsbind::String>& interestGroupsToKeep) {
    return emlite::Val::call("clearOriginJoinedAdInterestGroups", owner, interestGroupsToKeep).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Any> Navigator::runAdAuction(const AuctionAdConfig& config) {
    return emlite::Val::call("runAdAuction", config).as<jsbind::Promise<jsbind::Any>>();
}

bool Navigator::deprecatedRunAdAuctionEnforcesKAnonymity() const {
    return emlite::Val::get("deprecatedRunAdAuctionEnforcesKAnonymity").as<bool>();
}

bool Navigator::canLoadAdAuctionFencedFrame() {
    return emlite::Val::call("canLoadAdAuctionFencedFrame").as<bool>();
}

jsbind::Promise<AdAuctionData> Navigator::getInterestGroupAdAuctionData() {
    return emlite::Val::call("getInterestGroupAdAuctionData").as<jsbind::Promise<AdAuctionData>>();
}

jsbind::Promise<AdAuctionData> Navigator::getInterestGroupAdAuctionData(const AdAuctionDataConfig& config) {
    return emlite::Val::call("getInterestGroupAdAuctionData", config).as<jsbind::Promise<AdAuctionData>>();
}

jsbind::Promise<jsbind::String> Navigator::createAuctionNonce() {
    return emlite::Val::call("createAuctionNonce").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Undefined Navigator::updateAdInterestGroups() {
    return emlite::Val::call("updateAdInterestGroups").as<jsbind::Undefined>();
}

ProtectedAudience Navigator::protectedAudience() const {
    return emlite::Val::get("protectedAudience").as<ProtectedAudience>();
}

bool Navigator::vibrate(const jsbind::Any& pattern) {
    return emlite::Val::call("vibrate", pattern).as<bool>();
}

VirtualKeyboard Navigator::virtualKeyboard() const {
    return emlite::Val::get("virtualKeyboard").as<VirtualKeyboard>();
}

Bluetooth Navigator::bluetooth() const {
    return emlite::Val::get("bluetooth").as<Bluetooth>();
}

jsbind::Promise<jsbind::Undefined> Navigator::share() {
    return emlite::Val::call("share").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::share(const ShareData& data) {
    return emlite::Val::call("share", data).as<jsbind::Promise<jsbind::Undefined>>();
}

bool Navigator::canShare() {
    return emlite::Val::call("canShare").as<bool>();
}

bool Navigator::canShare(const ShareData& data) {
    return emlite::Val::call("canShare", data).as<bool>();
}

HID Navigator::hid() const {
    return emlite::Val::get("hid").as<HID>();
}

jsbind::Promise<MIDIAccess> Navigator::requestMIDIAccess() {
    return emlite::Val::call("requestMIDIAccess").as<jsbind::Promise<MIDIAccess>>();
}

jsbind::Promise<MIDIAccess> Navigator::requestMIDIAccess(const MIDIOptions& options) {
    return emlite::Val::call("requestMIDIAccess", options).as<jsbind::Promise<MIDIAccess>>();
}

USB Navigator::usb() const {
    return emlite::Val::get("usb").as<USB>();
}

XRSystem Navigator::xr() const {
    return emlite::Val::get("xr").as<XRSystem>();
}

WindowControlsOverlay Navigator::windowControlsOverlay() const {
    return emlite::Val::get("windowControlsOverlay").as<WindowControlsOverlay>();
}

jsbind::Promise<jsbind::Undefined> Navigator::setAppBadge() {
    return emlite::Val::call("setAppBadge").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::setAppBadge(long long contents) {
    return emlite::Val::call("setAppBadge", contents).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Navigator::clearAppBadge() {
    return emlite::Val::call("clearAppBadge").as<jsbind::Promise<jsbind::Undefined>>();
}

double Navigator::deviceMemory() const {
    return emlite::Val::get("deviceMemory").as<double>();
}

bool Navigator::globalPrivacyControl() const {
    return emlite::Val::get("globalPrivacyControl").as<bool>();
}

bool Navigator::taintEnabled() {
    return emlite::Val::call("taintEnabled").as<bool>();
}

jsbind::String Navigator::oscpu() const {
    return emlite::Val::get("oscpu").as<jsbind::String>();
}

jsbind::String Navigator::language() const {
    return emlite::Val::get("language").as<jsbind::String>();
}

jsbind::TypedArray<jsbind::String> Navigator::languages() const {
    return emlite::Val::get("languages").as<jsbind::TypedArray<jsbind::String>>();
}

bool Navigator::onLine() const {
    return emlite::Val::get("onLine").as<bool>();
}

jsbind::Undefined Navigator::registerProtocolHandler(const jsbind::String& scheme, const jsbind::String& url) {
    return emlite::Val::call("registerProtocolHandler", scheme, url).as<jsbind::Undefined>();
}

jsbind::Undefined Navigator::unregisterProtocolHandler(const jsbind::String& scheme, const jsbind::String& url) {
    return emlite::Val::call("unregisterProtocolHandler", scheme, url).as<jsbind::Undefined>();
}

bool Navigator::cookieEnabled() const {
    return emlite::Val::get("cookieEnabled").as<bool>();
}

PluginArray Navigator::plugins() const {
    return emlite::Val::get("plugins").as<PluginArray>();
}

MimeTypeArray Navigator::mimeTypes() const {
    return emlite::Val::get("mimeTypes").as<MimeTypeArray>();
}

bool Navigator::javaEnabled() {
    return emlite::Val::call("javaEnabled").as<bool>();
}

bool Navigator::pdfViewerEnabled() const {
    return emlite::Val::get("pdfViewerEnabled").as<bool>();
}

long long Navigator::hardwareConcurrency() const {
    return emlite::Val::get("hardwareConcurrency").as<long long>();
}

NetworkInformation Navigator::connection() const {
    return emlite::Val::get("connection").as<NetworkInformation>();
}

StorageBucketManager Navigator::storageBuckets() const {
    return emlite::Val::get("storageBuckets").as<StorageBucketManager>();
}

StorageManager Navigator::storage() const {
    return emlite::Val::get("storage").as<StorageManager>();
}

NavigatorUAData Navigator::userAgentData() const {
    return emlite::Val::get("userAgentData").as<NavigatorUAData>();
}

LockManager Navigator::locks() const {
    return emlite::Val::get("locks").as<LockManager>();
}

bool Navigator::webdriver() const {
    return emlite::Val::get("webdriver").as<bool>();
}

GPU Navigator::gpu() const {
    return emlite::Val::get("gpu").as<GPU>();
}

ML Navigator::ml() const {
    return emlite::Val::get("ml").as<ML>();
}

