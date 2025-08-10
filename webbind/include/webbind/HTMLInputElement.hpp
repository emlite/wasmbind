#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"
#include "enums.hpp"

namespace webbind {

class HTMLFormElement;
class FileList;
class HTMLDataListElement;
class ValidityState;
class NodeList;
class FileSystemEntry;
class Element;

/// Interface HTMLInputElement
/// [`HTMLInputElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement)
class HTMLInputElement : public HTMLElement {
    explicit HTMLInputElement(Handle h) noexcept;
public:
    explicit HTMLInputElement(const emlite::Val &val) noexcept;
    static HTMLInputElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLInputElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLInputElement(..)` constructor, creating a new HTMLInputElement instance
    HTMLInputElement();
    /// Getter of the `accept` attribute.
    /// [`HTMLInputElement.accept`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/accept)
    [[nodiscard]] jsbind::String accept() const;
    /// Setter of the `accept` attribute.
    /// [`HTMLInputElement.accept`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/accept)
    void accept(const jsbind::String& value);
    /// Getter of the `alpha` attribute.
    /// [`HTMLInputElement.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/alpha)
    [[nodiscard]] bool alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`HTMLInputElement.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/alpha)
    void alpha(bool value);
    /// Getter of the `alt` attribute.
    /// [`HTMLInputElement.alt`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/alt)
    [[nodiscard]] jsbind::String alt() const;
    /// Setter of the `alt` attribute.
    /// [`HTMLInputElement.alt`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/alt)
    void alt(const jsbind::String& value);
    /// Getter of the `autocomplete` attribute.
    /// [`HTMLInputElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/autocomplete)
    [[nodiscard]] jsbind::String autocomplete() const;
    /// Setter of the `autocomplete` attribute.
    /// [`HTMLInputElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/autocomplete)
    void autocomplete(const jsbind::String& value);
    /// Getter of the `defaultChecked` attribute.
    /// [`HTMLInputElement.defaultChecked`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/defaultChecked)
    [[nodiscard]] bool defaultChecked() const;
    /// Setter of the `defaultChecked` attribute.
    /// [`HTMLInputElement.defaultChecked`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/defaultChecked)
    void defaultChecked(bool value);
    /// Getter of the `checked` attribute.
    /// [`HTMLInputElement.checked`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/checked)
    [[nodiscard]] bool checked() const;
    /// Setter of the `checked` attribute.
    /// [`HTMLInputElement.checked`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/checked)
    void checked(bool value);
    /// Getter of the `colorSpace` attribute.
    /// [`HTMLInputElement.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/colorSpace)
    [[nodiscard]] jsbind::String colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    /// [`HTMLInputElement.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/colorSpace)
    void colorSpace(const jsbind::String& value);
    /// Getter of the `dirName` attribute.
    /// [`HTMLInputElement.dirName`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/dirName)
    [[nodiscard]] jsbind::String dirName() const;
    /// Setter of the `dirName` attribute.
    /// [`HTMLInputElement.dirName`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/dirName)
    void dirName(const jsbind::String& value);
    /// Getter of the `disabled` attribute.
    /// [`HTMLInputElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLInputElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/disabled)
    void disabled(bool value);
    /// Getter of the `form` attribute.
    /// [`HTMLInputElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// Getter of the `files` attribute.
    /// [`HTMLInputElement.files`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/files)
    [[nodiscard]] FileList files() const;
    /// Setter of the `files` attribute.
    /// [`HTMLInputElement.files`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/files)
    void files(const FileList& value);
    /// Getter of the `formAction` attribute.
    /// [`HTMLInputElement.formAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formAction)
    [[nodiscard]] jsbind::String formAction() const;
    /// Setter of the `formAction` attribute.
    /// [`HTMLInputElement.formAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formAction)
    void formAction(const jsbind::String& value);
    /// Getter of the `formEnctype` attribute.
    /// [`HTMLInputElement.formEnctype`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formEnctype)
    [[nodiscard]] jsbind::String formEnctype() const;
    /// Setter of the `formEnctype` attribute.
    /// [`HTMLInputElement.formEnctype`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formEnctype)
    void formEnctype(const jsbind::String& value);
    /// Getter of the `formMethod` attribute.
    /// [`HTMLInputElement.formMethod`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formMethod)
    [[nodiscard]] jsbind::String formMethod() const;
    /// Setter of the `formMethod` attribute.
    /// [`HTMLInputElement.formMethod`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formMethod)
    void formMethod(const jsbind::String& value);
    /// Getter of the `formNoValidate` attribute.
    /// [`HTMLInputElement.formNoValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formNoValidate)
    [[nodiscard]] bool formNoValidate() const;
    /// Setter of the `formNoValidate` attribute.
    /// [`HTMLInputElement.formNoValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formNoValidate)
    void formNoValidate(bool value);
    /// Getter of the `formTarget` attribute.
    /// [`HTMLInputElement.formTarget`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formTarget)
    [[nodiscard]] jsbind::String formTarget() const;
    /// Setter of the `formTarget` attribute.
    /// [`HTMLInputElement.formTarget`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/formTarget)
    void formTarget(const jsbind::String& value);
    /// Getter of the `height` attribute.
    /// [`HTMLInputElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/height)
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLInputElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/height)
    void height(unsigned long value);
    /// Getter of the `indeterminate` attribute.
    /// [`HTMLInputElement.indeterminate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/indeterminate)
    [[nodiscard]] bool indeterminate() const;
    /// Setter of the `indeterminate` attribute.
    /// [`HTMLInputElement.indeterminate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/indeterminate)
    void indeterminate(bool value);
    /// Getter of the `list` attribute.
    /// [`HTMLInputElement.list`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/list)
    [[nodiscard]] HTMLDataListElement list() const;
    /// Getter of the `max` attribute.
    /// [`HTMLInputElement.max`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/max)
    [[nodiscard]] jsbind::String max() const;
    /// Setter of the `max` attribute.
    /// [`HTMLInputElement.max`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/max)
    void max(const jsbind::String& value);
    /// Getter of the `maxLength` attribute.
    /// [`HTMLInputElement.maxLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/maxLength)
    [[nodiscard]] long maxLength() const;
    /// Setter of the `maxLength` attribute.
    /// [`HTMLInputElement.maxLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/maxLength)
    void maxLength(long value);
    /// Getter of the `min` attribute.
    /// [`HTMLInputElement.min`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/min)
    [[nodiscard]] jsbind::String min() const;
    /// Setter of the `min` attribute.
    /// [`HTMLInputElement.min`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/min)
    void min(const jsbind::String& value);
    /// Getter of the `minLength` attribute.
    /// [`HTMLInputElement.minLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/minLength)
    [[nodiscard]] long minLength() const;
    /// Setter of the `minLength` attribute.
    /// [`HTMLInputElement.minLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/minLength)
    void minLength(long value);
    /// Getter of the `multiple` attribute.
    /// [`HTMLInputElement.multiple`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/multiple)
    [[nodiscard]] bool multiple() const;
    /// Setter of the `multiple` attribute.
    /// [`HTMLInputElement.multiple`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/multiple)
    void multiple(bool value);
    /// Getter of the `name` attribute.
    /// [`HTMLInputElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLInputElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `pattern` attribute.
    /// [`HTMLInputElement.pattern`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/pattern)
    [[nodiscard]] jsbind::String pattern() const;
    /// Setter of the `pattern` attribute.
    /// [`HTMLInputElement.pattern`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/pattern)
    void pattern(const jsbind::String& value);
    /// Getter of the `placeholder` attribute.
    /// [`HTMLInputElement.placeholder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/placeholder)
    [[nodiscard]] jsbind::String placeholder() const;
    /// Setter of the `placeholder` attribute.
    /// [`HTMLInputElement.placeholder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/placeholder)
    void placeholder(const jsbind::String& value);
    /// Getter of the `readOnly` attribute.
    /// [`HTMLInputElement.readOnly`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/readOnly)
    [[nodiscard]] bool readOnly() const;
    /// Setter of the `readOnly` attribute.
    /// [`HTMLInputElement.readOnly`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/readOnly)
    void readOnly(bool value);
    /// Getter of the `required` attribute.
    /// [`HTMLInputElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/required)
    [[nodiscard]] bool required() const;
    /// Setter of the `required` attribute.
    /// [`HTMLInputElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/required)
    void required(bool value);
    /// Getter of the `size` attribute.
    /// [`HTMLInputElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/size)
    [[nodiscard]] unsigned long size() const;
    /// Setter of the `size` attribute.
    /// [`HTMLInputElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/size)
    void size(unsigned long value);
    /// Getter of the `src` attribute.
    /// [`HTMLInputElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLInputElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/src)
    void src(const jsbind::String& value);
    /// Getter of the `step` attribute.
    /// [`HTMLInputElement.step`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/step)
    [[nodiscard]] jsbind::String step() const;
    /// Setter of the `step` attribute.
    /// [`HTMLInputElement.step`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/step)
    void step(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`HTMLInputElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLInputElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `defaultValue` attribute.
    /// [`HTMLInputElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/defaultValue)
    [[nodiscard]] jsbind::String defaultValue() const;
    /// Setter of the `defaultValue` attribute.
    /// [`HTMLInputElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/defaultValue)
    void defaultValue(const jsbind::String& value);
    /// Getter of the `value` attribute.
    /// [`HTMLInputElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLInputElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/value)
    void value(const jsbind::String& value);
    /// Getter of the `valueAsDate` attribute.
    /// [`HTMLInputElement.valueAsDate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/valueAsDate)
    [[nodiscard]] jsbind::Object valueAsDate() const;
    /// Setter of the `valueAsDate` attribute.
    /// [`HTMLInputElement.valueAsDate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/valueAsDate)
    void valueAsDate(const jsbind::Object& value);
    /// Getter of the `valueAsNumber` attribute.
    /// [`HTMLInputElement.valueAsNumber`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/valueAsNumber)
    [[nodiscard]] double valueAsNumber() const;
    /// Setter of the `valueAsNumber` attribute.
    /// [`HTMLInputElement.valueAsNumber`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/valueAsNumber)
    void valueAsNumber(double value);
    /// Getter of the `width` attribute.
    /// [`HTMLInputElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/width)
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLInputElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/width)
    void width(unsigned long value);
    /// The stepUp method.
    /// [`HTMLInputElement.stepUp`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/stepUp)
    jsbind::Undefined stepUp();
    /// The stepUp method.
    /// [`HTMLInputElement.stepUp`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/stepUp)
    jsbind::Undefined stepUp(long n);
    /// The stepDown method.
    /// [`HTMLInputElement.stepDown`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/stepDown)
    jsbind::Undefined stepDown();
    /// The stepDown method.
    /// [`HTMLInputElement.stepDown`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/stepDown)
    jsbind::Undefined stepDown(long n);
    /// Getter of the `willValidate` attribute.
    /// [`HTMLInputElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// Getter of the `validity` attribute.
    /// [`HTMLInputElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// Getter of the `validationMessage` attribute.
    /// [`HTMLInputElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`HTMLInputElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLInputElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/reportValidity)
    bool reportValidity();
    /// The setCustomValidity method.
    /// [`HTMLInputElement.setCustomValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/setCustomValidity)
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    /// Getter of the `labels` attribute.
    /// [`HTMLInputElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/labels)
    [[nodiscard]] NodeList labels() const;
    /// The select method.
    /// [`HTMLInputElement.select`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/select)
    jsbind::Undefined select();
    /// Getter of the `selectionStart` attribute.
    /// [`HTMLInputElement.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/selectionStart)
    [[nodiscard]] unsigned long selectionStart() const;
    /// Setter of the `selectionStart` attribute.
    /// [`HTMLInputElement.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/selectionStart)
    void selectionStart(unsigned long value);
    /// Getter of the `selectionEnd` attribute.
    /// [`HTMLInputElement.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/selectionEnd)
    [[nodiscard]] unsigned long selectionEnd() const;
    /// Setter of the `selectionEnd` attribute.
    /// [`HTMLInputElement.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/selectionEnd)
    void selectionEnd(unsigned long value);
    /// Getter of the `selectionDirection` attribute.
    /// [`HTMLInputElement.selectionDirection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/selectionDirection)
    [[nodiscard]] jsbind::String selectionDirection() const;
    /// Setter of the `selectionDirection` attribute.
    /// [`HTMLInputElement.selectionDirection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/selectionDirection)
    void selectionDirection(const jsbind::String& value);
    /// The setRangeText method.
    /// [`HTMLInputElement.setRangeText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/setRangeText)
    jsbind::Undefined setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end);
    /// The setRangeText method.
    /// [`HTMLInputElement.setRangeText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/setRangeText)
    jsbind::Undefined setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode);
    /// The setSelectionRange method.
    /// [`HTMLInputElement.setSelectionRange`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/setSelectionRange)
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end);
    /// The setSelectionRange method.
    /// [`HTMLInputElement.setSelectionRange`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/setSelectionRange)
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end, const jsbind::String& direction);
    /// The showPicker method.
    /// [`HTMLInputElement.showPicker`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/showPicker)
    jsbind::Undefined showPicker();
    /// Getter of the `webkitdirectory` attribute.
    /// [`HTMLInputElement.webkitdirectory`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/webkitdirectory)
    [[nodiscard]] bool webkitdirectory() const;
    /// Setter of the `webkitdirectory` attribute.
    /// [`HTMLInputElement.webkitdirectory`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/webkitdirectory)
    void webkitdirectory(bool value);
    /// Getter of the `webkitEntries` attribute.
    /// [`HTMLInputElement.webkitEntries`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/webkitEntries)
    [[nodiscard]] jsbind::TypedArray<FileSystemEntry> webkitEntries() const;
    /// Getter of the `capture` attribute.
    /// [`HTMLInputElement.capture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/capture)
    [[nodiscard]] jsbind::String capture() const;
    /// Setter of the `capture` attribute.
    /// [`HTMLInputElement.capture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/capture)
    void capture(const jsbind::String& value);
    /// Getter of the `align` attribute.
    /// [`HTMLInputElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLInputElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `useMap` attribute.
    /// [`HTMLInputElement.useMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/useMap)
    [[nodiscard]] jsbind::String useMap() const;
    /// Setter of the `useMap` attribute.
    /// [`HTMLInputElement.useMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/useMap)
    void useMap(const jsbind::String& value);
    /// Getter of the `popoverTargetElement` attribute.
    /// [`HTMLInputElement.popoverTargetElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/popoverTargetElement)
    [[nodiscard]] Element popoverTargetElement() const;
    /// Setter of the `popoverTargetElement` attribute.
    /// [`HTMLInputElement.popoverTargetElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/popoverTargetElement)
    void popoverTargetElement(const Element& value);
    /// Getter of the `popoverTargetAction` attribute.
    /// [`HTMLInputElement.popoverTargetAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/popoverTargetAction)
    [[nodiscard]] jsbind::String popoverTargetAction() const;
    /// Setter of the `popoverTargetAction` attribute.
    /// [`HTMLInputElement.popoverTargetAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement/popoverTargetAction)
    void popoverTargetAction(const jsbind::String& value);
};

} // namespace webbind