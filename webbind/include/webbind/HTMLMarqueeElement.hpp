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
    jsbind::String behavior() const;
    void behavior(const jsbind::String& value);
    jsbind::String bgColor() const;
    void bgColor(const jsbind::String& value);
    jsbind::String direction() const;
    void direction(const jsbind::String& value);
    jsbind::String height() const;
    void height(const jsbind::String& value);
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
    jsbind::String width() const;
    void width(const jsbind::String& value);
    jsbind::Undefined start();
    jsbind::Undefined stop();
};

