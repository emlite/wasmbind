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
    jsbind::DOMString label() const;
    void label(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> initDataTypes() const;
    void initDataTypes(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<jsbind::Any> audioCapabilities() const;
    void audioCapabilities(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> videoCapabilities() const;
    void videoCapabilities(const jsbind::Sequence<jsbind::Any>& value);
    MediaKeysRequirement distinctiveIdentifier() const;
    void distinctiveIdentifier(const MediaKeysRequirement& value);
    MediaKeysRequirement persistentState() const;
    void persistentState(const MediaKeysRequirement& value);
    jsbind::Sequence<jsbind::DOMString> sessionTypes() const;
    void sessionTypes(const jsbind::Sequence<jsbind::DOMString>& value);
};

class RelatedApplication : public emlite::Val {
  explicit RelatedApplication(Handle h) noexcept;
public:
    static RelatedApplication take_ownership(Handle h) noexcept;
    explicit RelatedApplication(const emlite::Val &val) noexcept;
    RelatedApplication() noexcept;
    RelatedApplication clone() const noexcept;
    jsbind::USVString platform() const;
    void platform(const jsbind::USVString& value);
    jsbind::USVString url() const;
    void url(const jsbind::USVString& value);
    jsbind::DOMString id() const;
    void id(const jsbind::DOMString& value);
    jsbind::USVString version() const;
    void version(const jsbind::USVString& value);
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
    jsbind::Sequence<jsbind::DOMString> languages() const;
    void languages(const jsbind::Sequence<jsbind::DOMString>& value);
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
    jsbind::Record<jsbind::DOMString, double> prioritySignalsOverrides() const;
    void prioritySignalsOverrides(jsbind::Record<jsbind::DOMString, double> value);
    double lifetimeMs() const;
    void lifetimeMs(double value);
    jsbind::DOMString additionalBidKey() const;
    void additionalBidKey(const jsbind::DOMString& value);
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
    jsbind::USVString owner() const;
    void owner(const jsbind::USVString& value);
    jsbind::USVString name() const;
    void name(const jsbind::USVString& value);
};

class AuctionAdConfig : public emlite::Val {
  explicit AuctionAdConfig(Handle h) noexcept;
public:
    static AuctionAdConfig take_ownership(Handle h) noexcept;
    explicit AuctionAdConfig(const emlite::Val &val) noexcept;
    AuctionAdConfig() noexcept;
    AuctionAdConfig clone() const noexcept;
    jsbind::USVString seller() const;
    void seller(const jsbind::USVString& value);
    jsbind::USVString decisionLogicURL() const;
    void decisionLogicURL(const jsbind::USVString& value);
    jsbind::USVString trustedScoringSignalsURL() const;
    void trustedScoringSignalsURL(const jsbind::USVString& value);
    long maxTrustedScoringSignalsURLLength() const;
    void maxTrustedScoringSignalsURLLength(long value);
    jsbind::USVString trustedScoringSignalsCoordinator() const;
    void trustedScoringSignalsCoordinator(const jsbind::USVString& value);
    bool sendCreativeScanningMetadata() const;
    void sendCreativeScanningMetadata(bool value);
    jsbind::Sequence<jsbind::USVString> interestGroupBuyers() const;
    void interestGroupBuyers(const jsbind::Sequence<jsbind::USVString>& value);
    jsbind::Promise auctionSignals() const;
    void auctionSignals(const jsbind::Promise& value);
    jsbind::Promise sellerSignals() const;
    void sellerSignals(const jsbind::Promise& value);
    jsbind::Promise directFromSellerSignalsHeaderAdSlot() const;
    void directFromSellerSignalsHeaderAdSlot(const jsbind::Promise& value);
    jsbind::Promise deprecatedRenderURLReplacements() const;
    void deprecatedRenderURLReplacements(const jsbind::Promise& value);
    long long sellerTimeout() const;
    void sellerTimeout(long long value);
    unsigned short sellerExperimentGroupId() const;
    void sellerExperimentGroupId(unsigned short value);
    jsbind::Promise perBuyerSignals() const;
    void perBuyerSignals(const jsbind::Promise& value);
    jsbind::Promise perBuyerTimeouts() const;
    void perBuyerTimeouts(const jsbind::Promise& value);
    jsbind::Promise perBuyerCumulativeTimeouts() const;
    void perBuyerCumulativeTimeouts(const jsbind::Promise& value);
    long long reportingTimeout() const;
    void reportingTimeout(long long value);
    jsbind::USVString sellerCurrency() const;
    void sellerCurrency(const jsbind::USVString& value);
    jsbind::Promise perBuyerCurrencies() const;
    void perBuyerCurrencies(const jsbind::Promise& value);
    jsbind::Record<jsbind::USVString, unsigned short> perBuyerMultiBidLimits() const;
    void perBuyerMultiBidLimits(jsbind::Record<jsbind::USVString, unsigned short> value);
    jsbind::Record<jsbind::USVString, unsigned short> perBuyerGroupLimits() const;
    void perBuyerGroupLimits(jsbind::Record<jsbind::USVString, unsigned short> value);
    jsbind::Record<jsbind::USVString, unsigned short> perBuyerExperimentGroupIds() const;
    void perBuyerExperimentGroupIds(jsbind::Record<jsbind::USVString, unsigned short> value);
    jsbind::Record<jsbind::USVString, jsbind::Record<jsbind::USVString, double>> perBuyerPrioritySignals() const;
    void perBuyerPrioritySignals(jsbind::Record<jsbind::USVString, jsbind::Record<jsbind::USVString, double>> value);
    jsbind::Sequence<long long> auctionReportBuyerKeys() const;
    void auctionReportBuyerKeys(jsbind::Sequence<long long> value);
    jsbind::Record<jsbind::DOMString, jsbind::Any> auctionReportBuyers() const;
    void auctionReportBuyers(const jsbind::Record<jsbind::DOMString, jsbind::Any>& value);
    jsbind::Any auctionReportBuyerDebugModeConfig() const;
    void auctionReportBuyerDebugModeConfig(const jsbind::Any& value);
    jsbind::Sequence<jsbind::DOMString> requiredSellerCapabilities() const;
    void requiredSellerCapabilities(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Any privateAggregationConfig() const;
    void privateAggregationConfig(const jsbind::Any& value);
    jsbind::Record<jsbind::DOMString, jsbind::DOMString> requestedSize() const;
    void requestedSize(const jsbind::Record<jsbind::DOMString, jsbind::DOMString>& value);
    jsbind::Sequence<jsbind::Record<jsbind::DOMString, jsbind::DOMString>> allSlotsRequestedSizes() const;
    void allSlotsRequestedSizes(const jsbind::Sequence<jsbind::Record<jsbind::DOMString, jsbind::DOMString>>& value);
    jsbind::Promise additionalBids() const;
    void additionalBids(const jsbind::Promise& value);
    jsbind::DOMString auctionNonce() const;
    void auctionNonce(const jsbind::DOMString& value);
    jsbind::Any sellerRealTimeReportingConfig() const;
    void sellerRealTimeReportingConfig(const jsbind::Any& value);
    jsbind::Record<jsbind::USVString, jsbind::Any> perBuyerRealTimeReportingConfig() const;
    void perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::USVString, jsbind::Any>& value);
    jsbind::Sequence<AuctionAdConfig> componentAuctions() const;
    void componentAuctions(const jsbind::Sequence<AuctionAdConfig>& value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::Promise resolveToConfig() const;
    void resolveToConfig(const jsbind::Promise& value);
    jsbind::Promise serverResponse() const;
    void serverResponse(const jsbind::Promise& value);
    jsbind::USVString requestId() const;
    void requestId(const jsbind::USVString& value);
};

class AdAuctionData : public emlite::Val {
  explicit AdAuctionData(Handle h) noexcept;
public:
    static AdAuctionData take_ownership(Handle h) noexcept;
    explicit AdAuctionData(const emlite::Val &val) noexcept;
    AdAuctionData() noexcept;
    AdAuctionData clone() const noexcept;
    jsbind::USVString requestId() const;
    void requestId(const jsbind::USVString& value);
    jsbind::Uint8Array request() const;
    void request(const jsbind::Uint8Array& value);
    jsbind::Sequence<jsbind::Any> requests() const;
    void requests(const jsbind::Sequence<jsbind::Any>& value);
};

class AdAuctionDataConfig : public emlite::Val {
  explicit AdAuctionDataConfig(Handle h) noexcept;
public:
    static AdAuctionDataConfig take_ownership(Handle h) noexcept;
    explicit AdAuctionDataConfig(const emlite::Val &val) noexcept;
    AdAuctionDataConfig() noexcept;
    AdAuctionDataConfig clone() const noexcept;
    jsbind::USVString seller() const;
    void seller(const jsbind::USVString& value);
    jsbind::USVString coordinatorOrigin() const;
    void coordinatorOrigin(const jsbind::USVString& value);
    jsbind::Sequence<jsbind::Any> sellers() const;
    void sellers(const jsbind::Sequence<jsbind::Any>& value);
    unsigned long requestSize() const;
    void requestSize(unsigned long value);
    jsbind::Record<jsbind::USVString, jsbind::Any> perBuyerConfig() const;
    void perBuyerConfig(const jsbind::Record<jsbind::USVString, jsbind::Any>& value);
};

class ShareData : public emlite::Val {
  explicit ShareData(Handle h) noexcept;
public:
    static ShareData take_ownership(Handle h) noexcept;
    explicit ShareData(const emlite::Val &val) noexcept;
    ShareData() noexcept;
    ShareData clone() const noexcept;
    jsbind::Sequence<File> files() const;
    void files(const jsbind::Sequence<File>& value);
    jsbind::USVString title() const;
    void title(const jsbind::USVString& value);
    jsbind::USVString text() const;
    void text(const jsbind::USVString& value);
    jsbind::USVString url() const;
    void url(const jsbind::USVString& value);
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
    jsbind::Promise getBattery();
    bool sendBeacon(const jsbind::USVString& url, const jsbind::Any& data);
    Clipboard clipboard() const;
    ContactsManager contacts() const;
    CredentialsContainer credentials() const;
    DevicePosture devicePosture() const;
    jsbind::Promise requestMediaKeySystemAccess(const jsbind::DOMString& keySystem, const jsbind::Sequence<MediaKeySystemConfiguration>& supportedConfigurations);
    jsbind::Promise deprecatedReplaceInURN(const jsbind::Any& urnOrConfig, const jsbind::Record<jsbind::USVString, jsbind::USVString>& replacements);
    jsbind::Promise deprecatedURNtoURL(const jsbind::Any& urnOrConfig, bool send_reports);
    jsbind::Sequence<jsbind::USVString> adAuctionComponents(unsigned short numAdComponents);
    jsbind::Sequence<Gamepad> getGamepads();
    Geolocation geolocation() const;
    jsbind::Promise getInstalledRelatedApps();
    jsbind::Promise queryHandwritingRecognizer(const HandwritingModelConstraint& constraint);
    jsbind::Promise createHandwritingRecognizer(const HandwritingModelConstraint& constraint);
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
    jsbind::Promise joinAdInterestGroup(const AuctionAdInterestGroup& group);
    jsbind::Promise leaveAdInterestGroup(const AuctionAdInterestGroupKey& group);
    jsbind::Promise clearOriginJoinedAdInterestGroups(const jsbind::USVString& owner, const jsbind::Sequence<jsbind::USVString>& interestGroupsToKeep);
    jsbind::Promise runAdAuction(const AuctionAdConfig& config);
    bool deprecatedRunAdAuctionEnforcesKAnonymity() const;
    bool canLoadAdAuctionFencedFrame();
    jsbind::Promise getInterestGroupAdAuctionData(const AdAuctionDataConfig& config);
    jsbind::Promise createAuctionNonce();
    jsbind::Undefined updateAdInterestGroups();
    ProtectedAudience protectedAudience() const;
    bool vibrate(const jsbind::Any& pattern);
    VirtualKeyboard virtualKeyboard() const;
    Bluetooth bluetooth() const;
    jsbind::Promise share(const ShareData& data);
    bool canShare(const ShareData& data);
    HID hid() const;
    jsbind::Promise requestMIDIAccess(const MIDIOptions& options);
    USB usb() const;
    XRSystem xr() const;
    WindowControlsOverlay windowControlsOverlay() const;
    jsbind::Promise setAppBadge(long long contents);
    jsbind::Promise clearAppBadge();
    double deviceMemory() const;
    bool globalPrivacyControl() const;
    bool taintEnabled();
    jsbind::DOMString oscpu() const;
    jsbind::DOMString language() const;
    jsbind::FrozenArray<jsbind::DOMString> languages() const;
    bool onLine() const;
    jsbind::Undefined registerProtocolHandler(const jsbind::DOMString& scheme, const jsbind::USVString& url);
    jsbind::Undefined unregisterProtocolHandler(const jsbind::DOMString& scheme, const jsbind::USVString& url);
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

