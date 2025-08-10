#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class HTMLFormElement;

/// Interface HTMLOptionElement
/// [`HTMLOptionElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement)
class HTMLOptionElement : public HTMLElement {
    explicit HTMLOptionElement(Handle h) noexcept;
public:
    explicit HTMLOptionElement(const emlite::Val &val) noexcept;
    static HTMLOptionElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLOptionElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLOptionElement(..)` constructor, creating a new HTMLOptionElement instance
    HTMLOptionElement();
    /// [`HTMLOptionElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/disabled)
    /// [`HTMLOptionElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLOptionElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/disabled)
    void disabled(bool value);
    /// [`HTMLOptionElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/form)
    /// [`HTMLOptionElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// [`HTMLOptionElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/label)
    /// [`HTMLOptionElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`HTMLOptionElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/label)
    void label(const jsbind::String& value);
    /// [`HTMLOptionElement.defaultSelected`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/defaultSelected)
    /// [`HTMLOptionElement.defaultSelected`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/defaultSelected)
    [[nodiscard]] bool defaultSelected() const;
    /// Setter of the `defaultSelected` attribute.
    /// [`HTMLOptionElement.defaultSelected`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/defaultSelected)
    void defaultSelected(bool value);
    /// [`HTMLOptionElement.selected`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/selected)
    /// [`HTMLOptionElement.selected`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/selected)
    [[nodiscard]] bool selected() const;
    /// Setter of the `selected` attribute.
    /// [`HTMLOptionElement.selected`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/selected)
    void selected(bool value);
    /// [`HTMLOptionElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/value)
    /// [`HTMLOptionElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLOptionElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/value)
    void value(const jsbind::String& value);
    /// [`HTMLOptionElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/text)
    /// [`HTMLOptionElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`HTMLOptionElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/text)
    void text(const jsbind::String& value);
    /// [`HTMLOptionElement.index`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/index)
    /// [`HTMLOptionElement.index`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement/index)
    [[nodiscard]] long index() const;
};

} // namespace webbind