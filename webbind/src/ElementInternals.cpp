#include <webbind/ElementInternals.hpp>
#include <webbind/ShadowRoot.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/HTMLElement.hpp>
#include <webbind/ValidityState.hpp>
#include <webbind/NodeList.hpp>
#include <webbind/CustomStateSet.hpp>
#include <webbind/Element.hpp>


ValidityStateFlags::ValidityStateFlags(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ValidityStateFlags ValidityStateFlags::take_ownership(Handle h) noexcept {
        return ValidityStateFlags(h);
    }
ValidityStateFlags::ValidityStateFlags(const emlite::Val &val) noexcept: emlite::Val(val) {}
ValidityStateFlags::ValidityStateFlags() noexcept: emlite::Val(emlite::Val::object()) {}
ValidityStateFlags ValidityStateFlags::clone() const noexcept { return *this; }

bool ValidityStateFlags::valueMissing() const {
    return emlite::Val::get("valueMissing").as<bool>();
}

void ValidityStateFlags::valueMissing(bool value) {
    emlite::Val::set("valueMissing", value);
}

bool ValidityStateFlags::typeMismatch() const {
    return emlite::Val::get("typeMismatch").as<bool>();
}

void ValidityStateFlags::typeMismatch(bool value) {
    emlite::Val::set("typeMismatch", value);
}

bool ValidityStateFlags::patternMismatch() const {
    return emlite::Val::get("patternMismatch").as<bool>();
}

void ValidityStateFlags::patternMismatch(bool value) {
    emlite::Val::set("patternMismatch", value);
}

bool ValidityStateFlags::tooLong() const {
    return emlite::Val::get("tooLong").as<bool>();
}

void ValidityStateFlags::tooLong(bool value) {
    emlite::Val::set("tooLong", value);
}

bool ValidityStateFlags::tooShort() const {
    return emlite::Val::get("tooShort").as<bool>();
}

void ValidityStateFlags::tooShort(bool value) {
    emlite::Val::set("tooShort", value);
}

bool ValidityStateFlags::rangeUnderflow() const {
    return emlite::Val::get("rangeUnderflow").as<bool>();
}

void ValidityStateFlags::rangeUnderflow(bool value) {
    emlite::Val::set("rangeUnderflow", value);
}

bool ValidityStateFlags::rangeOverflow() const {
    return emlite::Val::get("rangeOverflow").as<bool>();
}

void ValidityStateFlags::rangeOverflow(bool value) {
    emlite::Val::set("rangeOverflow", value);
}

bool ValidityStateFlags::stepMismatch() const {
    return emlite::Val::get("stepMismatch").as<bool>();
}

void ValidityStateFlags::stepMismatch(bool value) {
    emlite::Val::set("stepMismatch", value);
}

bool ValidityStateFlags::badInput() const {
    return emlite::Val::get("badInput").as<bool>();
}

void ValidityStateFlags::badInput(bool value) {
    emlite::Val::set("badInput", value);
}

bool ValidityStateFlags::customError() const {
    return emlite::Val::get("customError").as<bool>();
}

void ValidityStateFlags::customError(bool value) {
    emlite::Val::set("customError", value);
}

ElementInternals ElementInternals::take_ownership(Handle h) noexcept {
        return ElementInternals(h);
    }
ElementInternals ElementInternals::clone() const noexcept { return *this; }
ElementInternals::ElementInternals(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ElementInternals::ElementInternals(const emlite::Val &val) noexcept: emlite::Val(val) {}


ShadowRoot ElementInternals::shadowRoot() const {
    return emlite::Val::get("shadowRoot").as<ShadowRoot>();
}

jsbind::Undefined ElementInternals::setFormValue(const jsbind::Any& value, const jsbind::Any& state) {
    return emlite::Val::call("setFormValue", value, state).as<jsbind::Undefined>();
}

HTMLFormElement ElementInternals::form() const {
    return emlite::Val::get("form").as<HTMLFormElement>();
}

jsbind::Undefined ElementInternals::setValidity(const ValidityStateFlags& flags, const jsbind::DOMString& message, const HTMLElement& anchor) {
    return emlite::Val::call("setValidity", flags, message, anchor).as<jsbind::Undefined>();
}

bool ElementInternals::willValidate() const {
    return emlite::Val::get("willValidate").as<bool>();
}

ValidityState ElementInternals::validity() const {
    return emlite::Val::get("validity").as<ValidityState>();
}

jsbind::DOMString ElementInternals::validationMessage() const {
    return emlite::Val::get("validationMessage").as<jsbind::DOMString>();
}

bool ElementInternals::checkValidity() {
    return emlite::Val::call("checkValidity").as<bool>();
}

bool ElementInternals::reportValidity() {
    return emlite::Val::call("reportValidity").as<bool>();
}

NodeList ElementInternals::labels() const {
    return emlite::Val::get("labels").as<NodeList>();
}

CustomStateSet ElementInternals::states() const {
    return emlite::Val::get("states").as<CustomStateSet>();
}

jsbind::DOMString ElementInternals::role() const {
    return emlite::Val::get("role").as<jsbind::DOMString>();
}

void ElementInternals::role(const jsbind::DOMString& value) {
    emlite::Val::set("role", value);
}

Element ElementInternals::ariaActiveDescendantElement() const {
    return emlite::Val::get("ariaActiveDescendantElement").as<Element>();
}

void ElementInternals::ariaActiveDescendantElement(const Element& value) {
    emlite::Val::set("ariaActiveDescendantElement", value);
}

jsbind::DOMString ElementInternals::ariaAtomic() const {
    return emlite::Val::get("ariaAtomic").as<jsbind::DOMString>();
}

void ElementInternals::ariaAtomic(const jsbind::DOMString& value) {
    emlite::Val::set("ariaAtomic", value);
}

jsbind::DOMString ElementInternals::ariaAutoComplete() const {
    return emlite::Val::get("ariaAutoComplete").as<jsbind::DOMString>();
}

void ElementInternals::ariaAutoComplete(const jsbind::DOMString& value) {
    emlite::Val::set("ariaAutoComplete", value);
}

jsbind::DOMString ElementInternals::ariaBrailleLabel() const {
    return emlite::Val::get("ariaBrailleLabel").as<jsbind::DOMString>();
}

void ElementInternals::ariaBrailleLabel(const jsbind::DOMString& value) {
    emlite::Val::set("ariaBrailleLabel", value);
}

jsbind::DOMString ElementInternals::ariaBrailleRoleDescription() const {
    return emlite::Val::get("ariaBrailleRoleDescription").as<jsbind::DOMString>();
}

void ElementInternals::ariaBrailleRoleDescription(const jsbind::DOMString& value) {
    emlite::Val::set("ariaBrailleRoleDescription", value);
}

jsbind::DOMString ElementInternals::ariaBusy() const {
    return emlite::Val::get("ariaBusy").as<jsbind::DOMString>();
}

void ElementInternals::ariaBusy(const jsbind::DOMString& value) {
    emlite::Val::set("ariaBusy", value);
}

jsbind::DOMString ElementInternals::ariaChecked() const {
    return emlite::Val::get("ariaChecked").as<jsbind::DOMString>();
}

void ElementInternals::ariaChecked(const jsbind::DOMString& value) {
    emlite::Val::set("ariaChecked", value);
}

jsbind::DOMString ElementInternals::ariaColCount() const {
    return emlite::Val::get("ariaColCount").as<jsbind::DOMString>();
}

void ElementInternals::ariaColCount(const jsbind::DOMString& value) {
    emlite::Val::set("ariaColCount", value);
}

jsbind::DOMString ElementInternals::ariaColIndex() const {
    return emlite::Val::get("ariaColIndex").as<jsbind::DOMString>();
}

void ElementInternals::ariaColIndex(const jsbind::DOMString& value) {
    emlite::Val::set("ariaColIndex", value);
}

jsbind::DOMString ElementInternals::ariaColIndexText() const {
    return emlite::Val::get("ariaColIndexText").as<jsbind::DOMString>();
}

void ElementInternals::ariaColIndexText(const jsbind::DOMString& value) {
    emlite::Val::set("ariaColIndexText", value);
}

jsbind::DOMString ElementInternals::ariaColSpan() const {
    return emlite::Val::get("ariaColSpan").as<jsbind::DOMString>();
}

void ElementInternals::ariaColSpan(const jsbind::DOMString& value) {
    emlite::Val::set("ariaColSpan", value);
}

jsbind::FrozenArray<Element> ElementInternals::ariaControlsElements() const {
    return emlite::Val::get("ariaControlsElements").as<jsbind::FrozenArray<Element>>();
}

void ElementInternals::ariaControlsElements(const jsbind::FrozenArray<Element>& value) {
    emlite::Val::set("ariaControlsElements", value);
}

jsbind::DOMString ElementInternals::ariaCurrent() const {
    return emlite::Val::get("ariaCurrent").as<jsbind::DOMString>();
}

void ElementInternals::ariaCurrent(const jsbind::DOMString& value) {
    emlite::Val::set("ariaCurrent", value);
}

jsbind::FrozenArray<Element> ElementInternals::ariaDescribedByElements() const {
    return emlite::Val::get("ariaDescribedByElements").as<jsbind::FrozenArray<Element>>();
}

void ElementInternals::ariaDescribedByElements(const jsbind::FrozenArray<Element>& value) {
    emlite::Val::set("ariaDescribedByElements", value);
}

jsbind::DOMString ElementInternals::ariaDescription() const {
    return emlite::Val::get("ariaDescription").as<jsbind::DOMString>();
}

void ElementInternals::ariaDescription(const jsbind::DOMString& value) {
    emlite::Val::set("ariaDescription", value);
}

jsbind::FrozenArray<Element> ElementInternals::ariaDetailsElements() const {
    return emlite::Val::get("ariaDetailsElements").as<jsbind::FrozenArray<Element>>();
}

void ElementInternals::ariaDetailsElements(const jsbind::FrozenArray<Element>& value) {
    emlite::Val::set("ariaDetailsElements", value);
}

jsbind::DOMString ElementInternals::ariaDisabled() const {
    return emlite::Val::get("ariaDisabled").as<jsbind::DOMString>();
}

void ElementInternals::ariaDisabled(const jsbind::DOMString& value) {
    emlite::Val::set("ariaDisabled", value);
}

jsbind::FrozenArray<Element> ElementInternals::ariaErrorMessageElements() const {
    return emlite::Val::get("ariaErrorMessageElements").as<jsbind::FrozenArray<Element>>();
}

void ElementInternals::ariaErrorMessageElements(const jsbind::FrozenArray<Element>& value) {
    emlite::Val::set("ariaErrorMessageElements", value);
}

jsbind::DOMString ElementInternals::ariaExpanded() const {
    return emlite::Val::get("ariaExpanded").as<jsbind::DOMString>();
}

void ElementInternals::ariaExpanded(const jsbind::DOMString& value) {
    emlite::Val::set("ariaExpanded", value);
}

jsbind::FrozenArray<Element> ElementInternals::ariaFlowToElements() const {
    return emlite::Val::get("ariaFlowToElements").as<jsbind::FrozenArray<Element>>();
}

void ElementInternals::ariaFlowToElements(const jsbind::FrozenArray<Element>& value) {
    emlite::Val::set("ariaFlowToElements", value);
}

jsbind::DOMString ElementInternals::ariaHasPopup() const {
    return emlite::Val::get("ariaHasPopup").as<jsbind::DOMString>();
}

void ElementInternals::ariaHasPopup(const jsbind::DOMString& value) {
    emlite::Val::set("ariaHasPopup", value);
}

jsbind::DOMString ElementInternals::ariaHidden() const {
    return emlite::Val::get("ariaHidden").as<jsbind::DOMString>();
}

void ElementInternals::ariaHidden(const jsbind::DOMString& value) {
    emlite::Val::set("ariaHidden", value);
}

jsbind::DOMString ElementInternals::ariaInvalid() const {
    return emlite::Val::get("ariaInvalid").as<jsbind::DOMString>();
}

void ElementInternals::ariaInvalid(const jsbind::DOMString& value) {
    emlite::Val::set("ariaInvalid", value);
}

jsbind::DOMString ElementInternals::ariaKeyShortcuts() const {
    return emlite::Val::get("ariaKeyShortcuts").as<jsbind::DOMString>();
}

void ElementInternals::ariaKeyShortcuts(const jsbind::DOMString& value) {
    emlite::Val::set("ariaKeyShortcuts", value);
}

jsbind::DOMString ElementInternals::ariaLabel() const {
    return emlite::Val::get("ariaLabel").as<jsbind::DOMString>();
}

void ElementInternals::ariaLabel(const jsbind::DOMString& value) {
    emlite::Val::set("ariaLabel", value);
}

jsbind::FrozenArray<Element> ElementInternals::ariaLabelledByElements() const {
    return emlite::Val::get("ariaLabelledByElements").as<jsbind::FrozenArray<Element>>();
}

void ElementInternals::ariaLabelledByElements(const jsbind::FrozenArray<Element>& value) {
    emlite::Val::set("ariaLabelledByElements", value);
}

jsbind::DOMString ElementInternals::ariaLevel() const {
    return emlite::Val::get("ariaLevel").as<jsbind::DOMString>();
}

void ElementInternals::ariaLevel(const jsbind::DOMString& value) {
    emlite::Val::set("ariaLevel", value);
}

jsbind::DOMString ElementInternals::ariaLive() const {
    return emlite::Val::get("ariaLive").as<jsbind::DOMString>();
}

void ElementInternals::ariaLive(const jsbind::DOMString& value) {
    emlite::Val::set("ariaLive", value);
}

jsbind::DOMString ElementInternals::ariaModal() const {
    return emlite::Val::get("ariaModal").as<jsbind::DOMString>();
}

void ElementInternals::ariaModal(const jsbind::DOMString& value) {
    emlite::Val::set("ariaModal", value);
}

jsbind::DOMString ElementInternals::ariaMultiLine() const {
    return emlite::Val::get("ariaMultiLine").as<jsbind::DOMString>();
}

void ElementInternals::ariaMultiLine(const jsbind::DOMString& value) {
    emlite::Val::set("ariaMultiLine", value);
}

jsbind::DOMString ElementInternals::ariaMultiSelectable() const {
    return emlite::Val::get("ariaMultiSelectable").as<jsbind::DOMString>();
}

void ElementInternals::ariaMultiSelectable(const jsbind::DOMString& value) {
    emlite::Val::set("ariaMultiSelectable", value);
}

jsbind::DOMString ElementInternals::ariaOrientation() const {
    return emlite::Val::get("ariaOrientation").as<jsbind::DOMString>();
}

void ElementInternals::ariaOrientation(const jsbind::DOMString& value) {
    emlite::Val::set("ariaOrientation", value);
}

jsbind::FrozenArray<Element> ElementInternals::ariaOwnsElements() const {
    return emlite::Val::get("ariaOwnsElements").as<jsbind::FrozenArray<Element>>();
}

void ElementInternals::ariaOwnsElements(const jsbind::FrozenArray<Element>& value) {
    emlite::Val::set("ariaOwnsElements", value);
}

jsbind::DOMString ElementInternals::ariaPlaceholder() const {
    return emlite::Val::get("ariaPlaceholder").as<jsbind::DOMString>();
}

void ElementInternals::ariaPlaceholder(const jsbind::DOMString& value) {
    emlite::Val::set("ariaPlaceholder", value);
}

jsbind::DOMString ElementInternals::ariaPosInSet() const {
    return emlite::Val::get("ariaPosInSet").as<jsbind::DOMString>();
}

void ElementInternals::ariaPosInSet(const jsbind::DOMString& value) {
    emlite::Val::set("ariaPosInSet", value);
}

jsbind::DOMString ElementInternals::ariaPressed() const {
    return emlite::Val::get("ariaPressed").as<jsbind::DOMString>();
}

void ElementInternals::ariaPressed(const jsbind::DOMString& value) {
    emlite::Val::set("ariaPressed", value);
}

jsbind::DOMString ElementInternals::ariaReadOnly() const {
    return emlite::Val::get("ariaReadOnly").as<jsbind::DOMString>();
}

void ElementInternals::ariaReadOnly(const jsbind::DOMString& value) {
    emlite::Val::set("ariaReadOnly", value);
}

jsbind::DOMString ElementInternals::ariaRelevant() const {
    return emlite::Val::get("ariaRelevant").as<jsbind::DOMString>();
}

void ElementInternals::ariaRelevant(const jsbind::DOMString& value) {
    emlite::Val::set("ariaRelevant", value);
}

jsbind::DOMString ElementInternals::ariaRequired() const {
    return emlite::Val::get("ariaRequired").as<jsbind::DOMString>();
}

void ElementInternals::ariaRequired(const jsbind::DOMString& value) {
    emlite::Val::set("ariaRequired", value);
}

jsbind::DOMString ElementInternals::ariaRoleDescription() const {
    return emlite::Val::get("ariaRoleDescription").as<jsbind::DOMString>();
}

void ElementInternals::ariaRoleDescription(const jsbind::DOMString& value) {
    emlite::Val::set("ariaRoleDescription", value);
}

jsbind::DOMString ElementInternals::ariaRowCount() const {
    return emlite::Val::get("ariaRowCount").as<jsbind::DOMString>();
}

void ElementInternals::ariaRowCount(const jsbind::DOMString& value) {
    emlite::Val::set("ariaRowCount", value);
}

jsbind::DOMString ElementInternals::ariaRowIndex() const {
    return emlite::Val::get("ariaRowIndex").as<jsbind::DOMString>();
}

void ElementInternals::ariaRowIndex(const jsbind::DOMString& value) {
    emlite::Val::set("ariaRowIndex", value);
}

jsbind::DOMString ElementInternals::ariaRowIndexText() const {
    return emlite::Val::get("ariaRowIndexText").as<jsbind::DOMString>();
}

void ElementInternals::ariaRowIndexText(const jsbind::DOMString& value) {
    emlite::Val::set("ariaRowIndexText", value);
}

jsbind::DOMString ElementInternals::ariaRowSpan() const {
    return emlite::Val::get("ariaRowSpan").as<jsbind::DOMString>();
}

void ElementInternals::ariaRowSpan(const jsbind::DOMString& value) {
    emlite::Val::set("ariaRowSpan", value);
}

jsbind::DOMString ElementInternals::ariaSelected() const {
    return emlite::Val::get("ariaSelected").as<jsbind::DOMString>();
}

void ElementInternals::ariaSelected(const jsbind::DOMString& value) {
    emlite::Val::set("ariaSelected", value);
}

jsbind::DOMString ElementInternals::ariaSetSize() const {
    return emlite::Val::get("ariaSetSize").as<jsbind::DOMString>();
}

void ElementInternals::ariaSetSize(const jsbind::DOMString& value) {
    emlite::Val::set("ariaSetSize", value);
}

jsbind::DOMString ElementInternals::ariaSort() const {
    return emlite::Val::get("ariaSort").as<jsbind::DOMString>();
}

void ElementInternals::ariaSort(const jsbind::DOMString& value) {
    emlite::Val::set("ariaSort", value);
}

jsbind::DOMString ElementInternals::ariaValueMax() const {
    return emlite::Val::get("ariaValueMax").as<jsbind::DOMString>();
}

void ElementInternals::ariaValueMax(const jsbind::DOMString& value) {
    emlite::Val::set("ariaValueMax", value);
}

jsbind::DOMString ElementInternals::ariaValueMin() const {
    return emlite::Val::get("ariaValueMin").as<jsbind::DOMString>();
}

void ElementInternals::ariaValueMin(const jsbind::DOMString& value) {
    emlite::Val::set("ariaValueMin", value);
}

jsbind::DOMString ElementInternals::ariaValueNow() const {
    return emlite::Val::get("ariaValueNow").as<jsbind::DOMString>();
}

void ElementInternals::ariaValueNow(const jsbind::DOMString& value) {
    emlite::Val::set("ariaValueNow", value);
}

jsbind::DOMString ElementInternals::ariaValueText() const {
    return emlite::Val::get("ariaValueText").as<jsbind::DOMString>();
}

void ElementInternals::ariaValueText(const jsbind::DOMString& value) {
    emlite::Val::set("ariaValueText", value);
}

