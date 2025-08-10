#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaKeySystemConfiguration.hpp"
#include "RelatedApplication.hpp"
#include "HandwritingRecognizerQueryResult.hpp"
#include "HandwritingModelConstraint.hpp"
#include "AuctionAdInterestGroup.hpp"
#include "AuctionAdInterestGroupKey.hpp"
#include "AuctionAdConfig.hpp"
#include "AdAuctionData.hpp"
#include "AdAuctionDataConfig.hpp"
#include "ShareData.hpp"
#include "MIDIOptions.hpp"
#include "enums.hpp"

namespace webbind {

class AudioSession;
class AudioContext;
class BatteryManager;
class Clipboard;
class ContactsManager;
class CredentialsContainer;
class DevicePosture;
class MediaKeySystemAccess;
class Gamepad;
class Geolocation;
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
class ProtectedAudience;
class VirtualKeyboard;
class Bluetooth;
class HID;
class MIDIAccess;
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

/// Interface Navigator
/// [`Navigator`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator)
class Navigator : public emlite::Val {
    explicit Navigator(Handle h) noexcept;
public:
    explicit Navigator(const emlite::Val &val) noexcept;
    static Navigator take_ownership(Handle h) noexcept;
    [[nodiscard]] Navigator clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Navigator.audioSession`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/audioSession)
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
    /// [`Navigator.clipboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/clipboard)
    /// [`Navigator.clipboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/clipboard)
    [[nodiscard]] Clipboard clipboard() const;
    /// [`Navigator.contacts`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/contacts)
    /// [`Navigator.contacts`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/contacts)
    [[nodiscard]] ContactsManager contacts() const;
    /// [`Navigator.credentials`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/credentials)
    /// [`Navigator.credentials`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/credentials)
    [[nodiscard]] CredentialsContainer credentials() const;
    /// [`Navigator.devicePosture`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/devicePosture)
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
    /// [`Navigator.geolocation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/geolocation)
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
    /// [`Navigator.userActivation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/userActivation)
    /// [`Navigator.userActivation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/userActivation)
    [[nodiscard]] UserActivation userActivation() const;
    /// [`Navigator.ink`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/ink)
    /// [`Navigator.ink`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/ink)
    [[nodiscard]] Ink ink() const;
    /// [`Navigator.scheduling`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/scheduling)
    /// [`Navigator.scheduling`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/scheduling)
    [[nodiscard]] Scheduling scheduling() const;
    /// [`Navigator.keyboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/keyboard)
    /// [`Navigator.keyboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/keyboard)
    [[nodiscard]] Keyboard keyboard() const;
    /// [`Navigator.login`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/login)
    /// [`Navigator.login`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/login)
    [[nodiscard]] NavigatorLogin login() const;
    /// [`Navigator.managed`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/managed)
    /// [`Navigator.managed`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/managed)
    [[nodiscard]] NavigatorManagedData managed() const;
    /// [`Navigator.mediaCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaCapabilities)
    /// [`Navigator.mediaCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaCapabilities)
    [[nodiscard]] MediaCapabilities mediaCapabilities() const;
    /// [`Navigator.mediaDevices`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaDevices)
    /// [`Navigator.mediaDevices`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaDevices)
    [[nodiscard]] MediaDevices mediaDevices() const;
    /// [`Navigator.preferences`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/preferences)
    /// [`Navigator.preferences`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/preferences)
    [[nodiscard]] PreferenceManager preferences() const;
    /// [`Navigator.mediaSession`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaSession)
    /// [`Navigator.mediaSession`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mediaSession)
    [[nodiscard]] MediaSession mediaSession() const;
    /// [`Navigator.permissions`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/permissions)
    /// [`Navigator.permissions`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/permissions)
    [[nodiscard]] Permissions permissions() const;
    /// [`Navigator.maxTouchPoints`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/maxTouchPoints)
    /// [`Navigator.maxTouchPoints`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/maxTouchPoints)
    [[nodiscard]] long maxTouchPoints() const;
    /// [`Navigator.presentation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/presentation)
    /// [`Navigator.presentation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/presentation)
    [[nodiscard]] Presentation presentation() const;
    /// [`Navigator.attribution`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/attribution)
    /// [`Navigator.attribution`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/attribution)
    [[nodiscard]] Attribution attribution() const;
    /// [`Navigator.wakeLock`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/wakeLock)
    /// [`Navigator.wakeLock`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/wakeLock)
    [[nodiscard]] WakeLock wakeLock() const;
    /// [`Navigator.serial`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/serial)
    /// [`Navigator.serial`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/serial)
    [[nodiscard]] Serial serial() const;
    /// [`Navigator.serviceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/serviceWorker)
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
    /// [`Navigator.deprecatedRunAdAuctionEnforcesKAnonymity`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deprecatedRunAdAuctionEnforcesKAnonymity)
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
    /// [`Navigator.protectedAudience`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/protectedAudience)
    /// [`Navigator.protectedAudience`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/protectedAudience)
    [[nodiscard]] ProtectedAudience protectedAudience() const;
    /// The vibrate method.
    /// [`Navigator.vibrate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/vibrate)
    bool vibrate(const jsbind::Any& pattern);
    /// [`Navigator.virtualKeyboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/virtualKeyboard)
    /// [`Navigator.virtualKeyboard`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/virtualKeyboard)
    [[nodiscard]] VirtualKeyboard virtualKeyboard() const;
    /// [`Navigator.bluetooth`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/bluetooth)
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
    /// [`Navigator.hid`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/hid)
    /// [`Navigator.hid`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/hid)
    [[nodiscard]] HID hid() const;
    /// The requestMIDIAccess method.
    /// [`Navigator.requestMIDIAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/requestMIDIAccess)
    jsbind::Promise<MIDIAccess> requestMIDIAccess();
    /// The requestMIDIAccess method.
    /// [`Navigator.requestMIDIAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/requestMIDIAccess)
    jsbind::Promise<MIDIAccess> requestMIDIAccess(const MIDIOptions& options);
    /// [`Navigator.usb`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/usb)
    /// [`Navigator.usb`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/usb)
    [[nodiscard]] USB usb() const;
    /// [`Navigator.xr`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/xr)
    /// [`Navigator.xr`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/xr)
    [[nodiscard]] XRSystem xr() const;
    /// [`Navigator.windowControlsOverlay`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/windowControlsOverlay)
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
    /// [`Navigator.deviceMemory`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deviceMemory)
    /// [`Navigator.deviceMemory`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/deviceMemory)
    [[nodiscard]] double deviceMemory() const;
    /// [`Navigator.globalPrivacyControl`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/globalPrivacyControl)
    /// [`Navigator.globalPrivacyControl`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/globalPrivacyControl)
    [[nodiscard]] bool globalPrivacyControl() const;
    /// The taintEnabled method.
    /// [`Navigator.taintEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/taintEnabled)
    bool taintEnabled();
    /// [`Navigator.oscpu`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/oscpu)
    /// [`Navigator.oscpu`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/oscpu)
    [[nodiscard]] jsbind::String oscpu() const;
    /// [`Navigator.language`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/language)
    /// [`Navigator.language`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/language)
    [[nodiscard]] jsbind::String language() const;
    /// [`Navigator.languages`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/languages)
    /// [`Navigator.languages`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/languages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> languages() const;
    /// [`Navigator.onLine`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/onLine)
    /// [`Navigator.onLine`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/onLine)
    [[nodiscard]] bool onLine() const;
    /// The registerProtocolHandler method.
    /// [`Navigator.registerProtocolHandler`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/registerProtocolHandler)
    jsbind::Undefined registerProtocolHandler(const jsbind::String& scheme, const jsbind::String& url);
    /// The unregisterProtocolHandler method.
    /// [`Navigator.unregisterProtocolHandler`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/unregisterProtocolHandler)
    jsbind::Undefined unregisterProtocolHandler(const jsbind::String& scheme, const jsbind::String& url);
    /// [`Navigator.cookieEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/cookieEnabled)
    /// [`Navigator.cookieEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/cookieEnabled)
    [[nodiscard]] bool cookieEnabled() const;
    /// [`Navigator.plugins`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/plugins)
    /// [`Navigator.plugins`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/plugins)
    [[nodiscard]] PluginArray plugins() const;
    /// [`Navigator.mimeTypes`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mimeTypes)
    /// [`Navigator.mimeTypes`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/mimeTypes)
    [[nodiscard]] MimeTypeArray mimeTypes() const;
    /// The javaEnabled method.
    /// [`Navigator.javaEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/javaEnabled)
    bool javaEnabled();
    /// [`Navigator.pdfViewerEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/pdfViewerEnabled)
    /// [`Navigator.pdfViewerEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/pdfViewerEnabled)
    [[nodiscard]] bool pdfViewerEnabled() const;
    /// [`Navigator.hardwareConcurrency`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/hardwareConcurrency)
    /// [`Navigator.hardwareConcurrency`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/hardwareConcurrency)
    [[nodiscard]] long long hardwareConcurrency() const;
    /// [`Navigator.connection`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/connection)
    /// [`Navigator.connection`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/connection)
    [[nodiscard]] NetworkInformation connection() const;
    /// [`Navigator.storageBuckets`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/storageBuckets)
    /// [`Navigator.storageBuckets`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/storageBuckets)
    [[nodiscard]] StorageBucketManager storageBuckets() const;
    /// [`Navigator.storage`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/storage)
    /// [`Navigator.storage`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/storage)
    [[nodiscard]] StorageManager storage() const;
    /// [`Navigator.userAgentData`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/userAgentData)
    /// [`Navigator.userAgentData`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/userAgentData)
    [[nodiscard]] NavigatorUAData userAgentData() const;
    /// [`Navigator.locks`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/locks)
    /// [`Navigator.locks`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/locks)
    [[nodiscard]] LockManager locks() const;
    /// [`Navigator.webdriver`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/webdriver)
    /// [`Navigator.webdriver`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/webdriver)
    [[nodiscard]] bool webdriver() const;
    /// [`Navigator.gpu`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/gpu)
    /// [`Navigator.gpu`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/gpu)
    [[nodiscard]] GPU gpu() const;
    /// [`Navigator.ml`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/ml)
    /// [`Navigator.ml`](https://developer.mozilla.org/en-US/docs/Web/API/Navigator/ml)
    [[nodiscard]] ML ml() const;
};

} // namespace webbind