#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLBodyElement
/// [`HTMLBodyElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement)
class HTMLBodyElement : public HTMLElement {
    explicit HTMLBodyElement(Handle h) noexcept;
public:
    explicit HTMLBodyElement(const emlite::Val &val) noexcept;
    static HTMLBodyElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLBodyElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLBodyElement(..)` constructor, creating a new HTMLBodyElement instance
    HTMLBodyElement();
    /// Getter of the `onorientationchange` attribute.
    /// [`HTMLBodyElement.onorientationchange`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/onorientationchange)
    [[nodiscard]] jsbind::Any onorientationchange() const;
    /// Setter of the `onorientationchange` attribute.
    /// [`HTMLBodyElement.onorientationchange`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/onorientationchange)
    void onorientationchange(const jsbind::Any& value);
    /// Getter of the `text` attribute.
    /// [`HTMLBodyElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`HTMLBodyElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/text)
    void text(const jsbind::String& value);
    /// Getter of the `link` attribute.
    /// [`HTMLBodyElement.link`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/link)
    [[nodiscard]] jsbind::String link() const;
    /// Setter of the `link` attribute.
    /// [`HTMLBodyElement.link`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/link)
    void link(const jsbind::String& value);
    /// Getter of the `vLink` attribute.
    /// [`HTMLBodyElement.vLink`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/vLink)
    [[nodiscard]] jsbind::String vLink() const;
    /// Setter of the `vLink` attribute.
    /// [`HTMLBodyElement.vLink`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/vLink)
    void vLink(const jsbind::String& value);
    /// Getter of the `aLink` attribute.
    /// [`HTMLBodyElement.aLink`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/aLink)
    [[nodiscard]] jsbind::String aLink() const;
    /// Setter of the `aLink` attribute.
    /// [`HTMLBodyElement.aLink`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/aLink)
    void aLink(const jsbind::String& value);
    /// Getter of the `bgColor` attribute.
    /// [`HTMLBodyElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/bgColor)
    [[nodiscard]] jsbind::String bgColor() const;
    /// Setter of the `bgColor` attribute.
    /// [`HTMLBodyElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/bgColor)
    void bgColor(const jsbind::String& value);
    /// Getter of the `background` attribute.
    /// [`HTMLBodyElement.background`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/background)
    [[nodiscard]] jsbind::String background() const;
    /// Setter of the `background` attribute.
    /// [`HTMLBodyElement.background`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/background)
    void background(const jsbind::String& value);
    /// Getter of the `onportalactivate` attribute.
    /// [`HTMLBodyElement.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/onportalactivate)
    [[nodiscard]] jsbind::Any onportalactivate() const;
    /// Setter of the `onportalactivate` attribute.
    /// [`HTMLBodyElement.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBodyElement/onportalactivate)
    void onportalactivate(const jsbind::Any& value);
};

} // namespace webbind