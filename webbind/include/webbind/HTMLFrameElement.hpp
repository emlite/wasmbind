#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class Document;


/// The HTMLFrameElement class.
/// [`HTMLFrameElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement)
class HTMLFrameElement : public HTMLElement {
    explicit HTMLFrameElement(Handle h) noexcept;

public:
    explicit HTMLFrameElement(const emlite::Val &val) noexcept;
    static HTMLFrameElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLFrameElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLFrameElement(..)` constructor, creating a new HTMLFrameElement instance
    HTMLFrameElement();
    /// Getter of the `name` attribute.
    /// [`HTMLFrameElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLFrameElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `scrolling` attribute.
    /// [`HTMLFrameElement.scrolling`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/scrolling)
    [[nodiscard]] jsbind::String scrolling() const;
    /// Setter of the `scrolling` attribute.
    /// [`HTMLFrameElement.scrolling`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/scrolling)
    void scrolling(const jsbind::String& value);
    /// Getter of the `src` attribute.
    /// [`HTMLFrameElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLFrameElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/src)
    void src(const jsbind::String& value);
    /// Getter of the `frameBorder` attribute.
    /// [`HTMLFrameElement.frameBorder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/frameBorder)
    [[nodiscard]] jsbind::String frameBorder() const;
    /// Setter of the `frameBorder` attribute.
    /// [`HTMLFrameElement.frameBorder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/frameBorder)
    void frameBorder(const jsbind::String& value);
    /// Getter of the `longDesc` attribute.
    /// [`HTMLFrameElement.longDesc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/longDesc)
    [[nodiscard]] jsbind::String longDesc() const;
    /// Setter of the `longDesc` attribute.
    /// [`HTMLFrameElement.longDesc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/longDesc)
    void longDesc(const jsbind::String& value);
    /// Getter of the `noResize` attribute.
    /// [`HTMLFrameElement.noResize`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/noResize)
    [[nodiscard]] bool noResize() const;
    /// Setter of the `noResize` attribute.
    /// [`HTMLFrameElement.noResize`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/noResize)
    void noResize(bool value);
    /// Getter of the `contentDocument` attribute.
    /// [`HTMLFrameElement.contentDocument`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/contentDocument)
    [[nodiscard]] Document contentDocument() const;
    /// Getter of the `contentWindow` attribute.
    /// [`HTMLFrameElement.contentWindow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/contentWindow)
    [[nodiscard]] jsbind::Any contentWindow() const;
    /// Getter of the `marginHeight` attribute.
    /// [`HTMLFrameElement.marginHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/marginHeight)
    [[nodiscard]] jsbind::String marginHeight() const;
    /// Setter of the `marginHeight` attribute.
    /// [`HTMLFrameElement.marginHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/marginHeight)
    void marginHeight(const jsbind::String& value);
    /// Getter of the `marginWidth` attribute.
    /// [`HTMLFrameElement.marginWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/marginWidth)
    [[nodiscard]] jsbind::String marginWidth() const;
    /// Setter of the `marginWidth` attribute.
    /// [`HTMLFrameElement.marginWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameElement/marginWidth)
    void marginWidth(const jsbind::String& value);
};

