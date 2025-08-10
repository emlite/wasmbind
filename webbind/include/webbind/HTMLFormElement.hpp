#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class DOMTokenList;
class HTMLFormControlsCollection;

/// Interface HTMLFormElement
/// [`HTMLFormElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement)
class HTMLFormElement : public HTMLElement {
    explicit HTMLFormElement(Handle h) noexcept;
public:
    explicit HTMLFormElement(const emlite::Val &val) noexcept;
    static HTMLFormElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLFormElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLFormElement(..)` constructor, creating a new HTMLFormElement instance
    HTMLFormElement();
    /// Getter of the `acceptCharset` attribute.
    /// [`HTMLFormElement.acceptCharset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/acceptCharset)
    [[nodiscard]] jsbind::String acceptCharset() const;
    /// Setter of the `acceptCharset` attribute.
    /// [`HTMLFormElement.acceptCharset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/acceptCharset)
    void acceptCharset(const jsbind::String& value);
    /// Getter of the `action` attribute.
    /// [`HTMLFormElement.action`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/action)
    [[nodiscard]] jsbind::String action() const;
    /// Setter of the `action` attribute.
    /// [`HTMLFormElement.action`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/action)
    void action(const jsbind::String& value);
    /// Getter of the `autocomplete` attribute.
    /// [`HTMLFormElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/autocomplete)
    [[nodiscard]] jsbind::String autocomplete() const;
    /// Setter of the `autocomplete` attribute.
    /// [`HTMLFormElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/autocomplete)
    void autocomplete(const jsbind::String& value);
    /// Getter of the `enctype` attribute.
    /// [`HTMLFormElement.enctype`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/enctype)
    [[nodiscard]] jsbind::String enctype() const;
    /// Setter of the `enctype` attribute.
    /// [`HTMLFormElement.enctype`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/enctype)
    void enctype(const jsbind::String& value);
    /// Getter of the `encoding` attribute.
    /// [`HTMLFormElement.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// Setter of the `encoding` attribute.
    /// [`HTMLFormElement.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/encoding)
    void encoding(const jsbind::String& value);
    /// Getter of the `method` attribute.
    /// [`HTMLFormElement.method`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/method)
    [[nodiscard]] jsbind::String method() const;
    /// Setter of the `method` attribute.
    /// [`HTMLFormElement.method`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/method)
    void method(const jsbind::String& value);
    /// Getter of the `name` attribute.
    /// [`HTMLFormElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLFormElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `noValidate` attribute.
    /// [`HTMLFormElement.noValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/noValidate)
    [[nodiscard]] bool noValidate() const;
    /// Setter of the `noValidate` attribute.
    /// [`HTMLFormElement.noValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/noValidate)
    void noValidate(bool value);
    /// Getter of the `target` attribute.
    /// [`HTMLFormElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/target)
    [[nodiscard]] jsbind::String target() const;
    /// Setter of the `target` attribute.
    /// [`HTMLFormElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/target)
    void target(const jsbind::String& value);
    /// Getter of the `rel` attribute.
    /// [`HTMLFormElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/rel)
    [[nodiscard]] jsbind::String rel() const;
    /// Setter of the `rel` attribute.
    /// [`HTMLFormElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/rel)
    void rel(const jsbind::String& value);
    /// Getter of the `relList` attribute.
    /// [`HTMLFormElement.relList`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/relList)
    [[nodiscard]] DOMTokenList relList() const;
    /// Getter of the `elements` attribute.
    /// [`HTMLFormElement.elements`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/elements)
    [[nodiscard]] HTMLFormControlsCollection elements() const;
    /// Getter of the `length` attribute.
    /// [`HTMLFormElement.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/length)
    [[nodiscard]] unsigned long length() const;
    /// The submit method.
    /// [`HTMLFormElement.submit`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/submit)
    jsbind::Undefined submit();
    /// The requestSubmit method.
    /// [`HTMLFormElement.requestSubmit`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/requestSubmit)
    jsbind::Undefined requestSubmit();
    /// The requestSubmit method.
    /// [`HTMLFormElement.requestSubmit`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/requestSubmit)
    jsbind::Undefined requestSubmit(const HTMLElement& submitter);
    /// The reset method.
    /// [`HTMLFormElement.reset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/reset)
    jsbind::Undefined reset();
    /// The checkValidity method.
    /// [`HTMLFormElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLFormElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement/reportValidity)
    bool reportValidity();
};

} // namespace webbind