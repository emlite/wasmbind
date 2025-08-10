#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLMetaElement
/// [`HTMLMetaElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement)
class HTMLMetaElement : public HTMLElement {
    explicit HTMLMetaElement(Handle h) noexcept;
public:
    explicit HTMLMetaElement(const emlite::Val &val) noexcept;
    static HTMLMetaElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLMetaElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLMetaElement(..)` constructor, creating a new HTMLMetaElement instance
    HTMLMetaElement();
    /// Getter of the `name` attribute.
    /// [`HTMLMetaElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLMetaElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `httpEquiv` attribute.
    /// [`HTMLMetaElement.httpEquiv`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/httpEquiv)
    [[nodiscard]] jsbind::String httpEquiv() const;
    /// Setter of the `httpEquiv` attribute.
    /// [`HTMLMetaElement.httpEquiv`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/httpEquiv)
    void httpEquiv(const jsbind::String& value);
    /// Getter of the `content` attribute.
    /// [`HTMLMetaElement.content`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/content)
    [[nodiscard]] jsbind::String content() const;
    /// Setter of the `content` attribute.
    /// [`HTMLMetaElement.content`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/content)
    void content(const jsbind::String& value);
    /// Getter of the `media` attribute.
    /// [`HTMLMetaElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/media)
    [[nodiscard]] jsbind::String media() const;
    /// Setter of the `media` attribute.
    /// [`HTMLMetaElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/media)
    void media(const jsbind::String& value);
    /// Getter of the `scheme` attribute.
    /// [`HTMLMetaElement.scheme`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/scheme)
    [[nodiscard]] jsbind::String scheme() const;
    /// Setter of the `scheme` attribute.
    /// [`HTMLMetaElement.scheme`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMetaElement/scheme)
    void scheme(const jsbind::String& value);
};

} // namespace webbind