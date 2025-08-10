#include <webbind/NDEFReader.hpp>
#include <webbind/NDEFScanOptions.hpp>
#include <webbind/NDEFWriteOptions.hpp>
#include <webbind/NDEFMakeReadOnlyOptions.hpp>

namespace webbind {

NDEFReader NDEFReader::take_ownership(Handle h) noexcept {
    return NDEFReader(h);
}

NDEFReader NDEFReader::clone() const noexcept { return *this; }

emlite::Val NDEFReader::instance() noexcept { return emlite::Val::global("NDEFReader"); }

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


} // namespace webbind