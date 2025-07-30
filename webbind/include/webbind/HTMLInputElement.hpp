#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class FileList;
class HTMLDataListElement;
class ValidityState;
class NodeList;
class FileSystemEntry;
class Element;


class HTMLInputElement : public HTMLElement {
    explicit HTMLInputElement(Handle h) noexcept;

public:
    explicit HTMLInputElement(const emlite::Val &val) noexcept;
    static HTMLInputElement take_ownership(Handle h) noexcept;

    HTMLInputElement clone() const noexcept;
    HTMLInputElement();
    jsbind::String accept() const;
    void accept(const jsbind::String& value);
    bool alpha() const;
    void alpha(bool value);
    jsbind::String alt() const;
    void alt(const jsbind::String& value);
    jsbind::String autocomplete() const;
    void autocomplete(const jsbind::String& value);
    bool defaultChecked() const;
    void defaultChecked(bool value);
    bool checked() const;
    void checked(bool value);
    jsbind::String colorSpace() const;
    void colorSpace(const jsbind::String& value);
    jsbind::String dirName() const;
    void dirName(const jsbind::String& value);
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
    FileList files() const;
    void files(const FileList& value);
    jsbind::String formAction() const;
    void formAction(const jsbind::String& value);
    jsbind::String formEnctype() const;
    void formEnctype(const jsbind::String& value);
    jsbind::String formMethod() const;
    void formMethod(const jsbind::String& value);
    bool formNoValidate() const;
    void formNoValidate(bool value);
    jsbind::String formTarget() const;
    void formTarget(const jsbind::String& value);
    unsigned long height() const;
    void height(unsigned long value);
    bool indeterminate() const;
    void indeterminate(bool value);
    HTMLDataListElement list() const;
    jsbind::String max() const;
    void max(const jsbind::String& value);
    long maxLength() const;
    void maxLength(long value);
    jsbind::String min() const;
    void min(const jsbind::String& value);
    long minLength() const;
    void minLength(long value);
    bool multiple() const;
    void multiple(bool value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String pattern() const;
    void pattern(const jsbind::String& value);
    jsbind::String placeholder() const;
    void placeholder(const jsbind::String& value);
    bool readOnly() const;
    void readOnly(bool value);
    bool required() const;
    void required(bool value);
    unsigned long size() const;
    void size(unsigned long value);
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::String step() const;
    void step(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String defaultValue() const;
    void defaultValue(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
    jsbind::Object valueAsDate() const;
    void valueAsDate(const jsbind::Object& value);
    double valueAsNumber() const;
    void valueAsNumber(double value);
    unsigned long width() const;
    void width(unsigned long value);
    jsbind::Undefined stepUp();
    jsbind::Undefined stepUp(long n);
    jsbind::Undefined stepDown();
    jsbind::Undefined stepDown(long n);
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::String validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    NodeList labels() const;
    jsbind::Undefined select();
    unsigned long selectionStart() const;
    void selectionStart(unsigned long value);
    unsigned long selectionEnd() const;
    void selectionEnd(unsigned long value);
    jsbind::String selectionDirection() const;
    void selectionDirection(const jsbind::String& value);
    jsbind::Undefined setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end);
    jsbind::Undefined setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode);
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end);
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end, const jsbind::String& direction);
    jsbind::Undefined showPicker();
    bool webkitdirectory() const;
    void webkitdirectory(bool value);
    jsbind::TypedArray<FileSystemEntry> webkitEntries() const;
    jsbind::String capture() const;
    void capture(const jsbind::String& value);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String useMap() const;
    void useMap(const jsbind::String& value);
    Element popoverTargetElement() const;
    void popoverTargetElement(const Element& value);
    jsbind::String popoverTargetAction() const;
    void popoverTargetAction(const jsbind::String& value);
};

