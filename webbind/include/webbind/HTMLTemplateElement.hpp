#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class DocumentFragment;

/// Interface HTMLTemplateElement
/// [`HTMLTemplateElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement)
class HTMLTemplateElement : public HTMLElement {
    explicit HTMLTemplateElement(Handle h) noexcept;
public:
    explicit HTMLTemplateElement(const emlite::Val &val) noexcept;
    static HTMLTemplateElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLTemplateElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTemplateElement(..)` constructor, creating a new HTMLTemplateElement instance
    HTMLTemplateElement();
    /// [`HTMLTemplateElement.content`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/content)
    /// [`HTMLTemplateElement.content`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/content)
    [[nodiscard]] DocumentFragment content() const;
    /// [`HTMLTemplateElement.shadowRootMode`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootMode)
    /// [`HTMLTemplateElement.shadowRootMode`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootMode)
    [[nodiscard]] jsbind::String shadowRootMode() const;
    /// Setter of the `shadowRootMode` attribute.
    /// [`HTMLTemplateElement.shadowRootMode`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootMode)
    void shadowRootMode(const jsbind::String& value);
    /// [`HTMLTemplateElement.shadowRootDelegatesFocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootDelegatesFocus)
    /// [`HTMLTemplateElement.shadowRootDelegatesFocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootDelegatesFocus)
    [[nodiscard]] bool shadowRootDelegatesFocus() const;
    /// Setter of the `shadowRootDelegatesFocus` attribute.
    /// [`HTMLTemplateElement.shadowRootDelegatesFocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootDelegatesFocus)
    void shadowRootDelegatesFocus(bool value);
    /// [`HTMLTemplateElement.shadowRootClonable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootClonable)
    /// [`HTMLTemplateElement.shadowRootClonable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootClonable)
    [[nodiscard]] bool shadowRootClonable() const;
    /// Setter of the `shadowRootClonable` attribute.
    /// [`HTMLTemplateElement.shadowRootClonable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootClonable)
    void shadowRootClonable(bool value);
    /// [`HTMLTemplateElement.shadowRootSerializable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootSerializable)
    /// [`HTMLTemplateElement.shadowRootSerializable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootSerializable)
    [[nodiscard]] bool shadowRootSerializable() const;
    /// Setter of the `shadowRootSerializable` attribute.
    /// [`HTMLTemplateElement.shadowRootSerializable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootSerializable)
    void shadowRootSerializable(bool value);
    /// [`HTMLTemplateElement.shadowRootCustomElementRegistry`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootCustomElementRegistry)
    /// [`HTMLTemplateElement.shadowRootCustomElementRegistry`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootCustomElementRegistry)
    [[nodiscard]] jsbind::String shadowRootCustomElementRegistry() const;
    /// Setter of the `shadowRootCustomElementRegistry` attribute.
    /// [`HTMLTemplateElement.shadowRootCustomElementRegistry`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement/shadowRootCustomElementRegistry)
    void shadowRootCustomElementRegistry(const jsbind::String& value);
};

} // namespace webbind