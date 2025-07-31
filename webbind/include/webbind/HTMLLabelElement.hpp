#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;


/// The HTMLLabelElement class.
/// [`HTMLLabelElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLabelElement)
class HTMLLabelElement : public HTMLElement {
    explicit HTMLLabelElement(Handle h) noexcept;

public:
    explicit HTMLLabelElement(const emlite::Val &val) noexcept;
    static HTMLLabelElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLLabelElement clone() const noexcept;
    /// The `new HTMLLabelElement(..)` constructor, creating a new HTMLLabelElement instance
    HTMLLabelElement();
    /// Getter of the `form` attribute.
    /// [`HTMLLabelElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLabelElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// Getter of the `htmlFor` attribute.
    /// [`HTMLLabelElement.htmlFor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLabelElement/htmlFor)
    [[nodiscard]] jsbind::String htmlFor() const;
    /// Setter of the `htmlFor` attribute.
    /// [`HTMLLabelElement.htmlFor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLabelElement/htmlFor)
    void htmlFor(const jsbind::String& value);
    /// Getter of the `control` attribute.
    /// [`HTMLLabelElement.control`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLabelElement/control)
    [[nodiscard]] HTMLElement control() const;
};

