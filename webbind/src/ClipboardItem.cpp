#include "webbind/ClipboardItem.hpp"
#include "webbind/ClipboardItemOptions.hpp"
#include "webbind/Blob.hpp"

namespace webbind {

ClipboardItem ClipboardItem::take_ownership(Handle h) noexcept {
        return ClipboardItem(h);
    }
ClipboardItem ClipboardItem::clone() const noexcept { return *this; }
emlite::Val ClipboardItem::instance() noexcept { return emlite::Val::global("ClipboardItem"); }
ClipboardItem::ClipboardItem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ClipboardItem::ClipboardItem(const emlite::Val &val) noexcept: emlite::Val(val) {}

ClipboardItem::ClipboardItem(const jsbind::Record<jsbind::String, jsbind::Any>& items) : emlite::Val(emlite::Val::global("ClipboardItem").new_(items)) {}

ClipboardItem::ClipboardItem(const jsbind::Record<jsbind::String, jsbind::Any>& items, const ClipboardItemOptions& options) : emlite::Val(emlite::Val::global("ClipboardItem").new_(items, options)) {}

PresentationStyle ClipboardItem::presentationStyle() const {
    return emlite::Val::get("presentationStyle").as<PresentationStyle>();
}

jsbind::TypedArray<jsbind::String> ClipboardItem::types() const {
    return emlite::Val::get("types").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::Promise<Blob> ClipboardItem::getType(const jsbind::String& type) {
    return emlite::Val::call("getType", type).as<jsbind::Promise<Blob>>();
}

bool ClipboardItem::supports(const jsbind::String& type) {
    return emlite::Val::global("clipboarditem").call("supports", type).as<bool>();
}


} // namespace webbind