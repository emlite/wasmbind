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
    jsbind::String command() const;
    void command(const jsbind::String& value);
    Element commandForElement() const;
    void commandForElement(const Element& value);
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
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
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::String validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    NodeList labels() const;
    Element popoverTargetElement() const;
    void popoverTargetElement(const Element& value);
    jsbind::String popoverTargetAction() const;
    void popoverTargetAction(const jsbind::String& value);
};

