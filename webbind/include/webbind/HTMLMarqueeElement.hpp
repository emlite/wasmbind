#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLMarqueeElement : public HTMLElement {
    explicit HTMLMarqueeElement(Handle h) noexcept;

public:
    explicit HTMLMarqueeElement(const emlite::Val &val) noexcept;
    static HTMLMarqueeElement take_ownership(Handle h) noexcept;

    HTMLMarqueeElement clone() const noexcept;
    HTMLMarqueeElement();
    jsbind::DOMString behavior() const;
    void behavior(const jsbind::DOMString& value);
    jsbind::DOMString bgColor() const;
    void bgColor(const jsbind::DOMString& value);
    jsbind::DOMString direction() const;
    void direction(const jsbind::DOMString& value);
    jsbind::DOMString height() const;
    void height(const jsbind::DOMString& value);
    unsigned long hspace() const;
    void hspace(unsigned long value);
    long loop() const;
    void loop(long value);
    unsigned long scrollAmount() const;
    void scrollAmount(unsigned long value);
    unsigned long scrollDelay() const;
    void scrollDelay(unsigned long value);
    bool trueSpeed() const;
    void trueSpeed(bool value);
    unsigned long vspace() const;
    void vspace(unsigned long value);
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
    jsbind::Undefined start();
    jsbind::Undefined stop();
};

