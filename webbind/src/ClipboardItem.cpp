#include <webbind/ClipboardItem.hpp>
#include <webbind/Blob.hpp>


ClipboardItem ClipboardItem::take_ownership(Handle h) noexcept {
        return ClipboardItem(h);
    }
ClipboardItem ClipboardItem::clone() const noexcept { return *this; }
ClipboardItem::ClipboardItem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ClipboardItem::ClipboardItem(const emlite::Val &val) noexcept: emlite::Val(val) {}


ClipboardItem::ClipboardItem(const jsbind::Record<jsbind::DOMString, jsbind::Any>& items) : emlite::Val(emlite::Val::global("ClipboardItem").new_(items)) {}

ClipboardItem::ClipboardItem(const jsbind::Record<jsbind::DOMString, jsbind::Any>& items, const jsbind::Any& options) : emlite::Val(emlite::Val::global("ClipboardItem").new_(items, options)) {}

PresentationStyle ClipboardItem::presentationStyle() const {
    return emlite::Val::get("presentationStyle").as<PresentationStyle>();
}

jsbind::FrozenArray<jsbind::DOMString> ClipboardItem::types() const {
    return emlite::Val::get("types").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::Promise ClipboardItem::getType(const jsbind::DOMString& type) {
    return emlite::Val::call("getType", type).as<jsbind::Promise>();
}

bool ClipboardItem::supports(const jsbind::DOMString& type) {
    return emlite::Val::global("clipboarditem").call("supports", type).as<bool>();
}

