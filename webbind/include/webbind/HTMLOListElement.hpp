#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLOListElement : public HTMLElement {
    explicit HTMLOListElement(Handle h) noexcept;

public:
    explicit HTMLOListElement(const emlite::Val &val) noexcept;
    static HTMLOListElement take_ownership(Handle h) noexcept;

    HTMLOListElement clone() const noexcept;
    HTMLOListElement();
    bool reversed() const;
    void reversed(bool value);
    long start() const;
    void start(long value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    bool compact() const;
    void compact(bool value);
};

