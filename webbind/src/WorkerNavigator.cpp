#include <webbind/WorkerNavigator.hpp>
#include <webbind/MediaCapabilities.hpp>
#include <webbind/Permissions.hpp>
#include <webbind/Serial.hpp>
#include <webbind/ServiceWorkerContainer.hpp>
#include <webbind/HID.hpp>
#include <webbind/USB.hpp>
#include <webbind/NetworkInformation.hpp>
#include <webbind/StorageBucketManager.hpp>
#include <webbind/StorageManager.hpp>
#include <webbind/NavigatorUAData.hpp>
#include <webbind/LockManager.hpp>
#include <webbind/GPU.hpp>
#include <webbind/ML.hpp>

class GPU;
class ML;


WorkerNavigator WorkerNavigator::take_ownership(Handle h) noexcept {
        return WorkerNavigator(h);
    }
WorkerNavigator WorkerNavigator::clone() const noexcept { return *this; }
WorkerNavigator::WorkerNavigator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkerNavigator::WorkerNavigator(const emlite::Val &val) noexcept: emlite::Val(val) {}


MediaCapabilities WorkerNavigator::mediaCapabilities() const {
    return emlite::Val::get("mediaCapabilities").as<MediaCapabilities>();
}

Permissions WorkerNavigator::permissions() const {
    return emlite::Val::get("permissions").as<Permissions>();
}

Serial WorkerNavigator::serial() const {
    return emlite::Val::get("serial").as<Serial>();
}

ServiceWorkerContainer WorkerNavigator::serviceWorker() const {
    return emlite::Val::get("serviceWorker").as<ServiceWorkerContainer>();
}

HID WorkerNavigator::hid() const {
    return emlite::Val::get("hid").as<HID>();
}

USB WorkerNavigator::usb() const {
    return emlite::Val::get("usb").as<USB>();
}

jsbind::Promise<jsbind::Undefined> WorkerNavigator::setAppBadge() {
    return emlite::Val::call("setAppBadge").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WorkerNavigator::setAppBadge(long long contents) {
    return emlite::Val::call("setAppBadge", contents).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WorkerNavigator::clearAppBadge() {
    return emlite::Val::call("clearAppBadge").as<jsbind::Promise<jsbind::Undefined>>();
}

double WorkerNavigator::deviceMemory() const {
    return emlite::Val::get("deviceMemory").as<double>();
}

bool WorkerNavigator::globalPrivacyControl() const {
    return emlite::Val::get("globalPrivacyControl").as<bool>();
}

bool WorkerNavigator::taintEnabled() {
    return emlite::Val::call("taintEnabled").as<bool>();
}

jsbind::DOMString WorkerNavigator::oscpu() const {
    return emlite::Val::get("oscpu").as<jsbind::DOMString>();
}

jsbind::DOMString WorkerNavigator::language() const {
    return emlite::Val::get("language").as<jsbind::DOMString>();
}

jsbind::FrozenArray<jsbind::DOMString> WorkerNavigator::languages() const {
    return emlite::Val::get("languages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

bool WorkerNavigator::onLine() const {
    return emlite::Val::get("onLine").as<bool>();
}

long long WorkerNavigator::hardwareConcurrency() const {
    return emlite::Val::get("hardwareConcurrency").as<long long>();
}

NetworkInformation WorkerNavigator::connection() const {
    return emlite::Val::get("connection").as<NetworkInformation>();
}

StorageBucketManager WorkerNavigator::storageBuckets() const {
    return emlite::Val::get("storageBuckets").as<StorageBucketManager>();
}

StorageManager WorkerNavigator::storage() const {
    return emlite::Val::get("storage").as<StorageManager>();
}

NavigatorUAData WorkerNavigator::userAgentData() const {
    return emlite::Val::get("userAgentData").as<NavigatorUAData>();
}

LockManager WorkerNavigator::locks() const {
    return emlite::Val::get("locks").as<LockManager>();
}

GPU WorkerNavigator::gpu() const {
    return emlite::Val::get("gpu").as<GPU>();
}

ML WorkerNavigator::ml() const {
    return emlite::Val::get("ml").as<ML>();
}

