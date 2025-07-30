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
    MediaKeySystemConfiguration clone() const noexcept;
    jsbind::String label() const;
    void label(const jsbind::String& value);
    jsbind::TypedArray<jsbind::String> initDataTypes() const;
    void initDataTypes(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<jsbind::Any> audioCapabilities() const;
    void audioCapabilities(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> videoCapabilities() const;
    void videoCapabilities(const jsbind::TypedArray<jsbind::Any>& value);
    MediaKeysRequirement distinctiveIdentifier() const;
    void distinctiveIdentifier(const MediaKeysRequirement& value);
    MediaKeysRequirement persistentState() const;
    void persistentState(const MediaKeysRequirement& value);
    jsbind::TypedArray<jsbind::String> sessionTypes() const;
    void sessionTypes(const jsbind::TypedArray<jsbind::String>& value);
};

class RelatedApplication : public emlite::Val {
  explicit RelatedApplication(Handle h) noexcept;
public:
    static RelatedApplication take_ownership(Handle h) noexcept;
    explicit RelatedApplication(const emlite::Val &val) noexcept;
    RelatedApplication() noexcept;
    RelatedApplication clone() const noexcept;
    jsbind::String platform() const;
    void platform(const jsbind::String& value);
    jsbind::String url() const;
    void url(const jsbind::String& value);
    jsbind::String id() const;
    void id(const jsbind::String& value);
    jsbind::String version() const;
    void version(const jsbind::String& value);
};

class HandwritingRecognizerQueryResult : public emlite::Val {
  explicit HandwritingRecognizerQueryResult(Handle h) noexcept;
public:
    static HandwritingRecognizerQueryResult take_ownership(Handle h) noexcept;
    explicit HandwritingRecognizerQueryResult(const emlite::Val &val) noexcept;
    HandwritingRecognizerQueryResult() noexcept;
    HandwritingRecognizerQueryResult clone() const noexcept;
    bool textAlternatives() const;
    void textAlternatives(bool value);
    bool textSegmentation() const;
    void textSegmentation(bool value);
    jsbind::Any hints() const;
    void hints(const jsbind::Any& value);
};

class HandwritingModelConstraint : public emlite::Val {
  explicit HandwritingModelConstraint(Handle h) noexcept;
public:
    static HandwritingModelConstraint take_ownership(Handle h) noexcept;
    explicit HandwritingModelConstraint(const emlite::Val &val) noexcept;
    HandwritingModelConstraint() noexcept;
    HandwritingModelConstraint clone() const noexcept;
    jsbind::TypedArray<jsbind::String> languages() const;
    void languages(const jsbind::TypedArray<jsbind::String>& value);
};

class AuctionAdInterestGroup : public emlite::Val {
  explicit AuctionAdInterestGroup(Handle h) noexcept;
public:
    static AuctionAdInterestGroup take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroup(const emlite::Val &val) noexcept;
    AuctionAdInterestGroup() noexcept;
    AuctionAdInterestGroup clone() const noexcept;
    double priority() const;
    void priority(double value);
    jsbind::Record<jsbind::String, double> prioritySignalsOverrides() const;
    void prioritySignalsOverrides(jsbind::Record<jsbind::String, double> value);
    double lifetimeMs() const;
    void lifetimeMs(double value);
    jsbind::String additionalBidKey() const;
    void additionalBidKey(const jsbind::String& value);
    jsbind::Any privateAggregationConfig() const;
    void privateAggregationConfig(const jsbind::Any& value);
};

class AuctionAdInterestGroupKey : public emlite::Val {
  explicit AuctionAdInterestGroupKey(Handle h) noexcept;
public:
    static AuctionAdInterestGroupKey take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroupKey(const emlite::Val &val) noexcept;
    AuctionAdInterestGroupKey() noexcept;
    AuctionAdInterestGroupKey clone() const noexcept;
    jsbind::String owner() const;
    void owner(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
};

class AuctionAdConfig : public emlite::Val {
  explicit AuctionAdConfig(Handle h) noexcept;
public:
    static AuctionAdConfig take_ownership(Handle h) noexcept;
    explicit AuctionAdConfig(const emlite::Val &val) noexcept;
    AuctionAdConfig() noexcept;
    AuctionAdConfig clone() const noexcept;
    jsbind::String seller() const;
    void seller(const jsbind::String& value);
    jsbind::String decisionLogicURL() const;
    void decisionLogicURL(const jsbind::String& value);
    jsbind::String trustedScoringSignalsURL() const;
    void trustedScoringSignalsURL(const jsbind::String& value);
    long maxTrustedScoringSignalsURLLength() const;
    void maxTrustedScoringSignalsURLLength(long value);
    jsbind::String trustedScoringSignalsCoordinator() const;
    void trustedScoringSignalsCoordinator(const jsbind::String& value);
    bool sendCreativeScanningMetadata() const;
    void sendCreativeScanningMetadata(bool value);
    jsbind::TypedArray<jsbind::String> interestGroupBuyers() const;
    void interestGroupBuyers(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::Promise<jsbind::Any> auctionSignals() const;
    void auctionSignals(const jsbind::Promise<jsbind::Any>& value);
    jsbind::Promise<jsbind::Any> sellerSignals() const;
    void sellerSignals(const jsbind::Promise<jsbind::Any>& value);
    jsbind::Promise<jsbind::String> directFromSellerSignalsHeaderAdSlot() const;
    void directFromSellerSignalsHeaderAdSlot(const jsbind::Promise<jsbind::String>& value);
    jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> deprecatedRenderURLReplacements() const;
    void deprecatedRenderURLReplacements(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    long long sellerTimeout() const;
    void sellerTimeout(long long value);
    unsigned short sellerExperimentGroupId() const;
    void sellerExperimentGroupId(unsigned short value);
    jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>> perBuyerSignals() const;
    void perBuyerSignals(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>& value);
    jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerTimeouts() const;
    void perBuyerTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerCumulativeTimeouts() const;
    void perBuyerCumulativeTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    long long reportingTimeout() const;
    void reportingTimeout(long long value);
    jsbind::String sellerCurrency() const;
    void sellerCurrency(const jsbind::String& value);
    jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> perBuyerCurrencies() const;
    void perBuyerCurrencies(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    jsbind::Record<jsbind::String, unsigned short> perBuyerMultiBidLimits() const;
    void perBuyerMultiBidLimits(jsbind::Record<jsbind::String, unsigned short> value);
    jsbind::Record<jsbind::String, unsigned short> perBuyerGroupLimits() const;
    void perBuyerGroupLimits(jsbind::Record<jsbind::String, unsigned short> value);
    jsbind::Record<jsbind::String, unsigned short> perBuyerExperimentGroupIds() const;
    void perBuyerExperimentGroupIds(jsbind::Record<jsbind::String, unsigned short> value);
    jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> perBuyerPrioritySignals() const;
    void perBuyerPrioritySignals(jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> value);
    jsbind::TypedArray<long long> auctionReportBuyerKeys() const;
    void auctionReportBuyerKeys(jsbind::TypedArray<long long> value);
    jsbind::Record<jsbind::String, jsbind::Any> auctionReportBuyers() const;
    void auctionReportBuyers(const jsbind::Record<jsbind::String, jsbind::Any>& value);
    jsbind::Any auctionReportBuyerDebugModeConfig() const;
    void auctionReportBuyerDebugModeConfig(const jsbind::Any& value);
    jsbind::TypedArray<jsbind::String> requiredSellerCapabilities() const;
    void requiredSellerCapabilities(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::Any privateAggregationConfig() const;
    void privateAggregationConfig(const jsbind::Any& value);
    jsbind::Record<jsbind::String, jsbind::String> requestedSize() const;
    void requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>> allSlotsRequestedSizes() const;
    void allSlotsRequestedSizes(const jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>& value);
    jsbind::Promise<jsbind::Undefined> additionalBids() const;
    void additionalBids(const jsbind::Promise<jsbind::Undefined>& value);
    jsbind::String auctionNonce() const;
    void auctionNonce(const jsbind::String& value);
    jsbind::Any sellerRealTimeReportingConfig() const;
    void sellerRealTimeReportingConfig(const jsbind::Any& value);
    jsbind::Record<jsbind::String, jsbind::Any> perBuyerRealTimeReportingConfig() const;
    void perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::String, jsbind::Any>& value);
    jsbind::TypedArray<AuctionAdConfig> componentAuctions() const;
    void componentAuctions(const jsbind::TypedArray<AuctionAdConfig>& value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::Promise<bool> resolveToConfig() const;
    void resolveToConfig(jsbind::Promise<bool> value);
    jsbind::Promise<jsbind::Uint8Array> serverResponse() const;
    void serverResponse(const jsbind::Promise<jsbind::Uint8Array>& value);
    jsbind::String requestId() const;
    void requestId(const jsbind::String& value);
};

class AdAuctionData : public emlite::Val {
  explicit AdAuctionData(Handle h) noexcept;
public:
    static AdAuctionData take_ownership(Handle h) noexcept;
    explicit AdAuctionData(const emlite::Val &val) noexcept;
    AdAuctionData() noexcept;
    AdAuctionData clone() const noexcept;
    jsbind::String requestId() const;
    void requestId(const jsbind::String& value);
    jsbind::Uint8Array request() const;
    void request(const jsbind::Uint8Array& value);
    jsbind::TypedArray<jsbind::Any> requests() const;
    void requests(const jsbind::TypedArray<jsbind::Any>& value);
};

class AdAuctionDataConfig : public emlite::Val {
  explicit AdAuctionDataConfig(Handle h) noexcept;
public:
    static AdAuctionDataConfig take_ownership(Handle h) noexcept;
    explicit AdAuctionDataConfig(const emlite::Val &val) noexcept;
    AdAuctionDataConfig() noexcept;
    AdAuctionDataConfig clone() const noexcept;
    jsbind::String seller() const;
    void seller(const jsbind::String& value);
    jsbind::String coordinatorOrigin() const;
    void coordinatorOrigin(const jsbind::String& value);
    jsbind::TypedArray<jsbind::Any> sellers() const;
    void sellers(const jsbind::TypedArray<jsbind::Any>& value);
    unsigned long requestSize() const;
    void requestSize(unsigned long value);
    jsbind::Record<jsbind::String, jsbind::Any> perBuyerConfig() const;
    void perBuyerConfig(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

class ShareData : public emlite::Val {
  explicit ShareData(Handle h) noexcept;
public:
    static ShareData take_ownership(Handle h) noexcept;
    explicit ShareData(const emlite::Val &val) noexcept;
    ShareData() noexcept;
    ShareData clone() const noexcept;
    jsbind::TypedArray<File> files() const;
    void files(const jsbind::TypedArray<File>& value);
    jsbind::String title() const;
    void title(const jsbind::String& value);
    jsbind::String text() const;
    void text(const jsbind::String& value);
    jsbind::String url() const;
    void url(const jsbind::String& value);
};

class MIDIOptions : public emlite::Val {
  explicit MIDIOptions(Handle h) noexcept;
public:
    static MIDIOptions take_ownership(Handle h) noexcept;
    explicit MIDIOptions(const emlite::Val &val) noexcept;
    MIDIOptions() noexcept;
    MIDIOptions clone() const noexcept;
    bool sysex() const;
    void sysex(bool value);
    bool software() const;
    void software(bool value);
};

class Navigator : public emlite::Val {
    explicit Navigator(Handle h) noexcept;

public:
    explicit Navigator(const emlite::Val &val) noexcept;
    static Navigator take_ownership(Handle h) noexcept;

    Navigator clone() const noexcept;
    AudioSession audioSession() const;
    AutoplayPolicy getAutoplayPolicy(const AudioContext& context);
    jsbind::Promise<BatteryManager> getBattery();
    bool sendBeacon(const jsbind::String& url);
    bool sendBeacon(const jsbind::String& url, const jsbind::Any& data);
    Clipboard clipboard() const;
    ContactsManager contacts() const;
    CredentialsContainer credentials() const;
    DevicePosture devicePosture() const;
    jsbind::Promise<MediaKeySystemAccess> requestMediaKeySystemAccess(const jsbind::String& keySystem, const jsbind::TypedArray<MediaKeySystemConfiguration>& supportedConfigurations);
    jsbind::Promise<jsbind::Undefined> deprecatedReplaceInURN(const jsbind::Any& urnOrConfig, const jsbind::Record<jsbind::String, jsbind::String>& replacements);
    jsbind::Promise<jsbind::String> deprecatedURNtoURL(const jsbind::Any& urnOrConfig);
    jsbind::Promise<jsbind::String> deprecatedURNtoURL(const jsbind::Any& urnOrConfig, bool send_reports);
    jsbind::TypedArray<jsbind::String> adAuctionComponents(unsigned short numAdComponents);
    jsbind::TypedArray<Gamepad> getGamepads();
    Geolocation geolocation() const;
    jsbind::Promise<jsbind::TypedArray<RelatedApplication>> getInstalledRelatedApps();
    jsbind::Promise<HandwritingRecognizerQueryResult> queryHandwritingRecognizer(const HandwritingModelConstraint& constraint);
    jsbind::Promise<HandwritingRecognizer> createHandwritingRecognizer(const HandwritingModelConstraint& constraint);
    UserActivation userActivation() const;
    Ink ink() const;
    Scheduling scheduling() const;
    Keyboard keyboard() const;
    NavigatorLogin login() const;
    NavigatorManagedData managed() const;
    MediaCapabilities mediaCapabilities() const;
    MediaDevices mediaDevices() const;
    PreferenceManager preferences() const;
    MediaSession mediaSession() const;
    Permissions permissions() const;
    long maxTouchPoints() const;
    Presentation presentation() const;
    Attribution attribution() const;
    WakeLock wakeLock() const;
    Serial serial() const;
    ServiceWorkerContainer serviceWorker() const;
    jsbind::Promise<jsbind::Undefined> joinAdInterestGroup(const AuctionAdInterestGroup& group);
    jsbind::Promise<jsbind::Undefined> leaveAdInterestGroup();
    jsbind::Promise<jsbind::Undefined> leaveAdInterestGroup(const AuctionAdInterestGroupKey& group);
    jsbind::Promise<jsbind::Undefined> clearOriginJoinedAdInterestGroups(const jsbind::String& owner);
    jsbind::Promise<jsbind::Undefined> clearOriginJoinedAdInterestGroups(const jsbind::String& owner, const jsbind::TypedArray<jsbind::String>& interestGroupsToKeep);
    jsbind::Promise<jsbind::Any> runAdAuction(const AuctionAdConfig& config);
    bool deprecatedRunAdAuctionEnforcesKAnonymity() const;
    bool canLoadAdAuctionFencedFrame();
    jsbind::Promise<AdAuctionData> getInterestGroupAdAuctionData();
    jsbind::Promise<AdAuctionData> getInterestGroupAdAuctionData(const AdAuctionDataConfig& config);
    jsbind::Promise<jsbind::String> createAuctionNonce();
    jsbind::Undefined updateAdInterestGroups();
    ProtectedAudience protectedAudience() const;
    bool vibrate(const jsbind::Any& pattern);
    VirtualKeyboard virtualKeyboard() const;
    Bluetooth bluetooth() const;
    jsbind::Promise<jsbind::Undefined> share();
    jsbind::Promise<jsbind::Undefined> share(const ShareData& data);
    bool canShare();
    bool canShare(const ShareData& data);
    HID hid() const;
    jsbind::Promise<MIDIAccess> requestMIDIAccess();
    jsbind::Promise<MIDIAccess> requestMIDIAccess(const MIDIOptions& options);
    USB usb() const;
    XRSystem xr() const;
    WindowControlsOverlay windowControlsOverlay() const;
    jsbind::Promise<jsbind::Undefined> setAppBadge();
    jsbind::Promise<jsbind::Undefined> setAppBadge(long long contents);
    jsbind::Promise<jsbind::Undefined> clearAppBadge();
    double deviceMemory() const;
    bool globalPrivacyControl() const;
    bool taintEnabled();
    jsbind::String oscpu() const;
    jsbind::String language() const;
    jsbind::TypedArray<jsbind::String> languages() const;
    bool onLine() const;
    jsbind::Undefined registerProtocolHandler(const jsbind::String& scheme, const jsbind::String& url);
    jsbind::Undefined unregisterProtocolHandler(const jsbind::String& scheme, const jsbind::String& url);
    bool cookieEnabled() const;
    PluginArray plugins() const;
    MimeTypeArray mimeTypes() const;
    bool javaEnabled();
    bool pdfViewerEnabled() const;
    long long hardwareConcurrency() const;
    NetworkInformation connection() const;
    StorageBucketManager storageBuckets() const;
    StorageManager storage() const;
    NavigatorUAData userAgentData() const;
    LockManager locks() const;
    bool webdriver() const;
    GPU gpu() const;
    ML ml() const;
};

