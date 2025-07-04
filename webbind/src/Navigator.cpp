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

jsbind::DOMString MediaKeySystemConfiguration::label() const {
    return emlite::Val::get("label").as<jsbind::DOMString>();
}

void MediaKeySystemConfiguration::label(const jsbind::DOMString& value) {
    emlite::Val::set("label", value);
}

jsbind::Sequence<jsbind::DOMString> MediaKeySystemConfiguration::initDataTypes() const {
    return emlite::Val::get("initDataTypes").as<jsbind::Sequence<jsbind::DOMString>>();
}

void MediaKeySystemConfiguration::initDataTypes(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("initDataTypes", value);
}

jsbind::Sequence<jsbind::Any> MediaKeySystemConfiguration::audioCapabilities() const {
    return emlite::Val::get("audioCapabilities").as<jsbind::Sequence<jsbind::Any>>();
}

void MediaKeySystemConfiguration::audioCapabilities(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("audioCapabilities", value);
}

jsbind::Sequence<jsbind::Any> MediaKeySystemConfiguration::videoCapabilities() const {
    return emlite::Val::get("videoCapabilities").as<jsbind::Sequence<jsbind::Any>>();
}

void MediaKeySystemConfiguration::videoCapabilities(const jsbind::Sequence<jsbind::Any>& value) {
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

jsbind::Sequence<jsbind::DOMString> MediaKeySystemConfiguration::sessionTypes() const {
    return emlite::Val::get("sessionTypes").as<jsbind::Sequence<jsbind::DOMString>>();
}

void MediaKeySystemConfiguration::sessionTypes(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("sessionTypes", value);
}

RelatedApplication::RelatedApplication(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RelatedApplication RelatedApplication::take_ownership(Handle h) noexcept {
        return RelatedApplication(h);
    }
RelatedApplication::RelatedApplication(const emlite::Val &val) noexcept: emlite::Val(val) {}
RelatedApplication::RelatedApplication() noexcept: emlite::Val(emlite::Val::object()) {}
RelatedApplication RelatedApplication::clone() const noexcept { return *this; }

jsbind::USVString RelatedApplication::platform() const {
    return emlite::Val::get("platform").as<jsbind::USVString>();
}

void RelatedApplication::platform(const jsbind::USVString& value) {
    emlite::Val::set("platform", value);
}

jsbind::USVString RelatedApplication::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

void RelatedApplication::url(const jsbind::USVString& value) {
    emlite::Val::set("url", value);
}

jsbind::DOMString RelatedApplication::id() const {
    return emlite::Val::get("id").as<jsbind::DOMString>();
}

void RelatedApplication::id(const jsbind::DOMString& value) {
    emlite::Val::set("id", value);
}

jsbind::USVString RelatedApplication::version() const {
    return emlite::Val::get("version").as<jsbind::USVString>();
}

void RelatedApplication::version(const jsbind::USVString& value) {
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

jsbind::Sequence<jsbind::DOMString> HandwritingModelConstraint::languages() const {
    return emlite::Val::get("languages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void HandwritingModelConstraint::languages(const jsbind::Sequence<jsbind::DOMString>& value) {
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

jsbind::Record<jsbind::DOMString, double> AuctionAdInterestGroup::prioritySignalsOverrides() const {
    return emlite::Val::get("prioritySignalsOverrides").as<jsbind::Record<jsbind::DOMString, double>>();
}

void AuctionAdInterestGroup::prioritySignalsOverrides(jsbind::Record<jsbind::DOMString, double> value) {
    emlite::Val::set("prioritySignalsOverrides", value);
}

double AuctionAdInterestGroup::lifetimeMs() const {
    return emlite::Val::get("lifetimeMs").as<double>();
}

void AuctionAdInterestGroup::lifetimeMs(double value) {
    emlite::Val::set("lifetimeMs", value);
}

jsbind::DOMString AuctionAdInterestGroup::additionalBidKey() const {
    return emlite::Val::get("additionalBidKey").as<jsbind::DOMString>();
}

void AuctionAdInterestGroup::additionalBidKey(const jsbind::DOMString& value) {
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

jsbind::USVString AuctionAdInterestGroupKey::owner() const {
    return emlite::Val::get("owner").as<jsbind::USVString>();
}

void AuctionAdInterestGroupKey::owner(const jsbind::USVString& value) {
    emlite::Val::set("owner", value);
}

jsbind::USVString AuctionAdInterestGroupKey::name() const {
    return emlite::Val::get("name").as<jsbind::USVString>();
}

void AuctionAdInterestGroupKey::name(const jsbind::USVString& value) {
    emlite::Val::set("name", value);
}

AuctionAdConfig::AuctionAdConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAdConfig AuctionAdConfig::take_ownership(Handle h) noexcept {
        return AuctionAdConfig(h);
    }
AuctionAdConfig::AuctionAdConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionAdConfig::AuctionAdConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionAdConfig AuctionAdConfig::clone() const noexcept { return *this; }

jsbind::USVString AuctionAdConfig::seller() const {
    return emlite::Val::get("seller").as<jsbind::USVString>();
}

void AuctionAdConfig::seller(const jsbind::USVString& value) {
    emlite::Val::set("seller", value);
}

jsbind::USVString AuctionAdConfig::decisionLogicURL() const {
    return emlite::Val::get("decisionLogicURL").as<jsbind::USVString>();
}

void AuctionAdConfig::decisionLogicURL(const jsbind::USVString& value) {
    emlite::Val::set("decisionLogicURL", value);
}

jsbind::USVString AuctionAdConfig::trustedScoringSignalsURL() const {
    return emlite::Val::get("trustedScoringSignalsURL").as<jsbind::USVString>();
}

void AuctionAdConfig::trustedScoringSignalsURL(const jsbind::USVString& value) {
    emlite::Val::set("trustedScoringSignalsURL", value);
}

long AuctionAdConfig::maxTrustedScoringSignalsURLLength() const {
    return emlite::Val::get("maxTrustedScoringSignalsURLLength").as<long>();
}

void AuctionAdConfig::maxTrustedScoringSignalsURLLength(long value) {
    emlite::Val::set("maxTrustedScoringSignalsURLLength", value);
}

jsbind::USVString AuctionAdConfig::trustedScoringSignalsCoordinator() const {
    return emlite::Val::get("trustedScoringSignalsCoordinator").as<jsbind::USVString>();
}

void AuctionAdConfig::trustedScoringSignalsCoordinator(const jsbind::USVString& value) {
    emlite::Val::set("trustedScoringSignalsCoordinator", value);
}

bool AuctionAdConfig::sendCreativeScanningMetadata() const {
    return emlite::Val::get("sendCreativeScanningMetadata").as<bool>();
}

void AuctionAdConfig::sendCreativeScanningMetadata(bool value) {
    emlite::Val::set("sendCreativeScanningMetadata", value);
}

jsbind::Sequence<jsbind::USVString> AuctionAdConfig::interestGroupBuyers() const {
    return emlite::Val::get("interestGroupBuyers").as<jsbind::Sequence<jsbind::USVString>>();
}

void AuctionAdConfig::interestGroupBuyers(const jsbind::Sequence<jsbind::USVString>& value) {
    emlite::Val::set("interestGroupBuyers", value);
}

jsbind::Promise AuctionAdConfig::auctionSignals() const {
    return emlite::Val::get("auctionSignals").as<jsbind::Promise>();
}

void AuctionAdConfig::auctionSignals(const jsbind::Promise& value) {
    emlite::Val::set("auctionSignals", value);
}

jsbind::Promise AuctionAdConfig::sellerSignals() const {
    return emlite::Val::get("sellerSignals").as<jsbind::Promise>();
}

void AuctionAdConfig::sellerSignals(const jsbind::Promise& value) {
    emlite::Val::set("sellerSignals", value);
}

jsbind::Promise AuctionAdConfig::directFromSellerSignalsHeaderAdSlot() const {
    return emlite::Val::get("directFromSellerSignalsHeaderAdSlot").as<jsbind::Promise>();
}

void AuctionAdConfig::directFromSellerSignalsHeaderAdSlot(const jsbind::Promise& value) {
    emlite::Val::set("directFromSellerSignalsHeaderAdSlot", value);
}

jsbind::Promise AuctionAdConfig::deprecatedRenderURLReplacements() const {
    return emlite::Val::get("deprecatedRenderURLReplacements").as<jsbind::Promise>();
}

void AuctionAdConfig::deprecatedRenderURLReplacements(const jsbind::Promise& value) {
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

jsbind::Promise AuctionAdConfig::perBuyerSignals() const {
    return emlite::Val::get("perBuyerSignals").as<jsbind::Promise>();
}

void AuctionAdConfig::perBuyerSignals(const jsbind::Promise& value) {
    emlite::Val::set("perBuyerSignals", value);
}

jsbind::Promise AuctionAdConfig::perBuyerTimeouts() const {
    return emlite::Val::get("perBuyerTimeouts").as<jsbind::Promise>();
}

void AuctionAdConfig::perBuyerTimeouts(const jsbind::Promise& value) {
    emlite::Val::set("perBuyerTimeouts", value);
}

jsbind::Promise AuctionAdConfig::perBuyerCumulativeTimeouts() const {
    return emlite::Val::get("perBuyerCumulativeTimeouts").as<jsbind::Promise>();
}

void AuctionAdConfig::perBuyerCumulativeTimeouts(const jsbind::Promise& value) {
    emlite::Val::set("perBuyerCumulativeTimeouts", value);
}

long long AuctionAdConfig::reportingTimeout() const {
    return emlite::Val::get("reportingTimeout").as<long long>();
}

void AuctionAdConfig::reportingTimeout(long long value) {
    emlite::Val::set("reportingTimeout", value);
}

jsbind::USVString AuctionAdConfig::sellerCurrency() const {
    return emlite::Val::get("sellerCurrency").as<jsbind::USVString>();
}

void AuctionAdConfig::sellerCurrency(const jsbind::USVString& value) {
    emlite::Val::set("sellerCurrency", value);
}

jsbind::Promise AuctionAdConfig::perBuyerCurrencies() const {
    return emlite::Val::get("perBuyerCurrencies").as<jsbind::Promise>();
}

void AuctionAdConfig::perBuyerCurrencies(const jsbind::Promise& value) {
    emlite::Val::set("perBuyerCurrencies", value);
}

jsbind::Record<jsbind::USVString, unsigned short> AuctionAdConfig::perBuyerMultiBidLimits() const {
    return emlite::Val::get("perBuyerMultiBidLimits").as<jsbind::Record<jsbind::USVString, unsigned short>>();
}

void AuctionAdConfig::perBuyerMultiBidLimits(jsbind::Record<jsbind::USVString, unsigned short> value) {
    emlite::Val::set("perBuyerMultiBidLimits", value);
}

jsbind::Record<jsbind::USVString, unsigned short> AuctionAdConfig::perBuyerGroupLimits() const {
    return emlite::Val::get("perBuyerGroupLimits").as<jsbind::Record<jsbind::USVString, unsigned short>>();
}

void AuctionAdConfig::perBuyerGroupLimits(jsbind::Record<jsbind::USVString, unsigned short> value) {
    emlite::Val::set("perBuyerGroupLimits", value);
}

jsbind::Record<jsbind::USVString, unsigned short> AuctionAdConfig::perBuyerExperimentGroupIds() const {
    return emlite::Val::get("perBuyerExperimentGroupIds").as<jsbind::Record<jsbind::USVString, unsigned short>>();
}

void AuctionAdConfig::perBuyerExperimentGroupIds(jsbind::Record<jsbind::USVString, unsigned short> value) {
    emlite::Val::set("perBuyerExperimentGroupIds", value);
}

jsbind::Record<jsbind::USVString, jsbind::Record<jsbind::USVString, double>> AuctionAdConfig::perBuyerPrioritySignals() const {
    return emlite::Val::get("perBuyerPrioritySignals").as<jsbind::Record<jsbind::USVString, jsbind::Record<jsbind::USVString, double>>>();
}

void AuctionAdConfig::perBuyerPrioritySignals(jsbind::Record<jsbind::USVString, jsbind::Record<jsbind::USVString, double>> value) {
    emlite::Val::set("perBuyerPrioritySignals", value);
}

jsbind::Sequence<long long> AuctionAdConfig::auctionReportBuyerKeys() const {
    return emlite::Val::get("auctionReportBuyerKeys").as<jsbind::Sequence<long long>>();
}

void AuctionAdConfig::auctionReportBuyerKeys(jsbind::Sequence<long long> value) {
    emlite::Val::set("auctionReportBuyerKeys", value);
}

jsbind::Record<jsbind::DOMString, jsbind::Any> AuctionAdConfig::auctionReportBuyers() const {
    return emlite::Val::get("auctionReportBuyers").as<jsbind::Record<jsbind::DOMString, jsbind::Any>>();
}

void AuctionAdConfig::auctionReportBuyers(const jsbind::Record<jsbind::DOMString, jsbind::Any>& value) {
    emlite::Val::set("auctionReportBuyers", value);
}

jsbind::Any AuctionAdConfig::auctionReportBuyerDebugModeConfig() const {
    return emlite::Val::get("auctionReportBuyerDebugModeConfig").as<jsbind::Any>();
}

void AuctionAdConfig::auctionReportBuyerDebugModeConfig(const jsbind::Any& value) {
    emlite::Val::set("auctionReportBuyerDebugModeConfig", value);
}

jsbind::Sequence<jsbind::DOMString> AuctionAdConfig::requiredSellerCapabilities() const {
    return emlite::Val::get("requiredSellerCapabilities").as<jsbind::Sequence<jsbind::DOMString>>();
}

void AuctionAdConfig::requiredSellerCapabilities(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("requiredSellerCapabilities", value);
}

jsbind::Any AuctionAdConfig::privateAggregationConfig() const {
    return emlite::Val::get("privateAggregationConfig").as<jsbind::Any>();
}

void AuctionAdConfig::privateAggregationConfig(const jsbind::Any& value) {
    emlite::Val::set("privateAggregationConfig", value);
}

jsbind::Record<jsbind::DOMString, jsbind::DOMString> AuctionAdConfig::requestedSize() const {
    return emlite::Val::get("requestedSize").as<jsbind::Record<jsbind::DOMString, jsbind::DOMString>>();
}

void AuctionAdConfig::requestedSize(const jsbind::Record<jsbind::DOMString, jsbind::DOMString>& value) {
    emlite::Val::set("requestedSize", value);
}

jsbind::Sequence<jsbind::Record<jsbind::DOMString, jsbind::DOMString>> AuctionAdConfig::allSlotsRequestedSizes() const {
    return emlite::Val::get("allSlotsRequestedSizes").as<jsbind::Sequence<jsbind::Record<jsbind::DOMString, jsbind::DOMString>>>();
}

void AuctionAdConfig::allSlotsRequestedSizes(const jsbind::Sequence<jsbind::Record<jsbind::DOMString, jsbind::DOMString>>& value) {
    emlite::Val::set("allSlotsRequestedSizes", value);
}

jsbind::Promise AuctionAdConfig::additionalBids() const {
    return emlite::Val::get("additionalBids").as<jsbind::Promise>();
}

void AuctionAdConfig::additionalBids(const jsbind::Promise& value) {
    emlite::Val::set("additionalBids", value);
}

jsbind::DOMString AuctionAdConfig::auctionNonce() const {
    return emlite::Val::get("auctionNonce").as<jsbind::DOMString>();
}

void AuctionAdConfig::auctionNonce(const jsbind::DOMString& value) {
    emlite::Val::set("auctionNonce", value);
}

jsbind::Any AuctionAdConfig::sellerRealTimeReportingConfig() const {
    return emlite::Val::get("sellerRealTimeReportingConfig").as<jsbind::Any>();
}

void AuctionAdConfig::sellerRealTimeReportingConfig(const jsbind::Any& value) {
    emlite::Val::set("sellerRealTimeReportingConfig", value);
}

jsbind::Record<jsbind::USVString, jsbind::Any> AuctionAdConfig::perBuyerRealTimeReportingConfig() const {
    return emlite::Val::get("perBuyerRealTimeReportingConfig").as<jsbind::Record<jsbind::USVString, jsbind::Any>>();
}

void AuctionAdConfig::perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::USVString, jsbind::Any>& value) {
    emlite::Val::set("perBuyerRealTimeReportingConfig", value);
}

jsbind::Sequence<AuctionAdConfig> AuctionAdConfig::componentAuctions() const {
    return emlite::Val::get("componentAuctions").as<jsbind::Sequence<AuctionAdConfig>>();
}

void AuctionAdConfig::componentAuctions(const jsbind::Sequence<AuctionAdConfig>& value) {
    emlite::Val::set("componentAuctions", value);
}

AbortSignal AuctionAdConfig::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void AuctionAdConfig::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Promise AuctionAdConfig::resolveToConfig() const {
    return emlite::Val::get("resolveToConfig").as<jsbind::Promise>();
}

void AuctionAdConfig::resolveToConfig(const jsbind::Promise& value) {
    emlite::Val::set("resolveToConfig", value);
}

jsbind::Promise AuctionAdConfig::serverResponse() const {
    return emlite::Val::get("serverResponse").as<jsbind::Promise>();
}

void AuctionAdConfig::serverResponse(const jsbind::Promise& value) {
    emlite::Val::set("serverResponse", value);
}

jsbind::USVString AuctionAdConfig::requestId() const {
    return emlite::Val::get("requestId").as<jsbind::USVString>();
}

void AuctionAdConfig::requestId(const jsbind::USVString& value) {
    emlite::Val::set("requestId", value);
}

AdAuctionData::AdAuctionData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionData AdAuctionData::take_ownership(Handle h) noexcept {
        return AdAuctionData(h);
    }
AdAuctionData::AdAuctionData(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdAuctionData::AdAuctionData() noexcept: emlite::Val(emlite::Val::object()) {}
AdAuctionData AdAuctionData::clone() const noexcept { return *this; }

jsbind::USVString AdAuctionData::requestId() const {
    return emlite::Val::get("requestId").as<jsbind::USVString>();
}

void AdAuctionData::requestId(const jsbind::USVString& value) {
    emlite::Val::set("requestId", value);
}

jsbind::Uint8Array AdAuctionData::request() const {
    return emlite::Val::get("request").as<jsbind::Uint8Array>();
}

void AdAuctionData::request(const jsbind::Uint8Array& value) {
    emlite::Val::set("request", value);
}

jsbind::Sequence<jsbind::Any> AdAuctionData::requests() const {
    return emlite::Val::get("requests").as<jsbind::Sequence<jsbind::Any>>();
}

void AdAuctionData::requests(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("requests", value);
}

AdAuctionDataConfig::AdAuctionDataConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionDataConfig AdAuctionDataConfig::take_ownership(Handle h) noexcept {
        return AdAuctionDataConfig(h);
    }
AdAuctionDataConfig::AdAuctionDataConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdAuctionDataConfig::AdAuctionDataConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AdAuctionDataConfig AdAuctionDataConfig::clone() const noexcept { return *this; }

jsbind::USVString AdAuctionDataConfig::seller() const {
    return emlite::Val::get("seller").as<jsbind::USVString>();
}

void AdAuctionDataConfig::seller(const jsbind::USVString& value) {
    emlite::Val::set("seller", value);
}

jsbind::USVString AdAuctionDataConfig::coordinatorOrigin() const {
    return emlite::Val::get("coordinatorOrigin").as<jsbind::USVString>();
}

void AdAuctionDataConfig::coordinatorOrigin(const jsbind::USVString& value) {
    emlite::Val::set("coordinatorOrigin", value);
}

jsbind::Sequence<jsbind::Any> AdAuctionDataConfig::sellers() const {
    return emlite::Val::get("sellers").as<jsbind::Sequence<jsbind::Any>>();
}

void AdAuctionDataConfig::sellers(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("sellers", value);
}

unsigned long AdAuctionDataConfig::requestSize() const {
    return emlite::Val::get("requestSize").as<unsigned long>();
}

void AdAuctionDataConfig::requestSize(unsigned long value) {
    emlite::Val::set("requestSize", value);
}

jsbind::Record<jsbind::USVString, jsbind::Any> AdAuctionDataConfig::perBuyerConfig() const {
    return emlite::Val::get("perBuyerConfig").as<jsbind::Record<jsbind::USVString, jsbind::Any>>();
}

void AdAuctionDataConfig::perBuyerConfig(const jsbind::Record<jsbind::USVString, jsbind::Any>& value) {
    emlite::Val::set("perBuyerConfig", value);
}

ShareData::ShareData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ShareData ShareData::take_ownership(Handle h) noexcept {
        return ShareData(h);
    }
ShareData::ShareData(const emlite::Val &val) noexcept: emlite::Val(val) {}
ShareData::ShareData() noexcept: emlite::Val(emlite::Val::object()) {}
ShareData ShareData::clone() const noexcept { return *this; }

jsbind::Sequence<File> ShareData::files() const {
    return emlite::Val::get("files").as<jsbind::Sequence<File>>();
}

void ShareData::files(const jsbind::Sequence<File>& value) {
    emlite::Val::set("files", value);
}

jsbind::USVString ShareData::title() const {
    return emlite::Val::get("title").as<jsbind::USVString>();
}

void ShareData::title(const jsbind::USVString& value) {
    emlite::Val::set("title", value);
}

jsbind::USVString ShareData::text() const {
    return emlite::Val::get("text").as<jsbind::USVString>();
}

void ShareData::text(const jsbind::USVString& value) {
    emlite::Val::set("text", value);
}

jsbind::USVString ShareData::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

void ShareData::url(const jsbind::USVString& value) {
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

jsbind::Promise Navigator::getBattery() {
    return emlite::Val::call("getBattery").as<jsbind::Promise>();
}

bool Navigator::sendBeacon(const jsbind::USVString& url, const jsbind::Any& data) {
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

jsbind::Promise Navigator::requestMediaKeySystemAccess(const jsbind::DOMString& keySystem, const jsbind::Sequence<MediaKeySystemConfiguration>& supportedConfigurations) {
    return emlite::Val::call("requestMediaKeySystemAccess", keySystem, supportedConfigurations).as<jsbind::Promise>();
}

jsbind::Promise Navigator::deprecatedReplaceInURN(const jsbind::Any& urnOrConfig, const jsbind::Record<jsbind::USVString, jsbind::USVString>& replacements) {
    return emlite::Val::call("deprecatedReplaceInURN", urnOrConfig, replacements).as<jsbind::Promise>();
}

jsbind::Promise Navigator::deprecatedURNtoURL(const jsbind::Any& urnOrConfig, bool send_reports) {
    return emlite::Val::call("deprecatedURNtoURL", urnOrConfig, send_reports).as<jsbind::Promise>();
}

jsbind::Sequence<jsbind::USVString> Navigator::adAuctionComponents(unsigned short numAdComponents) {
    return emlite::Val::call("adAuctionComponents", numAdComponents).as<jsbind::Sequence<jsbind::USVString>>();
}

jsbind::Sequence<Gamepad> Navigator::getGamepads() {
    return emlite::Val::call("getGamepads").as<jsbind::Sequence<Gamepad>>();
}

Geolocation Navigator::geolocation() const {
    return emlite::Val::get("geolocation").as<Geolocation>();
}

jsbind::Promise Navigator::getInstalledRelatedApps() {
    return emlite::Val::call("getInstalledRelatedApps").as<jsbind::Promise>();
}

jsbind::Promise Navigator::queryHandwritingRecognizer(const HandwritingModelConstraint& constraint) {
    return emlite::Val::call("queryHandwritingRecognizer", constraint).as<jsbind::Promise>();
}

jsbind::Promise Navigator::createHandwritingRecognizer(const HandwritingModelConstraint& constraint) {
    return emlite::Val::call("createHandwritingRecognizer", constraint).as<jsbind::Promise>();
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

jsbind::Promise Navigator::joinAdInterestGroup(const AuctionAdInterestGroup& group) {
    return emlite::Val::call("joinAdInterestGroup", group).as<jsbind::Promise>();
}

jsbind::Promise Navigator::leaveAdInterestGroup(const AuctionAdInterestGroupKey& group) {
    return emlite::Val::call("leaveAdInterestGroup", group).as<jsbind::Promise>();
}

jsbind::Promise Navigator::clearOriginJoinedAdInterestGroups(const jsbind::USVString& owner, const jsbind::Sequence<jsbind::USVString>& interestGroupsToKeep) {
    return emlite::Val::call("clearOriginJoinedAdInterestGroups", owner, interestGroupsToKeep).as<jsbind::Promise>();
}

jsbind::Promise Navigator::runAdAuction(const AuctionAdConfig& config) {
    return emlite::Val::call("runAdAuction", config).as<jsbind::Promise>();
}

bool Navigator::deprecatedRunAdAuctionEnforcesKAnonymity() const {
    return emlite::Val::get("deprecatedRunAdAuctionEnforcesKAnonymity").as<bool>();
}

bool Navigator::canLoadAdAuctionFencedFrame() {
    return emlite::Val::call("canLoadAdAuctionFencedFrame").as<bool>();
}

jsbind::Promise Navigator::getInterestGroupAdAuctionData(const AdAuctionDataConfig& config) {
    return emlite::Val::call("getInterestGroupAdAuctionData", config).as<jsbind::Promise>();
}

jsbind::Promise Navigator::createAuctionNonce() {
    return emlite::Val::call("createAuctionNonce").as<jsbind::Promise>();
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

jsbind::Promise Navigator::share(const ShareData& data) {
    return emlite::Val::call("share", data).as<jsbind::Promise>();
}

bool Navigator::canShare(const ShareData& data) {
    return emlite::Val::call("canShare", data).as<bool>();
}

HID Navigator::hid() const {
    return emlite::Val::get("hid").as<HID>();
}

jsbind::Promise Navigator::requestMIDIAccess(const MIDIOptions& options) {
    return emlite::Val::call("requestMIDIAccess", options).as<jsbind::Promise>();
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

jsbind::Promise Navigator::setAppBadge(long long contents) {
    return emlite::Val::call("setAppBadge", contents).as<jsbind::Promise>();
}

jsbind::Promise Navigator::clearAppBadge() {
    return emlite::Val::call("clearAppBadge").as<jsbind::Promise>();
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

jsbind::DOMString Navigator::oscpu() const {
    return emlite::Val::get("oscpu").as<jsbind::DOMString>();
}

jsbind::DOMString Navigator::language() const {
    return emlite::Val::get("language").as<jsbind::DOMString>();
}

jsbind::FrozenArray<jsbind::DOMString> Navigator::languages() const {
    return emlite::Val::get("languages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

bool Navigator::onLine() const {
    return emlite::Val::get("onLine").as<bool>();
}

jsbind::Undefined Navigator::registerProtocolHandler(const jsbind::DOMString& scheme, const jsbind::USVString& url) {
    return emlite::Val::call("registerProtocolHandler", scheme, url).as<jsbind::Undefined>();
}

jsbind::Undefined Navigator::unregisterProtocolHandler(const jsbind::DOMString& scheme, const jsbind::USVString& url) {
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

