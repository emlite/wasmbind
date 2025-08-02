#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLBRElement class.
/// [`HTMLBRElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBRElement)
class HTMLBRElement : public HTMLElement {
    explicit HTMLBRElement(Handle h) noexcept;

public:
    explicit HTMLBRElement(const emlite::Val &val) noexcept;
    static HTMLBRElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLBRElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLBRElement(..)` constructor, creating a new HTMLBRElement instance
    HTMLBRElement();
    /// Getter of the `clear` attribute.
    /// [`HTMLBRElement.clear`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBRElement/clear)
    [[nodiscard]] jsbind::String clear() const;
    /// Setter of the `clear` attribute.
    /// [`HTMLBRElement.clear`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBRElement/clear)
    void clear(const jsbind::String& value);
};

