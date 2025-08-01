#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLModElement class.
/// [`HTMLModElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLModElement)
class HTMLModElement : public HTMLElement {
    explicit HTMLModElement(Handle h) noexcept;

public:
    explicit HTMLModElement(const emlite::Val &val) noexcept;
    static HTMLModElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLModElement clone() const noexcept;
    /// The `new HTMLModElement(..)` constructor, creating a new HTMLModElement instance
    HTMLModElement();
    /// Getter of the `cite` attribute.
    /// [`HTMLModElement.cite`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLModElement/cite)
    [[nodiscard]] jsbind::String cite() const;
    /// Setter of the `cite` attribute.
    /// [`HTMLModElement.cite`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLModElement/cite)
    void cite(const jsbind::String& value);
    /// Getter of the `dateTime` attribute.
    /// [`HTMLModElement.dateTime`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLModElement/dateTime)
    [[nodiscard]] jsbind::String dateTime() const;
    /// Setter of the `dateTime` attribute.
    /// [`HTMLModElement.dateTime`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLModElement/dateTime)
    void dateTime(const jsbind::String& value);
};

