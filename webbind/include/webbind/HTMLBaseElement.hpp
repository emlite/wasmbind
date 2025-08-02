#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLBaseElement class.
/// [`HTMLBaseElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBaseElement)
class HTMLBaseElement : public HTMLElement {
    explicit HTMLBaseElement(Handle h) noexcept;

public:
    explicit HTMLBaseElement(const emlite::Val &val) noexcept;
    static HTMLBaseElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLBaseElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLBaseElement(..)` constructor, creating a new HTMLBaseElement instance
    HTMLBaseElement();
    /// Getter of the `href` attribute.
    /// [`HTMLBaseElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBaseElement/href)
    [[nodiscard]] jsbind::String href() const;
    /// Setter of the `href` attribute.
    /// [`HTMLBaseElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBaseElement/href)
    void href(const jsbind::String& value);
    /// Getter of the `target` attribute.
    /// [`HTMLBaseElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBaseElement/target)
    [[nodiscard]] jsbind::String target() const;
    /// Setter of the `target` attribute.
    /// [`HTMLBaseElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBaseElement/target)
    void target(const jsbind::String& value);
};

