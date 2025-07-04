#include <webbind/SharedStorage.hpp>
#include <webbind/SharedStorageModifierMethod.hpp>
#include <webbind/SharedStorageWorklet.hpp>


SharedStorageSetMethodOptions::SharedStorageSetMethodOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageSetMethodOptions SharedStorageSetMethodOptions::take_ownership(Handle h) noexcept {
        return SharedStorageSetMethodOptions(h);
    }
SharedStorageSetMethodOptions::SharedStorageSetMethodOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStorageSetMethodOptions::SharedStorageSetMethodOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStorageSetMethodOptions SharedStorageSetMethodOptions::clone() const noexcept { return *this; }

bool SharedStorageSetMethodOptions::ignoreIfPresent() const {
    return emlite::Val::get("ignoreIfPresent").as<bool>();
}

void SharedStorageSetMethodOptions::ignoreIfPresent(bool value) {
    emlite::Val::set("ignoreIfPresent", value);
}

SharedStorageModifierMethodOptions::SharedStorageModifierMethodOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions::take_ownership(Handle h) noexcept {
        return SharedStorageModifierMethodOptions(h);
    }
SharedStorageModifierMethodOptions::SharedStorageModifierMethodOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStorageModifierMethodOptions::SharedStorageModifierMethodOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions::clone() const noexcept { return *this; }

jsbind::DOMString SharedStorageModifierMethodOptions::withLock() const {
    return emlite::Val::get("withLock").as<jsbind::DOMString>();
}

void SharedStorageModifierMethodOptions::withLock(const jsbind::DOMString& value) {
    emlite::Val::set("withLock", value);
}

SharedStorageWorkletOptions::SharedStorageWorkletOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageWorkletOptions SharedStorageWorkletOptions::take_ownership(Handle h) noexcept {
        return SharedStorageWorkletOptions(h);
    }
SharedStorageWorkletOptions::SharedStorageWorkletOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStorageWorkletOptions::SharedStorageWorkletOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStorageWorkletOptions SharedStorageWorkletOptions::clone() const noexcept { return *this; }

jsbind::USVString SharedStorageWorkletOptions::dataOrigin() const {
    return emlite::Val::get("dataOrigin").as<jsbind::USVString>();
}

void SharedStorageWorkletOptions::dataOrigin(const jsbind::USVString& value) {
    emlite::Val::set("dataOrigin", value);
}

SharedStorage SharedStorage::take_ownership(Handle h) noexcept {
        return SharedStorage(h);
    }
SharedStorage SharedStorage::clone() const noexcept { return *this; }
SharedStorage::SharedStorage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorage::SharedStorage(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise SharedStorage::get(const jsbind::DOMString& key) {
    return emlite::Val::call("get", key).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::set(const jsbind::DOMString& key, const jsbind::DOMString& value, const SharedStorageSetMethodOptions& options) {
    return emlite::Val::call("set", key, value, options).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::append(const jsbind::DOMString& key, const jsbind::DOMString& value, const SharedStorageModifierMethodOptions& options) {
    return emlite::Val::call("append", key, value, options).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::delete_(const jsbind::DOMString& key, const SharedStorageModifierMethodOptions& options) {
    return emlite::Val::call("delete", key, options).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::clear(const SharedStorageModifierMethodOptions& options) {
    return emlite::Val::call("clear", options).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::batchUpdate(const jsbind::Sequence<SharedStorageModifierMethod>& methods, const SharedStorageModifierMethodOptions& options) {
    return emlite::Val::call("batchUpdate", methods, options).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::selectURL(const jsbind::DOMString& name, const jsbind::Sequence<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options) {
    return emlite::Val::call("selectURL", name, urls, options).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::run(const jsbind::DOMString& name, const SharedStorageRunOperationMethodOptions& options) {
    return emlite::Val::call("run", name, options).as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::createWorklet(const jsbind::USVString& moduleURL, const SharedStorageWorkletOptions& options) {
    return emlite::Val::call("createWorklet", moduleURL, options).as<jsbind::Promise>();
}

SharedStorageWorklet SharedStorage::worklet() const {
    return emlite::Val::get("worklet").as<SharedStorageWorklet>();
}

jsbind::Promise SharedStorage::length() {
    return emlite::Val::call("length").as<jsbind::Promise>();
}

jsbind::Promise SharedStorage::remainingBudget() {
    return emlite::Val::call("remainingBudget").as<jsbind::Promise>();
}

