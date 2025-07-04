#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class HTMLOptionsCollection;
class HTMLOptionElement;
class HTMLCollection;
class ValidityState;
class NodeList;


class HTMLSelectElement : public HTMLElement {
    explicit HTMLSelectElement(Handle h) noexcept;

public:
    explicit HTMLSelectElement(const emlite::Val &val) noexcept;
    static HTMLSelectElement take_ownership(Handle h) noexcept;

    HTMLSelectElement clone() const noexcept;
    HTMLSelectElement();
    jsbind::DOMString autocomplete() const;
    void autocomplete(const jsbind::DOMString& value);
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
    bool multiple() const;
    void multiple(bool value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    bool required() const;
    void required(bool value);
    unsigned long size() const;
    void size(unsigned long value);
    jsbind::DOMString type() const;
    HTMLOptionsCollection options() const;
    unsigned long length() const;
    void length(unsigned long value);
    HTMLOptionElement item(unsigned long index);
    HTMLOptionElement namedItem(const jsbind::DOMString& name);
    jsbind::Undefined add(const jsbind::Any& element, const jsbind::Any& before);
    jsbind::Undefined remove(long index);
    HTMLCollection selectedOptions() const;
    long selectedIndex() const;
    void selectedIndex(long value);
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::DOMString validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::DOMString& error);
    jsbind::Undefined showPicker();
    NodeList labels() const;
};

