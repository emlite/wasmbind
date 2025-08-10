#include "webbind/EditContext.hpp"
#include "webbind/EditContextInit.hpp"
#include "webbind/DOMRect.hpp"
#include "webbind/HTMLElement.hpp"

namespace webbind {

EditContext EditContext::take_ownership(Handle h) noexcept {
        return EditContext(h);
    }
EditContext EditContext::clone() const noexcept { return *this; }
emlite::Val EditContext::instance() noexcept { return emlite::Val::global("EditContext"); }
EditContext::EditContext(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
EditContext::EditContext(const emlite::Val &val) noexcept: EventTarget(val) {}

EditContext::EditContext() : EventTarget(emlite::Val::global("EditContext").new_()) {}

EditContext::EditContext(const EditContextInit& options) : EventTarget(emlite::Val::global("EditContext").new_(options)) {}

jsbind::Undefined EditContext::updateText(unsigned long rangeStart, unsigned long rangeEnd, const jsbind::String& text) {
    return EventTarget::call("updateText", rangeStart, rangeEnd, text).as<jsbind::Undefined>();
}

jsbind::Undefined EditContext::updateSelection(unsigned long start, unsigned long end) {
    return EventTarget::call("updateSelection", start, end).as<jsbind::Undefined>();
}

jsbind::Undefined EditContext::updateControlBounds(const DOMRect& controlBounds) {
    return EventTarget::call("updateControlBounds", controlBounds).as<jsbind::Undefined>();
}

jsbind::Undefined EditContext::updateSelectionBounds(const DOMRect& selectionBounds) {
    return EventTarget::call("updateSelectionBounds", selectionBounds).as<jsbind::Undefined>();
}

jsbind::Undefined EditContext::updateCharacterBounds(unsigned long rangeStart, const jsbind::TypedArray<DOMRect>& characterBounds) {
    return EventTarget::call("updateCharacterBounds", rangeStart, characterBounds).as<jsbind::Undefined>();
}

jsbind::TypedArray<HTMLElement> EditContext::attachedElements() {
    return EventTarget::call("attachedElements").as<jsbind::TypedArray<HTMLElement>>();
}

jsbind::String EditContext::text() const {
    return EventTarget::get("text").as<jsbind::String>();
}

unsigned long EditContext::selectionStart() const {
    return EventTarget::get("selectionStart").as<unsigned long>();
}

unsigned long EditContext::selectionEnd() const {
    return EventTarget::get("selectionEnd").as<unsigned long>();
}

unsigned long EditContext::characterBoundsRangeStart() const {
    return EventTarget::get("characterBoundsRangeStart").as<unsigned long>();
}

jsbind::TypedArray<DOMRect> EditContext::characterBounds() {
    return EventTarget::call("characterBounds").as<jsbind::TypedArray<DOMRect>>();
}

jsbind::Any EditContext::ontextupdate() const {
    return EventTarget::get("ontextupdate").as<jsbind::Any>();
}

void EditContext::ontextupdate(const jsbind::Any& value) {
    EventTarget::set("ontextupdate", value);
}

jsbind::Any EditContext::ontextformatupdate() const {
    return EventTarget::get("ontextformatupdate").as<jsbind::Any>();
}

void EditContext::ontextformatupdate(const jsbind::Any& value) {
    EventTarget::set("ontextformatupdate", value);
}

jsbind::Any EditContext::oncharacterboundsupdate() const {
    return EventTarget::get("oncharacterboundsupdate").as<jsbind::Any>();
}

void EditContext::oncharacterboundsupdate(const jsbind::Any& value) {
    EventTarget::set("oncharacterboundsupdate", value);
}

jsbind::Any EditContext::oncompositionstart() const {
    return EventTarget::get("oncompositionstart").as<jsbind::Any>();
}

void EditContext::oncompositionstart(const jsbind::Any& value) {
    EventTarget::set("oncompositionstart", value);
}

jsbind::Any EditContext::oncompositionend() const {
    return EventTarget::get("oncompositionend").as<jsbind::Any>();
}

void EditContext::oncompositionend(const jsbind::Any& value) {
    EventTarget::set("oncompositionend", value);
}


} // namespace webbind