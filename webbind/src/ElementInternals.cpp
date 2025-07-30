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

jsbind::Undefined ElementInternals::setFormValue(const jsbind::Any& value) {
    return emlite::Val::call("setFormValue", value).as<jsbind::Undefined>();
}

jsbind::Undefined ElementInternals::setFormValue(const jsbind::Any& value, const jsbind::Any& state) {
    return emlite::Val::call("setFormValue", value, state).as<jsbind::Undefined>();
}

HTMLFormElement ElementInternals::form() const {
    return emlite::Val::get("form").as<HTMLFormElement>();
}

jsbind::Undefined ElementInternals::setValidity() {
    return emlite::Val::call("setValidity").as<jsbind::Undefined>();
}

jsbind::Undefined ElementInternals::setValidity(const ValidityStateFlags& flags) {
    return emlite::Val::call("setValidity", flags).as<jsbind::Undefined>();
}

jsbind::Undefined ElementInternals::setValidity(const ValidityStateFlags& flags, const jsbind::String& message) {
    return emlite::Val::call("setValidity", flags, message).as<jsbind::Undefined>();
}

jsbind::Undefined ElementInternals::setValidity(const ValidityStateFlags& flags, const jsbind::String& message, const HTMLElement& anchor) {
    return emlite::Val::call("setValidity", flags, message, anchor).as<jsbind::Undefined>();
}

bool ElementInternals::willValidate() const {
    return emlite::Val::get("willValidate").as<bool>();
}

ValidityState ElementInternals::validity() const {
    return emlite::Val::get("validity").as<ValidityState>();
}

jsbind::String ElementInternals::validationMessage() const {
    return emlite::Val::get("validationMessage").as<jsbind::String>();
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

jsbind::String ElementInternals::role() const {
    return emlite::Val::get("role").as<jsbind::String>();
}

void ElementInternals::role(const jsbind::String& value) {
    emlite::Val::set("role", value);
}

Element ElementInternals::ariaActiveDescendantElement() const {
    return emlite::Val::get("ariaActiveDescendantElement").as<Element>();
}

void ElementInternals::ariaActiveDescendantElement(const Element& value) {
    emlite::Val::set("ariaActiveDescendantElement", value);
}

jsbind::String ElementInternals::ariaAtomic() const {
    return emlite::Val::get("ariaAtomic").as<jsbind::String>();
}

void ElementInternals::ariaAtomic(const jsbind::String& value) {
    emlite::Val::set("ariaAtomic", value);
}

jsbind::String ElementInternals::ariaAutoComplete() const {
    return emlite::Val::get("ariaAutoComplete").as<jsbind::String>();
}

void ElementInternals::ariaAutoComplete(const jsbind::String& value) {
    emlite::Val::set("ariaAutoComplete", value);
}

jsbind::String ElementInternals::ariaBrailleLabel() const {
    return emlite::Val::get("ariaBrailleLabel").as<jsbind::String>();
}

void ElementInternals::ariaBrailleLabel(const jsbind::String& value) {
    emlite::Val::set("ariaBrailleLabel", value);
}

jsbind::String ElementInternals::ariaBrailleRoleDescription() const {
    return emlite::Val::get("ariaBrailleRoleDescription").as<jsbind::String>();
}

void ElementInternals::ariaBrailleRoleDescription(const jsbind::String& value) {
    emlite::Val::set("ariaBrailleRoleDescription", value);
}

jsbind::String ElementInternals::ariaBusy() const {
    return emlite::Val::get("ariaBusy").as<jsbind::String>();
}

void ElementInternals::ariaBusy(const jsbind::String& value) {
    emlite::Val::set("ariaBusy", value);
}

jsbind::String ElementInternals::ariaChecked() const {
    return emlite::Val::get("ariaChecked").as<jsbind::String>();
}

void ElementInternals::ariaChecked(const jsbind::String& value) {
    emlite::Val::set("ariaChecked", value);
}

jsbind::String ElementInternals::ariaColCount() const {
    return emlite::Val::get("ariaColCount").as<jsbind::String>();
}

void ElementInternals::ariaColCount(const jsbind::String& value) {
    emlite::Val::set("ariaColCount", value);
}

jsbind::String ElementInternals::ariaColIndex() const {
    return emlite::Val::get("ariaColIndex").as<jsbind::String>();
}

void ElementInternals::ariaColIndex(const jsbind::String& value) {
    emlite::Val::set("ariaColIndex", value);
}

jsbind::String ElementInternals::ariaColIndexText() const {
    return emlite::Val::get("ariaColIndexText").as<jsbind::String>();
}

void ElementInternals::ariaColIndexText(const jsbind::String& value) {
    emlite::Val::set("ariaColIndexText", value);
}

jsbind::String ElementInternals::ariaColSpan() const {
    return emlite::Val::get("ariaColSpan").as<jsbind::String>();
}

void ElementInternals::ariaColSpan(const jsbind::String& value) {
    emlite::Val::set("ariaColSpan", value);
}

jsbind::TypedArray<Element> ElementInternals::ariaControlsElements() const {
    return emlite::Val::get("ariaControlsElements").as<jsbind::TypedArray<Element>>();
}

void ElementInternals::ariaControlsElements(const jsbind::TypedArray<Element>& value) {
    emlite::Val::set("ariaControlsElements", value);
}

jsbind::String ElementInternals::ariaCurrent() const {
    return emlite::Val::get("ariaCurrent").as<jsbind::String>();
}

void ElementInternals::ariaCurrent(const jsbind::String& value) {
    emlite::Val::set("ariaCurrent", value);
}

jsbind::TypedArray<Element> ElementInternals::ariaDescribedByElements() const {
    return emlite::Val::get("ariaDescribedByElements").as<jsbind::TypedArray<Element>>();
}

void ElementInternals::ariaDescribedByElements(const jsbind::TypedArray<Element>& value) {
    emlite::Val::set("ariaDescribedByElements", value);
}

jsbind::String ElementInternals::ariaDescription() const {
    return emlite::Val::get("ariaDescription").as<jsbind::String>();
}

void ElementInternals::ariaDescription(const jsbind::String& value) {
    emlite::Val::set("ariaDescription", value);
}

jsbind::TypedArray<Element> ElementInternals::ariaDetailsElements() const {
    return emlite::Val::get("ariaDetailsElements").as<jsbind::TypedArray<Element>>();
}

void ElementInternals::ariaDetailsElements(const jsbind::TypedArray<Element>& value) {
    emlite::Val::set("ariaDetailsElements", value);
}

jsbind::String ElementInternals::ariaDisabled() const {
    return emlite::Val::get("ariaDisabled").as<jsbind::String>();
}

void ElementInternals::ariaDisabled(const jsbind::String& value) {
    emlite::Val::set("ariaDisabled", value);
}

jsbind::TypedArray<Element> ElementInternals::ariaErrorMessageElements() const {
    return emlite::Val::get("ariaErrorMessageElements").as<jsbind::TypedArray<Element>>();
}

void ElementInternals::ariaErrorMessageElements(const jsbind::TypedArray<Element>& value) {
    emlite::Val::set("ariaErrorMessageElements", value);
}

jsbind::String ElementInternals::ariaExpanded() const {
    return emlite::Val::get("ariaExpanded").as<jsbind::String>();
}

void ElementInternals::ariaExpanded(const jsbind::String& value) {
    emlite::Val::set("ariaExpanded", value);
}

jsbind::TypedArray<Element> ElementInternals::ariaFlowToElements() const {
    return emlite::Val::get("ariaFlowToElements").as<jsbind::TypedArray<Element>>();
}

void ElementInternals::ariaFlowToElements(const jsbind::TypedArray<Element>& value) {
    emlite::Val::set("ariaFlowToElements", value);
}

jsbind::String ElementInternals::ariaHasPopup() const {
    return emlite::Val::get("ariaHasPopup").as<jsbind::String>();
}

void ElementInternals::ariaHasPopup(const jsbind::String& value) {
    emlite::Val::set("ariaHasPopup", value);
}

jsbind::String ElementInternals::ariaHidden() const {
    return emlite::Val::get("ariaHidden").as<jsbind::String>();
}

void ElementInternals::ariaHidden(const jsbind::String& value) {
    emlite::Val::set("ariaHidden", value);
}

jsbind::String ElementInternals::ariaInvalid() const {
    return emlite::Val::get("ariaInvalid").as<jsbind::String>();
}

void ElementInternals::ariaInvalid(const jsbind::String& value) {
    emlite::Val::set("ariaInvalid", value);
}

jsbind::String ElementInternals::ariaKeyShortcuts() const {
    return emlite::Val::get("ariaKeyShortcuts").as<jsbind::String>();
}

void ElementInternals::ariaKeyShortcuts(const jsbind::String& value) {
    emlite::Val::set("ariaKeyShortcuts", value);
}

jsbind::String ElementInternals::ariaLabel() const {
    return emlite::Val::get("ariaLabel").as<jsbind::String>();
}

void ElementInternals::ariaLabel(const jsbind::String& value) {
    emlite::Val::set("ariaLabel", value);
}

jsbind::TypedArray<Element> ElementInternals::ariaLabelledByElements() const {
    return emlite::Val::get("ariaLabelledByElements").as<jsbind::TypedArray<Element>>();
}

void ElementInternals::ariaLabelledByElements(const jsbind::TypedArray<Element>& value) {
    emlite::Val::set("ariaLabelledByElements", value);
}

jsbind::String ElementInternals::ariaLevel() const {
    return emlite::Val::get("ariaLevel").as<jsbind::String>();
}

void ElementInternals::ariaLevel(const jsbind::String& value) {
    emlite::Val::set("ariaLevel", value);
}

jsbind::String ElementInternals::ariaLive() const {
    return emlite::Val::get("ariaLive").as<jsbind::String>();
}

void ElementInternals::ariaLive(const jsbind::String& value) {
    emlite::Val::set("ariaLive", value);
}

jsbind::String ElementInternals::ariaModal() const {
    return emlite::Val::get("ariaModal").as<jsbind::String>();
}

void ElementInternals::ariaModal(const jsbind::String& value) {
    emlite::Val::set("ariaModal", value);
}

jsbind::String ElementInternals::ariaMultiLine() const {
    return emlite::Val::get("ariaMultiLine").as<jsbind::String>();
}

void ElementInternals::ariaMultiLine(const jsbind::String& value) {
    emlite::Val::set("ariaMultiLine", value);
}

jsbind::String ElementInternals::ariaMultiSelectable() const {
    return emlite::Val::get("ariaMultiSelectable").as<jsbind::String>();
}

void ElementInternals::ariaMultiSelectable(const jsbind::String& value) {
    emlite::Val::set("ariaMultiSelectable", value);
}

jsbind::String ElementInternals::ariaOrientation() const {
    return emlite::Val::get("ariaOrientation").as<jsbind::String>();
}

void ElementInternals::ariaOrientation(const jsbind::String& value) {
    emlite::Val::set("ariaOrientation", value);
}

jsbind::TypedArray<Element> ElementInternals::ariaOwnsElements() const {
    return emlite::Val::get("ariaOwnsElements").as<jsbind::TypedArray<Element>>();
}

void ElementInternals::ariaOwnsElements(const jsbind::TypedArray<Element>& value) {
    emlite::Val::set("ariaOwnsElements", value);
}

jsbind::String ElementInternals::ariaPlaceholder() const {
    return emlite::Val::get("ariaPlaceholder").as<jsbind::String>();
}

void ElementInternals::ariaPlaceholder(const jsbind::String& value) {
    emlite::Val::set("ariaPlaceholder", value);
}

jsbind::String ElementInternals::ariaPosInSet() const {
    return emlite::Val::get("ariaPosInSet").as<jsbind::String>();
}

void ElementInternals::ariaPosInSet(const jsbind::String& value) {
    emlite::Val::set("ariaPosInSet", value);
}

jsbind::String ElementInternals::ariaPressed() const {
    return emlite::Val::get("ariaPressed").as<jsbind::String>();
}

void ElementInternals::ariaPressed(const jsbind::String& value) {
    emlite::Val::set("ariaPressed", value);
}

jsbind::String ElementInternals::ariaReadOnly() const {
    return emlite::Val::get("ariaReadOnly").as<jsbind::String>();
}

void ElementInternals::ariaReadOnly(const jsbind::String& value) {
    emlite::Val::set("ariaReadOnly", value);
}

jsbind::String ElementInternals::ariaRelevant() const {
    return emlite::Val::get("ariaRelevant").as<jsbind::String>();
}

void ElementInternals::ariaRelevant(const jsbind::String& value) {
    emlite::Val::set("ariaRelevant", value);
}

jsbind::String ElementInternals::ariaRequired() const {
    return emlite::Val::get("ariaRequired").as<jsbind::String>();
}

void ElementInternals::ariaRequired(const jsbind::String& value) {
    emlite::Val::set("ariaRequired", value);
}

jsbind::String ElementInternals::ariaRoleDescription() const {
    return emlite::Val::get("ariaRoleDescription").as<jsbind::String>();
}

void ElementInternals::ariaRoleDescription(const jsbind::String& value) {
    emlite::Val::set("ariaRoleDescription", value);
}

jsbind::String ElementInternals::ariaRowCount() const {
    return emlite::Val::get("ariaRowCount").as<jsbind::String>();
}

void ElementInternals::ariaRowCount(const jsbind::String& value) {
    emlite::Val::set("ariaRowCount", value);
}

jsbind::String ElementInternals::ariaRowIndex() const {
    return emlite::Val::get("ariaRowIndex").as<jsbind::String>();
}

void ElementInternals::ariaRowIndex(const jsbind::String& value) {
    emlite::Val::set("ariaRowIndex", value);
}

jsbind::String ElementInternals::ariaRowIndexText() const {
    return emlite::Val::get("ariaRowIndexText").as<jsbind::String>();
}

void ElementInternals::ariaRowIndexText(const jsbind::String& value) {
    emlite::Val::set("ariaRowIndexText", value);
}

jsbind::String ElementInternals::ariaRowSpan() const {
    return emlite::Val::get("ariaRowSpan").as<jsbind::String>();
}

void ElementInternals::ariaRowSpan(const jsbind::String& value) {
    emlite::Val::set("ariaRowSpan", value);
}

jsbind::String ElementInternals::ariaSelected() const {
    return emlite::Val::get("ariaSelected").as<jsbind::String>();
}

void ElementInternals::ariaSelected(const jsbind::String& value) {
    emlite::Val::set("ariaSelected", value);
}

jsbind::String ElementInternals::ariaSetSize() const {
    return emlite::Val::get("ariaSetSize").as<jsbind::String>();
}

void ElementInternals::ariaSetSize(const jsbind::String& value) {
    emlite::Val::set("ariaSetSize", value);
}

jsbind::String ElementInternals::ariaSort() const {
    return emlite::Val::get("ariaSort").as<jsbind::String>();
}

void ElementInternals::ariaSort(const jsbind::String& value) {
    emlite::Val::set("ariaSort", value);
}

jsbind::String ElementInternals::ariaValueMax() const {
    return emlite::Val::get("ariaValueMax").as<jsbind::String>();
}

void ElementInternals::ariaValueMax(const jsbind::String& value) {
    emlite::Val::set("ariaValueMax", value);
}

jsbind::String ElementInternals::ariaValueMin() const {
    return emlite::Val::get("ariaValueMin").as<jsbind::String>();
}

void ElementInternals::ariaValueMin(const jsbind::String& value) {
    emlite::Val::set("ariaValueMin", value);
}

jsbind::String ElementInternals::ariaValueNow() const {
    return emlite::Val::get("ariaValueNow").as<jsbind::String>();
}

void ElementInternals::ariaValueNow(const jsbind::String& value) {
    emlite::Val::set("ariaValueNow", value);
}

jsbind::String ElementInternals::ariaValueText() const {
    return emlite::Val::get("ariaValueText").as<jsbind::String>();
}

void ElementInternals::ariaValueText(const jsbind::String& value) {
    emlite::Val::set("ariaValueText", value);
}

