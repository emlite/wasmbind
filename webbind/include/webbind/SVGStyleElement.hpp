#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class CSSStyleSheet;

/// Interface SVGStyleElement
/// [`SVGStyleElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement)
class SVGStyleElement : public SVGElement {
    explicit SVGStyleElement(Handle h) noexcept;
public:
    explicit SVGStyleElement(const emlite::Val &val) noexcept;
    static SVGStyleElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGStyleElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGStyleElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/type)
    /// [`SVGStyleElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`SVGStyleElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/type)
    void type(const jsbind::String& value);
    /// [`SVGStyleElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/media)
    /// [`SVGStyleElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/media)
    [[nodiscard]] jsbind::String media() const;
    /// Setter of the `media` attribute.
    /// [`SVGStyleElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/media)
    void media(const jsbind::String& value);
    /// [`SVGStyleElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/title)
    /// [`SVGStyleElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/title)
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    /// [`SVGStyleElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/title)
    void title(const jsbind::String& value);
    /// [`SVGStyleElement.sheet`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/sheet)
    /// [`SVGStyleElement.sheet`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStyleElement/sheet)
    [[nodiscard]] CSSStyleSheet sheet() const;
};

} // namespace webbind