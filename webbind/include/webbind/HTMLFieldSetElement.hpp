#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class HTMLCollection;
class ValidityState;


class HTMLFieldSetElement : public HTMLElement {
    explicit HTMLFieldSetElement(Handle h) noexcept;

public:
    explicit HTMLFieldSetElement(const emlite::Val &val) noexcept;
    static HTMLFieldSetElement take_ownership(Handle h) noexcept;

    HTMLFieldSetElement clone() const noexcept;
    HTMLFieldSetElement();
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    HTMLCollection elements() const;
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::DOMString validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::DOMString& error);
};

