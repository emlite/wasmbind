#include <webbind/NDEFReader.hpp>
#include <webbind/AbortSignal.hpp>


NDEFScanOptions::NDEFScanOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFScanOptions NDEFScanOptions::take_ownership(Handle h) noexcept {
        return NDEFScanOptions(h);
    }
NDEFScanOptions::NDEFScanOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NDEFScanOptions::NDEFScanOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NDEFScanOptions NDEFScanOptions::clone() const noexcept { return *this; }

AbortSignal NDEFScanOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void NDEFScanOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

NDEFWriteOptions::NDEFWriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFWriteOptions NDEFWriteOptions::take_ownership(Handle h) noexcept {
        return NDEFWriteOptions(h);
    }
NDEFWriteOptions::NDEFWriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NDEFWriteOptions::NDEFWriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NDEFWriteOptions NDEFWriteOptions::clone() const noexcept { return *this; }

bool NDEFWriteOptions::overwrite() const {
    return emlite::Val::get("overwrite").as<bool>();
}

void NDEFWriteOptions::overwrite(bool value) {
    emlite::Val::set("overwrite", value);
}

AbortSignal NDEFWriteOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void NDEFWriteOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

NDEFMakeReadOnlyOptions::NDEFMakeReadOnlyOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions::take_ownership(Handle h) noexcept {
        return NDEFMakeReadOnlyOptions(h);
    }
NDEFMakeReadOnlyOptions::NDEFMakeReadOnlyOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NDEFMakeReadOnlyOptions::NDEFMakeReadOnlyOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions::clone() const noexcept { return *this; }

AbortSignal NDEFMakeReadOnlyOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void NDEFMakeReadOnlyOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

NDEFReader NDEFReader::take_ownership(Handle h) noexcept {
        return NDEFReader(h);
    }
NDEFReader NDEFReader::clone() const noexcept { return *this; }
NDEFReader::NDEFReader(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
NDEFReader::NDEFReader(const emlite::Val &val) noexcept: EventTarget(val) {}


NDEFReader::NDEFReader() : EventTarget(emlite::Val::global("NDEFReader").new_()) {}

jsbind::Any NDEFReader::onreading() const {
    return EventTarget::get("onreading").as<jsbind::Any>();
}

void NDEFReader::onreading(const jsbind::Any& value) {
    EventTarget::set("onreading", value);
}

jsbind::Any NDEFReader::onreadingerror() const {
    return EventTarget::get("onreadingerror").as<jsbind::Any>();
}

void NDEFReader::onreadingerror(const jsbind::Any& value) {
    EventTarget::set("onreadingerror", value);
}

jsbind::Promise<jsbind::Undefined> NDEFReader::scan() {
    return EventTarget::call("scan").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NDEFReader::scan(const NDEFScanOptions& options) {
    return EventTarget::call("scan", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NDEFReader::write(const jsbind::Any& message) {
    return EventTarget::call("write", message).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NDEFReader::write(const jsbind::Any& message, const NDEFWriteOptions& options) {
    return EventTarget::call("write", message, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NDEFReader::makeReadOnly() {
    return EventTarget::call("makeReadOnly").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NDEFReader::makeReadOnly(const NDEFMakeReadOnlyOptions& options) {
    return EventTarget::call("makeReadOnly", options).as<jsbind::Promise<jsbind::Undefined>>();
}

