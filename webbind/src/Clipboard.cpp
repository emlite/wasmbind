#include <webbind/Clipboard.hpp>


ClipboardUnsanitizedFormats::ClipboardUnsanitizedFormats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats::take_ownership(Handle h) noexcept {
        return ClipboardUnsanitizedFormats(h);
    }
ClipboardUnsanitizedFormats::ClipboardUnsanitizedFormats(const emlite::Val &val) noexcept: emlite::Val(val) {}
ClipboardUnsanitizedFormats::ClipboardUnsanitizedFormats() noexcept: emlite::Val(emlite::Val::object()) {}
ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> ClipboardUnsanitizedFormats::unsanitized() const {
    return emlite::Val::get("unsanitized").as<jsbind::TypedArray<jsbind::String>>();
}

void ClipboardUnsanitizedFormats::unsanitized(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("unsanitized", value);
}

Clipboard Clipboard::take_ownership(Handle h) noexcept {
        return Clipboard(h);
    }
Clipboard Clipboard::clone() const noexcept { return *this; }
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

