#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLFrameSetElement class.
/// [`HTMLFrameSetElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement)
class HTMLFrameSetElement : public HTMLElement {
    explicit HTMLFrameSetElement(Handle h) noexcept;

public:
    explicit HTMLFrameSetElement(const emlite::Val &val) noexcept;
    static HTMLFrameSetElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLFrameSetElement clone() const noexcept;
    /// The `new HTMLFrameSetElement(..)` constructor, creating a new HTMLFrameSetElement instance
    HTMLFrameSetElement();
    /// Getter of the `cols` attribute.
    /// [`HTMLFrameSetElement.cols`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement/cols)
    [[nodiscard]] jsbind::String cols() const;
    /// Setter of the `cols` attribute.
    /// [`HTMLFrameSetElement.cols`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement/cols)
    void cols(const jsbind::String& value);
    /// Getter of the `rows` attribute.
    /// [`HTMLFrameSetElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement/rows)
    [[nodiscard]] jsbind::String rows() const;
    /// Setter of the `rows` attribute.
    /// [`HTMLFrameSetElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement/rows)
    void rows(const jsbind::String& value);
    /// Getter of the `onportalactivate` attribute.
    /// [`HTMLFrameSetElement.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement/onportalactivate)
    [[nodiscard]] jsbind::Any onportalactivate() const;
    /// Setter of the `onportalactivate` attribute.
    /// [`HTMLFrameSetElement.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFrameSetElement/onportalactivate)
    void onportalactivate(const jsbind::Any& value);
};

