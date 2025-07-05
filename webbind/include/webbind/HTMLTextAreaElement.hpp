#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class ValidityState;
class NodeList;


class HTMLTextAreaElement : public HTMLElement {
    explicit HTMLTextAreaElement(Handle h) noexcept;

public:
    explicit HTMLTextAreaElement(const emlite::Val &val) noexcept;
    static HTMLTextAreaElement take_ownership(Handle h) noexcept;

    HTMLTextAreaElement clone() const noexcept;
    HTMLTextAreaElement();
    jsbind::DOMString autocomplete() const;
    void autocomplete(const jsbind::DOMString& value);
    unsigned long cols() const;
    void cols(unsigned long value);
    jsbind::DOMString dirName() const;
    void dirName(const jsbind::DOMString& value);
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
    long maxLength() const;
    void maxLength(long value);
    long minLength() const;
    void minLength(long value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString placeholder() const;
    void placeholder(const jsbind::DOMString& value);
    bool readOnly() const;
    void readOnly(bool value);
    bool required() const;
    void required(bool value);
    unsigned long rows() const;
    void rows(unsigned long value);
    jsbind::DOMString wrap() const;
    void wrap(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    jsbind::DOMString defaultValue() const;
    void defaultValue(const jsbind::DOMString& value);
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
    unsigned long textLength() const;
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
};

