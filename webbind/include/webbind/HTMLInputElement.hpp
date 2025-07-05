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
    jsbind::DOMString accept() const;
    void accept(const jsbind::DOMString& value);
    bool alpha() const;
    void alpha(bool value);
    jsbind::DOMString alt() const;
    void alt(const jsbind::DOMString& value);
    jsbind::DOMString autocomplete() const;
    void autocomplete(const jsbind::DOMString& value);
    bool defaultChecked() const;
    void defaultChecked(bool value);
    bool checked() const;
    void checked(bool value);
    jsbind::DOMString colorSpace() const;
    void colorSpace(const jsbind::DOMString& value);
    jsbind::DOMString dirName() const;
    void dirName(const jsbind::DOMString& value);
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
    FileList files() const;
    void files(const FileList& value);
    jsbind::USVString formAction() const;
    void formAction(const jsbind::USVString& value);
    jsbind::DOMString formEnctype() const;
    void formEnctype(const jsbind::DOMString& value);
    jsbind::DOMString formMethod() const;
    void formMethod(const jsbind::DOMString& value);
    bool formNoValidate() const;
    void formNoValidate(bool value);
    jsbind::DOMString formTarget() const;
    void formTarget(const jsbind::DOMString& value);
    unsigned long height() const;
    void height(unsigned long value);
    bool indeterminate() const;
    void indeterminate(bool value);
    HTMLDataListElement list() const;
    jsbind::DOMString max() const;
    void max(const jsbind::DOMString& value);
    long maxLength() const;
    void maxLength(long value);
    jsbind::DOMString min() const;
    void min(const jsbind::DOMString& value);
    long minLength() const;
    void minLength(long value);
    bool multiple() const;
    void multiple(bool value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString pattern() const;
    void pattern(const jsbind::DOMString& value);
    jsbind::DOMString placeholder() const;
    void placeholder(const jsbind::DOMString& value);
    bool readOnly() const;
    void readOnly(bool value);
    bool required() const;
    void required(bool value);
    unsigned long size() const;
    void size(unsigned long value);
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::DOMString step() const;
    void step(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::DOMString defaultValue() const;
    void defaultValue(const jsbind::DOMString& value);
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
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
    jsbind::DOMString validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::DOMString& error);
    NodeList labels() const;
    jsbind::Undefined select();
    unsigned long selectionStart() const;
    void selectionStart(unsigned long value);
    unsigned long selectionEnd() const;
    void selectionEnd(unsigned long value);
    jsbind::DOMString selectionDirection() const;
    void selectionDirection(const jsbind::DOMString& value);
    jsbind::Undefined setRangeText(const jsbind::DOMString& replacement, unsigned long start, unsigned long end);
    jsbind::Undefined setRangeText(const jsbind::DOMString& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode);
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end);
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end, const jsbind::DOMString& direction);
    jsbind::Undefined showPicker();
    bool webkitdirectory() const;
    void webkitdirectory(bool value);
    jsbind::FrozenArray<FileSystemEntry> webkitEntries() const;
    jsbind::DOMString capture() const;
    void capture(const jsbind::DOMString& value);
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString useMap() const;
    void useMap(const jsbind::DOMString& value);
    Element popoverTargetElement() const;
    void popoverTargetElement(const Element& value);
    jsbind::DOMString popoverTargetAction() const;
    void popoverTargetAction(const jsbind::DOMString& value);
};

