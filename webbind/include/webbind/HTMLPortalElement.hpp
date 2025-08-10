#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"
#include "PortalActivateOptions.hpp"
#include "StructuredSerializeOptions.hpp"

namespace webbind {

/// Interface HTMLPortalElement
/// [`HTMLPortalElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement)
class HTMLPortalElement : public HTMLElement {
    explicit HTMLPortalElement(Handle h) noexcept;
public:
    explicit HTMLPortalElement(const emlite::Val &val) noexcept;
    static HTMLPortalElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLPortalElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLPortalElement(..)` constructor, creating a new HTMLPortalElement instance
    HTMLPortalElement();
    /// [`HTMLPortalElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/src)
    /// [`HTMLPortalElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLPortalElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/src)
    void src(const jsbind::String& value);
    /// [`HTMLPortalElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/referrerPolicy)
    /// [`HTMLPortalElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`HTMLPortalElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// The activate method.
    /// [`HTMLPortalElement.activate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/activate)
    jsbind::Promise<jsbind::Undefined> activate();
    /// The activate method.
    /// [`HTMLPortalElement.activate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/activate)
    jsbind::Promise<jsbind::Undefined> activate(const PortalActivateOptions& options);
    /// The postMessage method.
    /// [`HTMLPortalElement.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`HTMLPortalElement.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// [`HTMLPortalElement.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessage)
    /// [`HTMLPortalElement.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`HTMLPortalElement.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessage)
    void onmessage(const jsbind::Any& value);
    /// [`HTMLPortalElement.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessageerror)
    /// [`HTMLPortalElement.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`HTMLPortalElement.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

} // namespace webbind