#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;


class HTMLOptionElement : public HTMLElement {
    explicit HTMLOptionElement(Handle h) noexcept;

public:
    explicit HTMLOptionElement(const emlite::Val &val) noexcept;
    static HTMLOptionElement take_ownership(Handle h) noexcept;

    HTMLOptionElement clone() const noexcept;
    HTMLOptionElement();
    bool disabled() const;
    void disabled(bool value);
    HTMLFormElement form() const;
    jsbind::String label() const;
    void label(const jsbind::String& value);
    bool defaultSelected() const;
    void defaultSelected(bool value);
    bool selected() const;
    void selected(bool value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
    jsbind::String text() const;
    void text(const jsbind::String& value);
    long index() const;
};

