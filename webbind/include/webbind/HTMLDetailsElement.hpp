#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLDetailsElement : public HTMLElement {
    explicit HTMLDetailsElement(Handle h) noexcept;

public:
    explicit HTMLDetailsElement(const emlite::Val &val) noexcept;
    static HTMLDetailsElement take_ownership(Handle h) noexcept;

    HTMLDetailsElement clone() const noexcept;
    HTMLDetailsElement();
    jsbind::String name() const;
    void name(const jsbind::String& value);
    bool open() const;
    void open(bool value);
};

