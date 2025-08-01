#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AudioSession;
class AudioContext;
class BatteryManager;
class Clipboard;
class ContactsManager;
class CredentialsContainer;
class DevicePosture;
class MediaKeySystemAccess;
class MediaKeySystemConfiguration;
class Gamepad;
class Geolocation;
class RelatedApplication;
class HandwritingRecognizerQueryResult;
class HandwritingModelConstraint;
class HandwritingRecognizer;
class UserActivation;
class Ink;
class Scheduling;
class Keyboard;
class NavigatorLogin;
class NavigatorManagedData;
class MediaCapabilities;
class MediaDevices;
class PreferenceManager;
class MediaSession;
class Permissions;
class Presentation;
class Attribution;
class WakeLock;
class Serial;
class ServiceWorkerContainer;
class AuctionAdInterestGroup;
class AuctionAdInterestGroupKey;
class AuctionAdConfig;
class AdAuctionData;
class AdAuctionDataConfig;
class ProtectedAudience;
class VirtualKeyboard;
class Bluetooth;
class ShareData;
class HID;
class MIDIAccess;
class MIDIOptions;
class USB;
class XRSystem;
class WindowControlsOverlay;
class PluginArray;
class MimeTypeArray;
class NetworkInformation;
class StorageBucketManager;
class StorageManager;
class NavigatorUAData;
class LockManager;
class GPU;
class ML;
class File;
class AbortSignal;


class MediaKeySystemConfiguration : public emlite::Val {
  explicit MediaKeySystemConfiguration(Handle h) noexcept;
public:
    static MediaKeySystemConfiguration take_ownership(Handle h) noexcept;
    explicit MediaKeySystemConfiguration(const emlite::Val &val) noexcept;
    MediaKeySystemConfiguration() noexcept;
    [[nodiscard]] MediaKeySystemConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> initDataTypes() const;
    void initDataTypes(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> audioCapabilities() const;
    void audioCapabilities(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> videoCapabilities() const;
    void videoCapabilities(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] MediaKeysRequirement distinctiveIdentifier() const;
    void distinctiveIdentifier(const MediaKeysRequirement& value);
    [[nodiscard]] MediaKeysRequirement persistentState() const;
    void persistentState(const MediaKeysRequirement& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> sessionTypes() const;
    void sessionTypes(const jsbind::TypedArray<jsbind::String>& value);
};

class RelatedApplication : public emlite::Val {
  explicit RelatedApplication(Handle h) noexcept;
public:
    static RelatedApplication take_ownership(Handle h) noexcept;
    explicit RelatedApplication(const emlite::Val &val) noexcept;
    RelatedApplication() noexcept;
    [[nodiscard]] RelatedApplication clone() const noexcept;
    [[nodiscard]] jsbind::String platform() const;
    void platform(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String version() const;
    void version(const jsbind::String& value);
};

class HandwritingRecognizerQueryResult : public emlite::Val {
  explicit HandwritingRecognizerQueryResult(Handle h) noexcept;
public:
    static HandwritingRecognizerQueryResult take_ownership(Handle h) noexcept;
    explicit HandwritingRecognizerQueryResult(const emlite::Val &val) noexcept;
    HandwritingRecognizerQueryResult() noexcept;
    [[nodiscard]] HandwritingRecognizerQueryResult clone() const noexcept;
    [[nodiscard]] bool textAlternatives() const;
    void textAlternatives(bool value);
    [[nodiscard]] bool textSegmentation() const;
    void textSegmentation(bool value);
    [[nodiscard]] jsbind::Any hints() const;
    void hints(const jsbind::Any& value);
};

class HandwritingModelConstraint : public emlite::Val {
  explicit HandwritingModelConstraint(Handle h) noexcept;
public:
    static HandwritingModelConstraint take_ownership(Handle h) noexcept;
    explicit HandwritingModelConstraint(const emlite::Val &val) noexcept;
    HandwritingModelConstraint() noexcept;
    [[nodiscard]] HandwritingModelConstraint clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> languages() const;
    void languages(const jsbind::TypedArray<jsbind::String>& value);
};

class AuctionAdInterestGroup : public emlite::Val {
  explicit AuctionAdInterestGroup(Handle h) noexcept;
public:
    static AuctionAdInterestGroup take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroup(const emlite::Val &val) noexcept;
    AuctionAdInterestGroup() noexcept;
    [[nodiscard]] AuctionAdInterestGroup clone() const noexcept;
    [[nodiscard]] double priority() const;
    void priority(double value);
    [[nodiscard]] jsbind::Record<jsbind::String, double> prioritySignalsOverrides() const;
    void prioritySignalsOverrides(jsbind::Record<jsbind::String, double> value);
    [[nodiscard]] double lifetimeMs() const;
    void lifetimeMs(double value);
    [[nodiscard]] jsbind::String additionalBidKey() const;
    void additionalBidKey(const jsbind::String& value);
    [[nodiscard]] jsbind::Any privateAggregationConfig() const;
    void privateAggregationConfig(const jsbind::Any& value);
};

class AuctionAdInterestGroupKey : public emlite::Val {
  explicit AuctionAdInterestGroupKey(Handle h) noexcept;
public:
    static AuctionAdInterestGroupKey take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroupKey(const emlite::Val &val) noexcept;
    AuctionAdInterestGroupKey() noexcept;
    [[nodiscard]] AuctionAdInterestGroupKey clone() const noexcept;
    [[nodiscard]] jsbind::String owner() const;
    void owner(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

class AuctionAdConfig : public emlite::Val {
  explicit AuctionAdConfig(Handle h) noexcept;
public:
    static AuctionAdConfig take_ownership(Handle h) noexcept;
    explicit AuctionAdConfig(const emlite::Val &val) noexcept;
    AuctionAdConfig() noexcept;
    [[nodiscard]] AuctionAdConfig clone() const noexcept;
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] jsbind::String decisionLogicURL() const;
    void decisionLogicURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String trustedScoringSignalsURL() const;
    void trustedScoringSignalsURL(const jsbind::String& value);
    [[nodiscard]] long maxTrustedScoringSignalsURLLength() const;
    void maxTrustedScoringSignalsURLLength(long value);
    [[nodiscard]] jsbind::String trustedScoringSignalsCoordinator() const;
    void trustedScoringSignalsCoordinator(const jsbind::String& value);
    [[nodiscard]] bool sendCreativeScanningMetadata() const;
    void sendCreativeScanningMetadata(bool value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> interestGroupBuyers() const;
    void interestGroupBuyers(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Any> auctionSignals() const;
    void auctionSignals(const jsbind::Promise<jsbind::Any>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Any> sellerSignals() const;
    void sellerSignals(const jsbind::Promise<jsbind::Any>& value);
    [[nodiscard]] jsbind::Promise<jsbind::String> directFromSellerSignalsHeaderAdSlot() const;
    void directFromSellerSignalsHeaderAdSlot(const jsbind::Promise<jsbind::String>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> deprecatedRenderURLReplacements() const;
    void deprecatedRenderURLReplacements(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    [[nodiscard]] long long sellerTimeout() const;
    void sellerTimeout(long long value);
    [[nodiscard]] unsigned short sellerExperimentGroupId() const;
    void sellerExperimentGroupId(unsigned short value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>> perBuyerSignals() const;
    void perBuyerSignals(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerTimeouts() const;
    void perBuyerTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerCumulativeTimeouts() const;
    void perBuyerCumulativeTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    [[nodiscard]] long long reportingTimeout() const;
    void reportingTimeout(long long value);
    [[nodiscard]] jsbind::String sellerCurrency() const;
    void sellerCurrency(const jsbind::String& value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> perBuyerCurrencies() const;
    void perBuyerCurrencies(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerMultiBidLimits() const;
    void perBuyerMultiBidLimits(jsbind::Record<jsbind::String, unsigned short> value);
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerGroupLimits() const;
    void perBuyerGroupLimits(jsbind::Record<jsbind::String, unsigned short> value);
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerExperimentGroupIds() const;
    void perBuyerExperimentGroupIds(jsbind::Record<jsbind::String, unsigned short> value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> perBuyerPrioritySignals() const;
    void perBuyerPrioritySignals(jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> value);
    [[nodiscard]] jsbind::TypedArray<long long> auctionReportBuyerKeys() const;
    void auctionReportBuyerKeys(jsbind::TypedArray<long long> value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> auctionReportBuyers() const;
    void auctionReportBuyers(const jsbind::Record<jsbind::String, jsbind::Any>& value);
    [[nodiscard]] jsbind::Any auctionReportBuyerDebugModeConfig() const;
    void auctionReportBuyerDebugModeConfig(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredSellerCapabilities() const;
    void requiredSellerCapabilities(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Any privateAggregationConfig() const;
    void privateAggregationConfig(const jsbind::Any& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> requestedSize() const;
    void requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>> allSlotsRequestedSizes() const;
    void allSlotsRequestedSizes(const jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> additionalBids() const;
    void additionalBids(const jsbind::Promise<jsbind::Undefined>& value);
    [[nodiscard]] jsbind::String auctionNonce() const;
    void auctionNonce(const jsbind::String& value);
    [[nodiscard]] jsbind::Any sellerRealTimeReportingConfig() const;
    void sellerRealTimeReportingConfig(const jsbind::Any& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> perBuyerRealTimeReportingConfig() const;
    void perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::String, jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<AuctionAdConfig> componentAuctions() const;
    void componentAuctions(const jsbind::TypedArray<AuctionAdConfig>& value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Promise<bool> resolveToConfig() const;
    void resolveToConfig(jsbind::Promise<bool> value);
    [[nodiscard]] jsbind::Promise<jsbind::Uint8Array> serverResponse() const;
    void serverResponse(const jsbind::Promise<jsbind::Uint8Array>& value);
    [[nodiscard]] jsbind::String requestId() const;
    void requestId(const jsbind::String& value);
};

class AdAuctionData : public emlite::Val {
  explicit AdAuctionData(Handle h) noexcept;
public:
    static AdAuctionData take_ownership(Handle h) noexcept;
    explicit AdAuctionData(const emlite::Val &val) noexcept;
    AdAuctionData() noexcept;
    [[nodiscard]] AdAuctionData clone() const noexcept;
    [[nodiscard]] jsbind::String requestId() const;
    void requestId(const jsbind::String& value);
    [[nodiscard]] jsbind::Uint8Array request() const;
    void request(const jsbind::Uint8Array& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> requests() const;
    void requests(const jsbind::TypedArray<jsbind::Any>& value);
};

class AdAuctionDataConfig : public emlite::Val {
  explicit AdAuctionDataConfig(Handle h) noexcept;
public:
    static AdAuctionDataConfig take_ownership(Handle h) noexcept;
    explicit AdAuctionDataConfig(const emlite::Val &val) noexcept;
    AdAuctionDataConfig() noexcept;
    [[nodiscard]] AdAuctionDataConfig clone() const noexcept;
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] jsbind::String coordinatorOrigin() const;
    void coordinatorOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> sellers() const;
    void sellers(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] unsigned long requestSize() const;
    void requestSize(unsigned long value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> perBuyerConfig() const;
    void perBuyerConfig(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

class ShareData : public emlite::Val {
  explicit ShareData(Handle h) noexcept;
public:
    static ShareData take_ownership(Handle h) noexcept;
    explicit ShareData(const emlite::Val &val) noexcept;
    ShareData() noexcept;
    [[nodiscard]] ShareData clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<File> files() const;
    void files(const jsbind::TypedArray<File>& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] jsbind::String text() const;
    void text(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

class MIDIOptions : public emlite::Val {
  explicit MIDIOptions(Handle h) noexcept;
public:
    static MIDIOptions take_ownership(Handle h) noexcept;
    explicit MIDIOptions(const emlite::Val &val) noexcept;
    MIDIOptions() noexcept;
    [[nodiscard]] MIDIOptions clone() const noexcept;
    [[nodiscard]] bool sysex() const;
    void sysex(bool value);
    [[nodiscard]] bool software() const;
    void software(bool value);
};

/// The Navigator class.
/// [`Navigator`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator)
class Navigator : public emlite::Val {
    explicit Navigator(Handle h) noexcept;

public:
    explicit Navigator(const emlite::Val &val) noexcept;
    static Navigator take_ownership(Handle h) noexcept;

    [[nodiscard]] Navigator clone() const noexcept;
    /// Getter of the `audioSession` attribute.
    /// [`Navigator.audioSession`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/audioSession)
    [[nodiscard]] AudioSession audioSession() const;
    /// The getAutoplayPolicy method.
    /// [`Navigator.getAutoplayPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/getAutoplayPolicy)
    AutoplayPolicy getAutoplayPolicy(const AudioContext& context);
    /// The getBattery method.
    /// [`Navigator.getBattery`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/getBattery)
    jsbind::Promise<BatteryManager> getBattery();
    /// The sendBeacon method.
    /// [`Navigator.sendBeacon`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/sendBeacon)
    bool sendBeacon(const jsbind::String& url);
    /// The sendBeacon method.
    /// [`Navigator.sendBeacon`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/sendBeacon)
    bool sendBeacon(const jsbind::String& url, const jsbind::Any& data);
    /// Getter of the `clipboard` attribute.
    /// [`Navigator.clipboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/clipboard)
    [[nodiscard]] Clipboard clipboard() const;
    /// Getter of the `contacts` attribute.
    /// [`Navigator.contacts`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/contacts)
    [[nodiscard]] ContactsManager contacts() const;
    /// Getter of the `credentials` attribute.
    /// [`Navigator.credentials`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/credentials)
    [[nodiscard]] CredentialsContainer credentials() const;
    /// Getter of the `devicePosture` attribute.
    /// [`Navigator.devicePosture`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/devicePosture)
    [[nodiscard]] DevicePosture devicePosture() const;
    /// The requestMediaKeySystemAccess method.
    /// [`Navigator.requestMediaKeySystemAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/requestMediaKeySystemAccess)
    jsbind::Promise<MediaKeySystemAccess> requestMediaKeySystemAccess(const jsbind::String& keySystem, const jsbind::TypedArray<MediaKeySystemConfiguration>& supportedConfigurations);
    /// The deprecatedReplaceInURN method.
    /// [`Navigator.deprecatedReplaceInURN`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deprecatedReplaceInURN)
    jsbind::Promise<jsbind::Undefined> deprecatedReplaceInURN(const jsbind::Any& urnOrConfig, const jsbind::Record<jsbind::String, jsbind::String>& replacements);
    /// The deprecatedURNtoURL method.
    /// [`Navigator.deprecatedURNtoURL`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deprecatedURNtoURL)
    jsbind::Promise<jsbind::String> deprecatedURNtoURL(const jsbind::Any& urnOrConfig);
    /// The deprecatedURNtoURL method.
    /// [`Navigator.deprecatedURNtoURL`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deprecatedURNtoURL)
    jsbind::Promise<jsbind::String> deprecatedURNtoURL(const jsbind::Any& urnOrConfig, bool send_reports);
    /// The adAuctionComponents method.
    /// [`Navigator.adAuctionComponents`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/adAuctionComponents)
    jsbind::TypedArray<jsbind::String> adAuctionComponents(unsigned short numAdComponents);
    /// The getGamepads method.
    /// [`Navigator.getGamepads`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/getGamepads)
    jsbind::TypedArray<Gamepad> getGamepads();
    /// Getter of the `geolocation` attribute.
    /// [`Navigator.geolocation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/geolocation)
    [[nodiscard]] Geolocation geolocation() const;
    /// The getInstalledRelatedApps method.
    /// [`Navigator.getInstalledRelatedApps`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/getInstalledRelatedApps)
    jsbind::Promise<jsbind::TypedArray<RelatedApplication>> getInstalledRelatedApps();
    /// The queryHandwritingRecognizer method.
    /// [`Navigator.queryHandwritingRecognizer`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/queryHandwritingRecognizer)
    jsbind::Promise<HandwritingRecognizerQueryResult> queryHandwritingRecognizer(const HandwritingModelConstraint& constraint);
    /// The createHandwritingRecognizer method.
    /// [`Navigator.createHandwritingRecognizer`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/createHandwritingRecognizer)
    jsbind::Promise<HandwritingRecognizer> createHandwritingRecognizer(const HandwritingModelConstraint& constraint);
    /// Getter of the `userActivation` attribute.
    /// [`Navigator.userActivation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/userActivation)
    [[nodiscard]] UserActivation userActivation() const;
    /// Getter of the `ink` attribute.
    /// [`Navigator.ink`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/ink)
    [[nodiscard]] Ink ink() const;
    /// Getter of the `scheduling` attribute.
    /// [`Navigator.scheduling`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/scheduling)
    [[nodiscard]] Scheduling scheduling() const;
    /// Getter of the `keyboard` attribute.
    /// [`Navigator.keyboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/keyboard)
    [[nodiscard]] Keyboard keyboard() const;
    /// Getter of the `login` attribute.
    /// [`Navigator.login`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/login)
    [[nodiscard]] NavigatorLogin login() const;
    /// Getter of the `managed` attribute.
    /// [`Navigator.managed`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/managed)
    [[nodiscard]] NavigatorManagedData managed() const;
    /// Getter of the `mediaCapabilities` attribute.
    /// [`Navigator.mediaCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaCapabilities)
    [[nodiscard]] MediaCapabilities mediaCapabilities() const;
    /// Getter of the `mediaDevices` attribute.
    /// [`Navigator.mediaDevices`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaDevices)
    [[nodiscard]] MediaDevices mediaDevices() const;
    /// Getter of the `preferences` attribute.
    /// [`Navigator.preferences`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/preferences)
    [[nodiscard]] PreferenceManager preferences() const;
    /// Getter of the `mediaSession` attribute.
    /// [`Navigator.mediaSession`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaSession)
    [[nodiscard]] MediaSession mediaSession() const;
    /// Getter of the `permissions` attribute.
    /// [`Navigator.permissions`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/permissions)
    [[nodiscard]] Permissions permissions() const;
    /// Getter of the `maxTouchPoints` attribute.
    /// [`Navigator.maxTouchPoints`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/maxTouchPoints)
    [[nodiscard]] long maxTouchPoints() const;
    /// Getter of the `presentation` attribute.
    /// [`Navigator.presentation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/presentation)
    [[nodiscard]] Presentation presentation() const;
    /// Getter of the `attribution` attribute.
    /// [`Navigator.attribution`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/attribution)
    [[nodiscard]] Attribution attribution() const;
    /// Getter of the `wakeLock` attribute.
    /// [`Navigator.wakeLock`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/wakeLock)
    [[nodiscard]] WakeLock wakeLock() const;
    /// Getter of the `serial` attribute.
    /// [`Navigator.serial`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/serial)
    [[nodiscard]] Serial serial() const;
    /// Getter of the `serviceWorker` attribute.
    /// [`Navigator.serviceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/serviceWorker)
    [[nodiscard]] ServiceWorkerContainer serviceWorker() const;
    /// The joinAdInterestGroup method.
    /// [`Navigator.joinAdInterestGroup`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/joinAdInterestGroup)
    jsbind::Promise<jsbind::Undefined> joinAdInterestGroup(const AuctionAdInterestGroup& group);
    /// The leaveAdInterestGroup method.
    /// [`Navigator.leaveAdInterestGroup`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/leaveAdInterestGroup)
    jsbind::Promise<jsbind::Undefined> leaveAdInterestGroup();
    /// The leaveAdInterestGroup method.
    /// [`Navigator.leaveAdInterestGroup`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/leaveAdInterestGroup)
    jsbind::Promise<jsbind::Undefined> leaveAdInterestGroup(const AuctionAdInterestGroupKey& group);
    /// The clearOriginJoinedAdInterestGroups method.
    /// [`Navigator.clearOriginJoinedAdInterestGroups`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/clearOriginJoinedAdInterestGroups)
    jsbind::Promise<jsbind::Undefined> clearOriginJoinedAdInterestGroups(const jsbind::String& owner);
    /// The clearOriginJoinedAdInterestGroups method.
    /// [`Navigator.clearOriginJoinedAdInterestGroups`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/clearOriginJoinedAdInterestGroups)
    jsbind::Promise<jsbind::Undefined> clearOriginJoinedAdInterestGroups(const jsbind::String& owner, const jsbind::TypedArray<jsbind::String>& interestGroupsToKeep);
    /// The runAdAuction method.
    /// [`Navigator.runAdAuction`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/runAdAuction)
    jsbind::Promise<jsbind::Any> runAdAuction(const AuctionAdConfig& config);
    /// Getter of the `deprecatedRunAdAuctionEnforcesKAnonymity` attribute.
    /// [`Navigator.deprecatedRunAdAuctionEnforcesKAnonymity`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deprecatedRunAdAuctionEnforcesKAnonymity)
    [[nodiscard]] bool deprecatedRunAdAuctionEnforcesKAnonymity() const;
    /// The canLoadAdAuctionFencedFrame method.
    /// [`Navigator.canLoadAdAuctionFencedFrame`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/canLoadAdAuctionFencedFrame)
    bool canLoadAdAuctionFencedFrame();
    /// The getInterestGroupAdAuctionData method.
    /// [`Navigator.getInterestGroupAdAuctionData`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/getInterestGroupAdAuctionData)
    jsbind::Promise<AdAuctionData> getInterestGroupAdAuctionData();
    /// The getInterestGroupAdAuctionData method.
    /// [`Navigator.getInterestGroupAdAuctionData`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/getInterestGroupAdAuctionData)
    jsbind::Promise<AdAuctionData> getInterestGroupAdAuctionData(const AdAuctionDataConfig& config);
    /// The createAuctionNonce method.
    /// [`Navigator.createAuctionNonce`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/createAuctionNonce)
    jsbind::Promise<jsbind::String> createAuctionNonce();
    /// The updateAdInterestGroups method.
    /// [`Navigator.updateAdInterestGroups`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/updateAdInterestGroups)
    jsbind::Undefined updateAdInterestGroups();
    /// Getter of the `protectedAudience` attribute.
    /// [`Navigator.protectedAudience`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/protectedAudience)
    [[nodiscard]] ProtectedAudience protectedAudience() const;
    /// The vibrate method.
    /// [`Navigator.vibrate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/vibrate)
    bool vibrate(const jsbind::Any& pattern);
    /// Getter of the `virtualKeyboard` attribute.
    /// [`Navigator.virtualKeyboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/virtualKeyboard)
    [[nodiscard]] VirtualKeyboard virtualKeyboard() const;
    /// Getter of the `bluetooth` attribute.
    /// [`Navigator.bluetooth`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/bluetooth)
    [[nodiscard]] Bluetooth bluetooth() const;
    /// The share method.
    /// [`Navigator.share`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/share)
    jsbind::Promise<jsbind::Undefined> share();
    /// The share method.
    /// [`Navigator.share`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/share)
    jsbind::Promise<jsbind::Undefined> share(const ShareData& data);
    /// The canShare method.
    /// [`Navigator.canShare`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/canShare)
    bool canShare();
    /// The canShare method.
    /// [`Navigator.canShare`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/canShare)
    bool canShare(const ShareData& data);
    /// Getter of the `hid` attribute.
    /// [`Navigator.hid`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/hid)
    [[nodiscard]] HID hid() const;
    /// The requestMIDIAccess method.
    /// [`Navigator.requestMIDIAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/requestMIDIAccess)
    jsbind::Promise<MIDIAccess> requestMIDIAccess();
    /// The requestMIDIAccess method.
    /// [`Navigator.requestMIDIAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/requestMIDIAccess)
    jsbind::Promise<MIDIAccess> requestMIDIAccess(const MIDIOptions& options);
    /// Getter of the `usb` attribute.
    /// [`Navigator.usb`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/usb)
    [[nodiscard]] USB usb() const;
    /// Getter of the `xr` attribute.
    /// [`Navigator.xr`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/xr)
    [[nodiscard]] XRSystem xr() const;
    /// Getter of the `windowControlsOverlay` attribute.
    /// [`Navigator.windowControlsOverlay`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/windowControlsOverlay)
    [[nodiscard]] WindowControlsOverlay windowControlsOverlay() const;
    /// The setAppBadge method.
    /// [`Navigator.setAppBadge`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/setAppBadge)
    jsbind::Promise<jsbind::Undefined> setAppBadge();
    /// The setAppBadge method.
    /// [`Navigator.setAppBadge`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/setAppBadge)
    jsbind::Promise<jsbind::Undefined> setAppBadge(long long contents);
    /// The clearAppBadge method.
    /// [`Navigator.clearAppBadge`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/clearAppBadge)
    jsbind::Promise<jsbind::Undefined> clearAppBadge();
    /// Getter of the `deviceMemory` attribute.
    /// [`Navigator.deviceMemory`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deviceMemory)
    [[nodiscard]] double deviceMemory() const;
    /// Getter of the `globalPrivacyControl` attribute.
    /// [`Navigator.globalPrivacyControl`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/globalPrivacyControl)
    [[nodiscard]] bool globalPrivacyControl() const;
    /// The taintEnabled method.
    /// [`Navigator.taintEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/taintEnabled)
    bool taintEnabled();
    /// Getter of the `oscpu` attribute.
    /// [`Navigator.oscpu`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/oscpu)
    [[nodiscard]] jsbind::String oscpu() const;
    /// Getter of the `language` attribute.
    /// [`Navigator.language`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/language)
    [[nodiscard]] jsbind::String language() const;
    /// Getter of the `languages` attribute.
    /// [`Navigator.languages`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/languages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> languages() const;
    /// Getter of the `onLine` attribute.
    /// [`Navigator.onLine`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/onLine)
    [[nodiscard]] bool onLine() const;
    /// The registerProtocolHandler method.
    /// [`Navigator.registerProtocolHandler`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/registerProtocolHandler)
    jsbind::Undefined registerProtocolHandler(const jsbind::String& scheme, const jsbind::String& url);
    /// The unregisterProtocolHandler method.
    /// [`Navigator.unregisterProtocolHandler`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/unregisterProtocolHandler)
    jsbind::Undefined unregisterProtocolHandler(const jsbind::String& scheme, const jsbind::String& url);
    /// Getter of the `cookieEnabled` attribute.
    /// [`Navigator.cookieEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/cookieEnabled)
    [[nodiscard]] bool cookieEnabled() const;
    /// Getter of the `plugins` attribute.
    /// [`Navigator.plugins`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/plugins)
    [[nodiscard]] PluginArray plugins() const;
    /// Getter of the `mimeTypes` attribute.
    /// [`Navigator.mimeTypes`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mimeTypes)
    [[nodiscard]] MimeTypeArray mimeTypes() const;
    /// The javaEnabled method.
    /// [`Navigator.javaEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/javaEnabled)
    bool javaEnabled();
    /// Getter of the `pdfViewerEnabled` attribute.
    /// [`Navigator.pdfViewerEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/pdfViewerEnabled)
    [[nodiscard]] bool pdfViewerEnabled() const;
    /// Getter of the `hardwareConcurrency` attribute.
    /// [`Navigator.hardwareConcurrency`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/hardwareConcurrency)
    [[nodiscard]] long long hardwareConcurrency() const;
    /// Getter of the `connection` attribute.
    /// [`Navigator.connection`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/connection)
    [[nodiscard]] NetworkInformation connection() const;
    /// Getter of the `storageBuckets` attribute.
    /// [`Navigator.storageBuckets`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/storageBuckets)
    [[nodiscard]] StorageBucketManager storageBuckets() const;
    /// Getter of the `storage` attribute.
    /// [`Navigator.storage`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/storage)
    [[nodiscard]] StorageManager storage() const;
    /// Getter of the `userAgentData` attribute.
    /// [`Navigator.userAgentData`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/userAgentData)
    [[nodiscard]] NavigatorUAData userAgentData() const;
    /// Getter of the `locks` attribute.
    /// [`Navigator.locks`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/locks)
    [[nodiscard]] LockManager locks() const;
    /// Getter of the `webdriver` attribute.
    /// [`Navigator.webdriver`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/webdriver)
    [[nodiscard]] bool webdriver() const;
    /// Getter of the `gpu` attribute.
    /// [`Navigator.gpu`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/gpu)
    [[nodiscard]] GPU gpu() const;
    /// Getter of the `ml` attribute.
    /// [`Navigator.ml`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/ml)
    [[nodiscard]] ML ml() const;
};

