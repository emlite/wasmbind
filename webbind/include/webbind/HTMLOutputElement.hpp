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
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String type() const;
    jsbind::String defaultValue() const;
    void defaultValue(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::String validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    NodeList labels() const;
};

