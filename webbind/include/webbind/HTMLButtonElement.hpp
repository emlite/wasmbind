#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class Element;
class HTMLFormElement;
class ValidityState;
class NodeList;


class HTMLButtonElement : public HTMLElement {
    explicit HTMLButtonElement(Handle h) noexcept;

public:
    explicit HTMLButtonElement(const emlite::Val &val) noexcept;
    static HTMLButtonElement take_ownership(Handle h) noexcept;

    HTMLButtonElement clone() const noexcept;
    HTMLButtonElement();
    jsbind::DOMString command() const;
    void command(const jsbind::DOMString& value);
    Element commandForElement() const;
    void commandForElement(const Element& value);
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
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
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::DOMString validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::DOMString& error);
    NodeList labels() const;
    Element popoverTargetElement() const;
    void popoverTargetElement(const Element& value);
    jsbind::DOMString popoverTargetAction() const;
    void popoverTargetAction(const jsbind::DOMString& value);
};

