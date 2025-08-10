#include <webbind/Navigator.hpp>
#include <webbind/AudioSession.hpp>
#include <webbind/AudioContext.hpp>
#include <webbind/BatteryManager.hpp>
#include <webbind/Clipboard.hpp>
#include <webbind/ContactsManager.hpp>
#include <webbind/CredentialsContainer.hpp>
#include <webbind/DevicePosture.hpp>
#include <webbind/MediaKeySystemAccess.hpp>
#include <webbind/MediaKeySystemConfiguration.hpp>
#include <webbind/Gamepad.hpp>
#include <webbind/Geolocation.hpp>
#include <webbind/RelatedApplication.hpp>
#include <webbind/HandwritingRecognizerQueryResult.hpp>
#include <webbind/HandwritingModelConstraint.hpp>
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
#include <webbind/AuctionAdInterestGroup.hpp>
#include <webbind/AuctionAdInterestGroupKey.hpp>
#include <webbind/AuctionAdConfig.hpp>
#include <webbind/AdAuctionData.hpp>
#include <webbind/AdAuctionDataConfig.hpp>
#include <webbind/ProtectedAudience.hpp>
#include <webbind/VirtualKeyboard.hpp>
#include <webbind/Bluetooth.hpp>
#include <webbind/ShareData.hpp>
#include <webbind/HID.hpp>
#include <webbind/MIDIAccess.hpp>
#include <webbind/MIDIOptions.hpp>
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

namespace webbind {

Navigator Navigator::take_ownership(Handle h) noexcept {
    return Navigator(h);
}

Navigator Navigator::clone() const noexcept { return *this; }

emlite::Val Navigator::instance() noexcept { return emlite::Val::global("Navigator"); }

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


} // namespace webbind