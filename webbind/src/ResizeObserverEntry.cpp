#include <webbind/ResizeObserverEntry.hpp>
#include <webbind/Element.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/ResizeObserverSize.hpp>


ResizeObserverEntry ResizeObserverEntry::take_ownership(Handle h) noexcept {
        return ResizeObserverEntry(h);
    }
ResizeObserverEntry ResizeObserverEntry::clone() const noexcept { return *this; }
ResizeObserverEntry::ResizeObserverEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ResizeObserverEntry::ResizeObserverEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}


Element ResizeObserverEntry::target() const {
    return emlite::Val::get("target").as<Element>();
}

DOMRectReadOnly ResizeObserverEntry::contentRect() const {
    return emlite::Val::get("contentRect").as<DOMRectReadOnly>();
}

jsbind::FrozenArray<ResizeObserverSize> ResizeObserverEntry::borderBoxSize() const {
    return emlite::Val::get("borderBoxSize").as<jsbind::FrozenArray<ResizeObserverSize>>();
}

jsbind::FrozenArray<ResizeObserverSize> ResizeObserverEntry::contentBoxSize() const {
    return emlite::Val::get("contentBoxSize").as<jsbind::FrozenArray<ResizeObserverSize>>();
}

jsbind::FrozenArray<ResizeObserverSize> ResizeObserverEntry::devicePixelContentBoxSize() const {
    return emlite::Val::get("devicePixelContentBoxSize").as<jsbind::FrozenArray<ResizeObserverSize>>();
}

