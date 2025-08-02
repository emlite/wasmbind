#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ShadowRoot;
class HTMLFormElement;
class ValidityStateFlags;
class HTMLElement;
class ValidityState;
class NodeList;
class CustomStateSet;
class Element;


class ValidityStateFlags : public emlite::Val {
  explicit ValidityStateFlags(Handle h) noexcept;
public:
    static ValidityStateFlags take_ownership(Handle h) noexcept;
    explicit ValidityStateFlags(const emlite::Val &val) noexcept;
    ValidityStateFlags() noexcept;
    [[nodiscard]] ValidityStateFlags clone() const noexcept;
    [[nodiscard]] bool valueMissing() const;
    void valueMissing(bool value);
    [[nodiscard]] bool typeMismatch() const;
    void typeMismatch(bool value);
    [[nodiscard]] bool patternMismatch() const;
    void patternMismatch(bool value);
    [[nodiscard]] bool tooLong() const;
    void tooLong(bool value);
    [[nodiscard]] bool tooShort() const;
    void tooShort(bool value);
    [[nodiscard]] bool rangeUnderflow() const;
    void rangeUnderflow(bool value);
    [[nodiscard]] bool rangeOverflow() const;
    void rangeOverflow(bool value);
    [[nodiscard]] bool stepMismatch() const;
    void stepMismatch(bool value);
    [[nodiscard]] bool badInput() const;
    void badInput(bool value);
    [[nodiscard]] bool customError() const;
    void customError(bool value);
};

/// The ElementInternals class.
/// [`ElementInternals`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals)
class ElementInternals : public emlite::Val {
    explicit ElementInternals(Handle h) noexcept;

public:
    explicit ElementInternals(const emlite::Val &val) noexcept;
    static ElementInternals take_ownership(Handle h) noexcept;

    [[nodiscard]] ElementInternals clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `shadowRoot` attribute.
    /// [`ElementInternals.shadowRoot`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/shadowRoot)
    [[nodiscard]] ShadowRoot shadowRoot() const;
    /// The setFormValue method.
    /// [`ElementInternals.setFormValue`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/setFormValue)
    jsbind::Undefined setFormValue(const jsbind::Any& value);
    /// The setFormValue method.
    /// [`ElementInternals.setFormValue`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/setFormValue)
    jsbind::Undefined setFormValue(const jsbind::Any& value, const jsbind::Any& state);
    /// Getter of the `form` attribute.
    /// [`ElementInternals.form`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// The setValidity method.
    /// [`ElementInternals.setValidity`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/setValidity)
    jsbind::Undefined setValidity();
    /// The setValidity method.
    /// [`ElementInternals.setValidity`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/setValidity)
    jsbind::Undefined setValidity(const ValidityStateFlags& flags);
    /// The setValidity method.
    /// [`ElementInternals.setValidity`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/setValidity)
    jsbind::Undefined setValidity(const ValidityStateFlags& flags, const jsbind::String& message);
    /// The setValidity method.
    /// [`ElementInternals.setValidity`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/setValidity)
    jsbind::Undefined setValidity(const ValidityStateFlags& flags, const jsbind::String& message, const HTMLElement& anchor);
    /// Getter of the `willValidate` attribute.
    /// [`ElementInternals.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// Getter of the `validity` attribute.
    /// [`ElementInternals.validity`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/validity)
    [[nodiscard]] ValidityState validity() const;
    /// Getter of the `validationMessage` attribute.
    /// [`ElementInternals.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`ElementInternals.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`ElementInternals.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/reportValidity)
    bool reportValidity();
    /// Getter of the `labels` attribute.
    /// [`ElementInternals.labels`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/labels)
    [[nodiscard]] NodeList labels() const;
    /// Getter of the `states` attribute.
    /// [`ElementInternals.states`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/states)
    [[nodiscard]] CustomStateSet states() const;
    /// Getter of the `role` attribute.
    /// [`ElementInternals.role`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/role)
    [[nodiscard]] jsbind::String role() const;
    /// Setter of the `role` attribute.
    /// [`ElementInternals.role`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/role)
    void role(const jsbind::String& value);
    /// Getter of the `ariaActiveDescendantElement` attribute.
    /// [`ElementInternals.ariaActiveDescendantElement`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaActiveDescendantElement)
    [[nodiscard]] Element ariaActiveDescendantElement() const;
    /// Setter of the `ariaActiveDescendantElement` attribute.
    /// [`ElementInternals.ariaActiveDescendantElement`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaActiveDescendantElement)
    void ariaActiveDescendantElement(const Element& value);
    /// Getter of the `ariaAtomic` attribute.
    /// [`ElementInternals.ariaAtomic`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaAtomic)
    [[nodiscard]] jsbind::String ariaAtomic() const;
    /// Setter of the `ariaAtomic` attribute.
    /// [`ElementInternals.ariaAtomic`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaAtomic)
    void ariaAtomic(const jsbind::String& value);
    /// Getter of the `ariaAutoComplete` attribute.
    /// [`ElementInternals.ariaAutoComplete`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaAutoComplete)
    [[nodiscard]] jsbind::String ariaAutoComplete() const;
    /// Setter of the `ariaAutoComplete` attribute.
    /// [`ElementInternals.ariaAutoComplete`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaAutoComplete)
    void ariaAutoComplete(const jsbind::String& value);
    /// Getter of the `ariaBrailleLabel` attribute.
    /// [`ElementInternals.ariaBrailleLabel`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaBrailleLabel)
    [[nodiscard]] jsbind::String ariaBrailleLabel() const;
    /// Setter of the `ariaBrailleLabel` attribute.
    /// [`ElementInternals.ariaBrailleLabel`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaBrailleLabel)
    void ariaBrailleLabel(const jsbind::String& value);
    /// Getter of the `ariaBrailleRoleDescription` attribute.
    /// [`ElementInternals.ariaBrailleRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaBrailleRoleDescription)
    [[nodiscard]] jsbind::String ariaBrailleRoleDescription() const;
    /// Setter of the `ariaBrailleRoleDescription` attribute.
    /// [`ElementInternals.ariaBrailleRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaBrailleRoleDescription)
    void ariaBrailleRoleDescription(const jsbind::String& value);
    /// Getter of the `ariaBusy` attribute.
    /// [`ElementInternals.ariaBusy`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaBusy)
    [[nodiscard]] jsbind::String ariaBusy() const;
    /// Setter of the `ariaBusy` attribute.
    /// [`ElementInternals.ariaBusy`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaBusy)
    void ariaBusy(const jsbind::String& value);
    /// Getter of the `ariaChecked` attribute.
    /// [`ElementInternals.ariaChecked`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaChecked)
    [[nodiscard]] jsbind::String ariaChecked() const;
    /// Setter of the `ariaChecked` attribute.
    /// [`ElementInternals.ariaChecked`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaChecked)
    void ariaChecked(const jsbind::String& value);
    /// Getter of the `ariaColCount` attribute.
    /// [`ElementInternals.ariaColCount`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColCount)
    [[nodiscard]] jsbind::String ariaColCount() const;
    /// Setter of the `ariaColCount` attribute.
    /// [`ElementInternals.ariaColCount`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColCount)
    void ariaColCount(const jsbind::String& value);
    /// Getter of the `ariaColIndex` attribute.
    /// [`ElementInternals.ariaColIndex`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColIndex)
    [[nodiscard]] jsbind::String ariaColIndex() const;
    /// Setter of the `ariaColIndex` attribute.
    /// [`ElementInternals.ariaColIndex`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColIndex)
    void ariaColIndex(const jsbind::String& value);
    /// Getter of the `ariaColIndexText` attribute.
    /// [`ElementInternals.ariaColIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColIndexText)
    [[nodiscard]] jsbind::String ariaColIndexText() const;
    /// Setter of the `ariaColIndexText` attribute.
    /// [`ElementInternals.ariaColIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColIndexText)
    void ariaColIndexText(const jsbind::String& value);
    /// Getter of the `ariaColSpan` attribute.
    /// [`ElementInternals.ariaColSpan`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColSpan)
    [[nodiscard]] jsbind::String ariaColSpan() const;
    /// Setter of the `ariaColSpan` attribute.
    /// [`ElementInternals.ariaColSpan`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaColSpan)
    void ariaColSpan(const jsbind::String& value);
    /// Getter of the `ariaControlsElements` attribute.
    /// [`ElementInternals.ariaControlsElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaControlsElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaControlsElements() const;
    /// Setter of the `ariaControlsElements` attribute.
    /// [`ElementInternals.ariaControlsElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaControlsElements)
    void ariaControlsElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaCurrent` attribute.
    /// [`ElementInternals.ariaCurrent`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaCurrent)
    [[nodiscard]] jsbind::String ariaCurrent() const;
    /// Setter of the `ariaCurrent` attribute.
    /// [`ElementInternals.ariaCurrent`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaCurrent)
    void ariaCurrent(const jsbind::String& value);
    /// Getter of the `ariaDescribedByElements` attribute.
    /// [`ElementInternals.ariaDescribedByElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDescribedByElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaDescribedByElements() const;
    /// Setter of the `ariaDescribedByElements` attribute.
    /// [`ElementInternals.ariaDescribedByElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDescribedByElements)
    void ariaDescribedByElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaDescription` attribute.
    /// [`ElementInternals.ariaDescription`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDescription)
    [[nodiscard]] jsbind::String ariaDescription() const;
    /// Setter of the `ariaDescription` attribute.
    /// [`ElementInternals.ariaDescription`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDescription)
    void ariaDescription(const jsbind::String& value);
    /// Getter of the `ariaDetailsElements` attribute.
    /// [`ElementInternals.ariaDetailsElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDetailsElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaDetailsElements() const;
    /// Setter of the `ariaDetailsElements` attribute.
    /// [`ElementInternals.ariaDetailsElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDetailsElements)
    void ariaDetailsElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaDisabled` attribute.
    /// [`ElementInternals.ariaDisabled`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDisabled)
    [[nodiscard]] jsbind::String ariaDisabled() const;
    /// Setter of the `ariaDisabled` attribute.
    /// [`ElementInternals.ariaDisabled`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaDisabled)
    void ariaDisabled(const jsbind::String& value);
    /// Getter of the `ariaErrorMessageElements` attribute.
    /// [`ElementInternals.ariaErrorMessageElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaErrorMessageElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaErrorMessageElements() const;
    /// Setter of the `ariaErrorMessageElements` attribute.
    /// [`ElementInternals.ariaErrorMessageElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaErrorMessageElements)
    void ariaErrorMessageElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaExpanded` attribute.
    /// [`ElementInternals.ariaExpanded`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaExpanded)
    [[nodiscard]] jsbind::String ariaExpanded() const;
    /// Setter of the `ariaExpanded` attribute.
    /// [`ElementInternals.ariaExpanded`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaExpanded)
    void ariaExpanded(const jsbind::String& value);
    /// Getter of the `ariaFlowToElements` attribute.
    /// [`ElementInternals.ariaFlowToElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaFlowToElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaFlowToElements() const;
    /// Setter of the `ariaFlowToElements` attribute.
    /// [`ElementInternals.ariaFlowToElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaFlowToElements)
    void ariaFlowToElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaHasPopup` attribute.
    /// [`ElementInternals.ariaHasPopup`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaHasPopup)
    [[nodiscard]] jsbind::String ariaHasPopup() const;
    /// Setter of the `ariaHasPopup` attribute.
    /// [`ElementInternals.ariaHasPopup`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaHasPopup)
    void ariaHasPopup(const jsbind::String& value);
    /// Getter of the `ariaHidden` attribute.
    /// [`ElementInternals.ariaHidden`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaHidden)
    [[nodiscard]] jsbind::String ariaHidden() const;
    /// Setter of the `ariaHidden` attribute.
    /// [`ElementInternals.ariaHidden`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaHidden)
    void ariaHidden(const jsbind::String& value);
    /// Getter of the `ariaInvalid` attribute.
    /// [`ElementInternals.ariaInvalid`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaInvalid)
    [[nodiscard]] jsbind::String ariaInvalid() const;
    /// Setter of the `ariaInvalid` attribute.
    /// [`ElementInternals.ariaInvalid`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaInvalid)
    void ariaInvalid(const jsbind::String& value);
    /// Getter of the `ariaKeyShortcuts` attribute.
    /// [`ElementInternals.ariaKeyShortcuts`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaKeyShortcuts)
    [[nodiscard]] jsbind::String ariaKeyShortcuts() const;
    /// Setter of the `ariaKeyShortcuts` attribute.
    /// [`ElementInternals.ariaKeyShortcuts`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaKeyShortcuts)
    void ariaKeyShortcuts(const jsbind::String& value);
    /// Getter of the `ariaLabel` attribute.
    /// [`ElementInternals.ariaLabel`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLabel)
    [[nodiscard]] jsbind::String ariaLabel() const;
    /// Setter of the `ariaLabel` attribute.
    /// [`ElementInternals.ariaLabel`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLabel)
    void ariaLabel(const jsbind::String& value);
    /// Getter of the `ariaLabelledByElements` attribute.
    /// [`ElementInternals.ariaLabelledByElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLabelledByElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaLabelledByElements() const;
    /// Setter of the `ariaLabelledByElements` attribute.
    /// [`ElementInternals.ariaLabelledByElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLabelledByElements)
    void ariaLabelledByElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaLevel` attribute.
    /// [`ElementInternals.ariaLevel`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLevel)
    [[nodiscard]] jsbind::String ariaLevel() const;
    /// Setter of the `ariaLevel` attribute.
    /// [`ElementInternals.ariaLevel`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLevel)
    void ariaLevel(const jsbind::String& value);
    /// Getter of the `ariaLive` attribute.
    /// [`ElementInternals.ariaLive`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLive)
    [[nodiscard]] jsbind::String ariaLive() const;
    /// Setter of the `ariaLive` attribute.
    /// [`ElementInternals.ariaLive`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaLive)
    void ariaLive(const jsbind::String& value);
    /// Getter of the `ariaModal` attribute.
    /// [`ElementInternals.ariaModal`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaModal)
    [[nodiscard]] jsbind::String ariaModal() const;
    /// Setter of the `ariaModal` attribute.
    /// [`ElementInternals.ariaModal`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaModal)
    void ariaModal(const jsbind::String& value);
    /// Getter of the `ariaMultiLine` attribute.
    /// [`ElementInternals.ariaMultiLine`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaMultiLine)
    [[nodiscard]] jsbind::String ariaMultiLine() const;
    /// Setter of the `ariaMultiLine` attribute.
    /// [`ElementInternals.ariaMultiLine`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaMultiLine)
    void ariaMultiLine(const jsbind::String& value);
    /// Getter of the `ariaMultiSelectable` attribute.
    /// [`ElementInternals.ariaMultiSelectable`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaMultiSelectable)
    [[nodiscard]] jsbind::String ariaMultiSelectable() const;
    /// Setter of the `ariaMultiSelectable` attribute.
    /// [`ElementInternals.ariaMultiSelectable`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaMultiSelectable)
    void ariaMultiSelectable(const jsbind::String& value);
    /// Getter of the `ariaOrientation` attribute.
    /// [`ElementInternals.ariaOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaOrientation)
    [[nodiscard]] jsbind::String ariaOrientation() const;
    /// Setter of the `ariaOrientation` attribute.
    /// [`ElementInternals.ariaOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaOrientation)
    void ariaOrientation(const jsbind::String& value);
    /// Getter of the `ariaOwnsElements` attribute.
    /// [`ElementInternals.ariaOwnsElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaOwnsElements)
    [[nodiscard]] jsbind::TypedArray<Element> ariaOwnsElements() const;
    /// Setter of the `ariaOwnsElements` attribute.
    /// [`ElementInternals.ariaOwnsElements`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaOwnsElements)
    void ariaOwnsElements(const jsbind::TypedArray<Element>& value);
    /// Getter of the `ariaPlaceholder` attribute.
    /// [`ElementInternals.ariaPlaceholder`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaPlaceholder)
    [[nodiscard]] jsbind::String ariaPlaceholder() const;
    /// Setter of the `ariaPlaceholder` attribute.
    /// [`ElementInternals.ariaPlaceholder`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaPlaceholder)
    void ariaPlaceholder(const jsbind::String& value);
    /// Getter of the `ariaPosInSet` attribute.
    /// [`ElementInternals.ariaPosInSet`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaPosInSet)
    [[nodiscard]] jsbind::String ariaPosInSet() const;
    /// Setter of the `ariaPosInSet` attribute.
    /// [`ElementInternals.ariaPosInSet`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaPosInSet)
    void ariaPosInSet(const jsbind::String& value);
    /// Getter of the `ariaPressed` attribute.
    /// [`ElementInternals.ariaPressed`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaPressed)
    [[nodiscard]] jsbind::String ariaPressed() const;
    /// Setter of the `ariaPressed` attribute.
    /// [`ElementInternals.ariaPressed`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaPressed)
    void ariaPressed(const jsbind::String& value);
    /// Getter of the `ariaReadOnly` attribute.
    /// [`ElementInternals.ariaReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaReadOnly)
    [[nodiscard]] jsbind::String ariaReadOnly() const;
    /// Setter of the `ariaReadOnly` attribute.
    /// [`ElementInternals.ariaReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaReadOnly)
    void ariaReadOnly(const jsbind::String& value);
    /// Getter of the `ariaRelevant` attribute.
    /// [`ElementInternals.ariaRelevant`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRelevant)
    [[nodiscard]] jsbind::String ariaRelevant() const;
    /// Setter of the `ariaRelevant` attribute.
    /// [`ElementInternals.ariaRelevant`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRelevant)
    void ariaRelevant(const jsbind::String& value);
    /// Getter of the `ariaRequired` attribute.
    /// [`ElementInternals.ariaRequired`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRequired)
    [[nodiscard]] jsbind::String ariaRequired() const;
    /// Setter of the `ariaRequired` attribute.
    /// [`ElementInternals.ariaRequired`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRequired)
    void ariaRequired(const jsbind::String& value);
    /// Getter of the `ariaRoleDescription` attribute.
    /// [`ElementInternals.ariaRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRoleDescription)
    [[nodiscard]] jsbind::String ariaRoleDescription() const;
    /// Setter of the `ariaRoleDescription` attribute.
    /// [`ElementInternals.ariaRoleDescription`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRoleDescription)
    void ariaRoleDescription(const jsbind::String& value);
    /// Getter of the `ariaRowCount` attribute.
    /// [`ElementInternals.ariaRowCount`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowCount)
    [[nodiscard]] jsbind::String ariaRowCount() const;
    /// Setter of the `ariaRowCount` attribute.
    /// [`ElementInternals.ariaRowCount`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowCount)
    void ariaRowCount(const jsbind::String& value);
    /// Getter of the `ariaRowIndex` attribute.
    /// [`ElementInternals.ariaRowIndex`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowIndex)
    [[nodiscard]] jsbind::String ariaRowIndex() const;
    /// Setter of the `ariaRowIndex` attribute.
    /// [`ElementInternals.ariaRowIndex`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowIndex)
    void ariaRowIndex(const jsbind::String& value);
    /// Getter of the `ariaRowIndexText` attribute.
    /// [`ElementInternals.ariaRowIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowIndexText)
    [[nodiscard]] jsbind::String ariaRowIndexText() const;
    /// Setter of the `ariaRowIndexText` attribute.
    /// [`ElementInternals.ariaRowIndexText`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowIndexText)
    void ariaRowIndexText(const jsbind::String& value);
    /// Getter of the `ariaRowSpan` attribute.
    /// [`ElementInternals.ariaRowSpan`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowSpan)
    [[nodiscard]] jsbind::String ariaRowSpan() const;
    /// Setter of the `ariaRowSpan` attribute.
    /// [`ElementInternals.ariaRowSpan`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaRowSpan)
    void ariaRowSpan(const jsbind::String& value);
    /// Getter of the `ariaSelected` attribute.
    /// [`ElementInternals.ariaSelected`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaSelected)
    [[nodiscard]] jsbind::String ariaSelected() const;
    /// Setter of the `ariaSelected` attribute.
    /// [`ElementInternals.ariaSelected`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaSelected)
    void ariaSelected(const jsbind::String& value);
    /// Getter of the `ariaSetSize` attribute.
    /// [`ElementInternals.ariaSetSize`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaSetSize)
    [[nodiscard]] jsbind::String ariaSetSize() const;
    /// Setter of the `ariaSetSize` attribute.
    /// [`ElementInternals.ariaSetSize`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaSetSize)
    void ariaSetSize(const jsbind::String& value);
    /// Getter of the `ariaSort` attribute.
    /// [`ElementInternals.ariaSort`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaSort)
    [[nodiscard]] jsbind::String ariaSort() const;
    /// Setter of the `ariaSort` attribute.
    /// [`ElementInternals.ariaSort`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaSort)
    void ariaSort(const jsbind::String& value);
    /// Getter of the `ariaValueMax` attribute.
    /// [`ElementInternals.ariaValueMax`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueMax)
    [[nodiscard]] jsbind::String ariaValueMax() const;
    /// Setter of the `ariaValueMax` attribute.
    /// [`ElementInternals.ariaValueMax`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueMax)
    void ariaValueMax(const jsbind::String& value);
    /// Getter of the `ariaValueMin` attribute.
    /// [`ElementInternals.ariaValueMin`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueMin)
    [[nodiscard]] jsbind::String ariaValueMin() const;
    /// Setter of the `ariaValueMin` attribute.
    /// [`ElementInternals.ariaValueMin`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueMin)
    void ariaValueMin(const jsbind::String& value);
    /// Getter of the `ariaValueNow` attribute.
    /// [`ElementInternals.ariaValueNow`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueNow)
    [[nodiscard]] jsbind::String ariaValueNow() const;
    /// Setter of the `ariaValueNow` attribute.
    /// [`ElementInternals.ariaValueNow`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueNow)
    void ariaValueNow(const jsbind::String& value);
    /// Getter of the `ariaValueText` attribute.
    /// [`ElementInternals.ariaValueText`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueText)
    [[nodiscard]] jsbind::String ariaValueText() const;
    /// Setter of the `ariaValueText` attribute.
    /// [`ElementInternals.ariaValueText`](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals/ariaValueText)
    void ariaValueText(const jsbind::String& value);
};

