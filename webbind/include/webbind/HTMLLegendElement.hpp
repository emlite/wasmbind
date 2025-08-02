#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;


/// The HTMLLegendElement class.
/// [`HTMLLegendElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLegendElement)
class HTMLLegendElement : public HTMLElement {
    explicit HTMLLegendElement(Handle h) noexcept;

public:
    explicit HTMLLegendElement(const emlite::Val &val) noexcept;
    static HTMLLegendElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLLegendElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLLegendElement(..)` constructor, creating a new HTMLLegendElement instance
    HTMLLegendElement();
    /// Getter of the `form` attribute.
    /// [`HTMLLegendElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLegendElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// Getter of the `align` attribute.
    /// [`HTMLLegendElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLegendElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLLegendElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLegendElement/align)
    void align(const jsbind::String& value);
};

