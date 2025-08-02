#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;


/// The HTMLScriptElement class.
/// [`HTMLScriptElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement)
class HTMLScriptElement : public HTMLElement {
    explicit HTMLScriptElement(Handle h) noexcept;

public:
    explicit HTMLScriptElement(const emlite::Val &val) noexcept;
    static HTMLScriptElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLScriptElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLScriptElement(..)` constructor, creating a new HTMLScriptElement instance
    HTMLScriptElement();
    /// Getter of the `type` attribute.
    /// [`HTMLScriptElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLScriptElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `src` attribute.
    /// [`HTMLScriptElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLScriptElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/src)
    void src(const jsbind::String& value);
    /// Getter of the `noModule` attribute.
    /// [`HTMLScriptElement.noModule`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/noModule)
    [[nodiscard]] bool noModule() const;
    /// Setter of the `noModule` attribute.
    /// [`HTMLScriptElement.noModule`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/noModule)
    void noModule(bool value);
    /// Getter of the `async` attribute.
    /// [`HTMLScriptElement.async`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/async)
    [[nodiscard]] bool async() const;
    /// Setter of the `async` attribute.
    /// [`HTMLScriptElement.async`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/async)
    void async(bool value);
    /// Getter of the `defer` attribute.
    /// [`HTMLScriptElement.defer`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/defer)
    [[nodiscard]] bool defer() const;
    /// Setter of the `defer` attribute.
    /// [`HTMLScriptElement.defer`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/defer)
    void defer(bool value);
    /// Getter of the `blocking` attribute.
    /// [`HTMLScriptElement.blocking`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/blocking)
    [[nodiscard]] DOMTokenList blocking() const;
    /// Getter of the `crossOrigin` attribute.
    /// [`HTMLScriptElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/crossOrigin)
    [[nodiscard]] jsbind::String crossOrigin() const;
    /// Setter of the `crossOrigin` attribute.
    /// [`HTMLScriptElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/crossOrigin)
    void crossOrigin(const jsbind::String& value);
    /// Getter of the `referrerPolicy` attribute.
    /// [`HTMLScriptElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`HTMLScriptElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// Getter of the `integrity` attribute.
    /// [`HTMLScriptElement.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/integrity)
    [[nodiscard]] jsbind::String integrity() const;
    /// Setter of the `integrity` attribute.
    /// [`HTMLScriptElement.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/integrity)
    void integrity(const jsbind::String& value);
    /// Getter of the `fetchPriority` attribute.
    /// [`HTMLScriptElement.fetchPriority`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/fetchPriority)
    [[nodiscard]] jsbind::String fetchPriority() const;
    /// Setter of the `fetchPriority` attribute.
    /// [`HTMLScriptElement.fetchPriority`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/fetchPriority)
    void fetchPriority(const jsbind::String& value);
    /// Getter of the `text` attribute.
    /// [`HTMLScriptElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`HTMLScriptElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/text)
    void text(const jsbind::String& value);
    /// The supports method.
    /// [`HTMLScriptElement.supports`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/supports)
    static bool supports(const jsbind::String& type);
    /// Getter of the `charset` attribute.
    /// [`HTMLScriptElement.charset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/charset)
    [[nodiscard]] jsbind::String charset() const;
    /// Setter of the `charset` attribute.
    /// [`HTMLScriptElement.charset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/charset)
    void charset(const jsbind::String& value);
    /// Getter of the `event` attribute.
    /// [`HTMLScriptElement.event`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/event)
    [[nodiscard]] jsbind::String event() const;
    /// Setter of the `event` attribute.
    /// [`HTMLScriptElement.event`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/event)
    void event(const jsbind::String& value);
    /// Getter of the `htmlFor` attribute.
    /// [`HTMLScriptElement.htmlFor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/htmlFor)
    [[nodiscard]] jsbind::String htmlFor() const;
    /// Setter of the `htmlFor` attribute.
    /// [`HTMLScriptElement.htmlFor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/htmlFor)
    void htmlFor(const jsbind::String& value);
    /// Getter of the `attributionSrc` attribute.
    /// [`HTMLScriptElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/attributionSrc)
    [[nodiscard]] jsbind::String attributionSrc() const;
    /// Setter of the `attributionSrc` attribute.
    /// [`HTMLScriptElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLScriptElement/attributionSrc)
    void attributionSrc(const jsbind::String& value);
};

