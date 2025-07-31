#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLMarqueeElement class.
/// [`HTMLMarqueeElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement)
class HTMLMarqueeElement : public HTMLElement {
    explicit HTMLMarqueeElement(Handle h) noexcept;

public:
    explicit HTMLMarqueeElement(const emlite::Val &val) noexcept;
    static HTMLMarqueeElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLMarqueeElement clone() const noexcept;
    /// The `new HTMLMarqueeElement(..)` constructor, creating a new HTMLMarqueeElement instance
    HTMLMarqueeElement();
    /// Getter of the `behavior` attribute.
    /// [`HTMLMarqueeElement.behavior`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/behavior)
    [[nodiscard]] jsbind::String behavior() const;
    /// Setter of the `behavior` attribute.
    /// [`HTMLMarqueeElement.behavior`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/behavior)
    void behavior(const jsbind::String& value);
    /// Getter of the `bgColor` attribute.
    /// [`HTMLMarqueeElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/bgColor)
    [[nodiscard]] jsbind::String bgColor() const;
    /// Setter of the `bgColor` attribute.
    /// [`HTMLMarqueeElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/bgColor)
    void bgColor(const jsbind::String& value);
    /// Getter of the `direction` attribute.
    /// [`HTMLMarqueeElement.direction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/direction)
    [[nodiscard]] jsbind::String direction() const;
    /// Setter of the `direction` attribute.
    /// [`HTMLMarqueeElement.direction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/direction)
    void direction(const jsbind::String& value);
    /// Getter of the `height` attribute.
    /// [`HTMLMarqueeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/height)
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLMarqueeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/height)
    void height(const jsbind::String& value);
    /// Getter of the `hspace` attribute.
    /// [`HTMLMarqueeElement.hspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/hspace)
    [[nodiscard]] unsigned long hspace() const;
    /// Setter of the `hspace` attribute.
    /// [`HTMLMarqueeElement.hspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/hspace)
    void hspace(unsigned long value);
    /// Getter of the `loop` attribute.
    /// [`HTMLMarqueeElement.loop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/loop)
    [[nodiscard]] long loop() const;
    /// Setter of the `loop` attribute.
    /// [`HTMLMarqueeElement.loop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/loop)
    void loop(long value);
    /// Getter of the `scrollAmount` attribute.
    /// [`HTMLMarqueeElement.scrollAmount`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/scrollAmount)
    [[nodiscard]] unsigned long scrollAmount() const;
    /// Setter of the `scrollAmount` attribute.
    /// [`HTMLMarqueeElement.scrollAmount`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/scrollAmount)
    void scrollAmount(unsigned long value);
    /// Getter of the `scrollDelay` attribute.
    /// [`HTMLMarqueeElement.scrollDelay`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/scrollDelay)
    [[nodiscard]] unsigned long scrollDelay() const;
    /// Setter of the `scrollDelay` attribute.
    /// [`HTMLMarqueeElement.scrollDelay`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/scrollDelay)
    void scrollDelay(unsigned long value);
    /// Getter of the `trueSpeed` attribute.
    /// [`HTMLMarqueeElement.trueSpeed`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/trueSpeed)
    [[nodiscard]] bool trueSpeed() const;
    /// Setter of the `trueSpeed` attribute.
    /// [`HTMLMarqueeElement.trueSpeed`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/trueSpeed)
    void trueSpeed(bool value);
    /// Getter of the `vspace` attribute.
    /// [`HTMLMarqueeElement.vspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/vspace)
    [[nodiscard]] unsigned long vspace() const;
    /// Setter of the `vspace` attribute.
    /// [`HTMLMarqueeElement.vspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/vspace)
    void vspace(unsigned long value);
    /// Getter of the `width` attribute.
    /// [`HTMLMarqueeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLMarqueeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/width)
    void width(const jsbind::String& value);
    /// The start method.
    /// [`HTMLMarqueeElement.start`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/start)
    jsbind::Undefined start();
    /// The stop method.
    /// [`HTMLMarqueeElement.stop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement/stop)
    jsbind::Undefined stop();
};

