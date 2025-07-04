#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;
class HTMLFormElement;
class ValidityState;
class NodeList;


class HTMLOutputElement : public HTMLElement {
    explicit HTMLOutputElement(Handle h) noexcept;

public:
    explicit HTMLOutputElement(const emlite::Val &val) noexcept;
    static HTMLOutputElement take_ownership(Handle h) noexcept;

    HTMLOutputElement clone() const noexcept;
    HTMLOutputElement();
    DOMTokenList htmlFor() const;
    HTMLFormElement form() const;
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    jsbind::DOMString defaultValue() const;
    void defaultValue(const jsbind::DOMString& value);
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::DOMString validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::DOMString& error);
    NodeList labels() const;
};

