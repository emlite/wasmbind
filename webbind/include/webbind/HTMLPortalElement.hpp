#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"

class PortalActivateOptions;


class PortalActivateOptions : public emlite::Val {
  explicit PortalActivateOptions(Handle h) noexcept;
public:
    static PortalActivateOptions take_ownership(Handle h) noexcept;
    explicit PortalActivateOptions(const emlite::Val &val) noexcept;
    PortalActivateOptions() noexcept;
    [[nodiscard]] PortalActivateOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

/// The HTMLPortalElement class.
/// [`HTMLPortalElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement)
class HTMLPortalElement : public HTMLElement {
    explicit HTMLPortalElement(Handle h) noexcept;

public:
    explicit HTMLPortalElement(const emlite::Val &val) noexcept;
    static HTMLPortalElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLPortalElement clone() const noexcept;
    /// The `new HTMLPortalElement(..)` constructor, creating a new HTMLPortalElement instance
    HTMLPortalElement();
    /// Getter of the `src` attribute.
    /// [`HTMLPortalElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLPortalElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/src)
    void src(const jsbind::String& value);
    /// Getter of the `referrerPolicy` attribute.
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
    /// Getter of the `onmessage` attribute.
    /// [`HTMLPortalElement.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`HTMLPortalElement.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessage)
    void onmessage(const jsbind::Any& value);
    /// Getter of the `onmessageerror` attribute.
    /// [`HTMLPortalElement.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`HTMLPortalElement.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPortalElement/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

