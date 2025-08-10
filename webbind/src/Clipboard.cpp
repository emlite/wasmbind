#include <webbind/Clipboard.hpp>
#include <webbind/ClipboardUnsanitizedFormats.hpp>

namespace webbind {

Clipboard Clipboard::take_ownership(Handle h) noexcept {
        return Clipboard(h);
    }
Clipboard Clipboard::clone() const noexcept { return *this; }
emlite::Val Clipboard::instance() noexcept { return emlite::Val::global("Clipboard"); }
Clipboard::Clipboard(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Clipboard::Clipboard(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Promise<jsbind::Any> Clipboard::read() {
    return EventTarget::call("read").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Clipboard::read(const ClipboardUnsanitizedFormats& formats) {
    return EventTarget::call("read", formats).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::String> Clipboard::readText() {
    return EventTarget::call("readText").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::Undefined> Clipboard::write(const jsbind::Any& data) {
    return EventTarget::call("write", data).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Clipboard::writeText(const jsbind::String& data) {
    return EventTarget::call("writeText", data).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind