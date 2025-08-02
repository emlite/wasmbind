#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleDeclaration.hpp"
#include "enums.hpp"


/// The CSSPageDescriptors class.
/// [`CSSPageDescriptors`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors)
class CSSPageDescriptors : public CSSStyleDeclaration {
    explicit CSSPageDescriptors(Handle h) noexcept;

public:
    explicit CSSPageDescriptors(const emlite::Val &val) noexcept;
    static CSSPageDescriptors take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSPageDescriptors clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `margin` attribute.
    /// [`CSSPageDescriptors.margin`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin)
    [[nodiscard]] jsbind::String margin() const;
    /// Setter of the `margin` attribute.
    /// [`CSSPageDescriptors.margin`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin)
    void margin(const jsbind::String& value);
    /// Getter of the `marginTop` attribute.
    /// [`CSSPageDescriptors.marginTop`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginTop)
    [[nodiscard]] jsbind::String marginTop() const;
    /// Setter of the `marginTop` attribute.
    /// [`CSSPageDescriptors.marginTop`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginTop)
    void marginTop(const jsbind::String& value);
    /// Getter of the `marginRight` attribute.
    /// [`CSSPageDescriptors.marginRight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginRight)
    [[nodiscard]] jsbind::String marginRight() const;
    /// Setter of the `marginRight` attribute.
    /// [`CSSPageDescriptors.marginRight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginRight)
    void marginRight(const jsbind::String& value);
    /// Getter of the `marginBottom` attribute.
    /// [`CSSPageDescriptors.marginBottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginBottom)
    [[nodiscard]] jsbind::String marginBottom() const;
    /// Setter of the `marginBottom` attribute.
    /// [`CSSPageDescriptors.marginBottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginBottom)
    void marginBottom(const jsbind::String& value);
    /// Getter of the `marginLeft` attribute.
    /// [`CSSPageDescriptors.marginLeft`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginLeft)
    [[nodiscard]] jsbind::String marginLeft() const;
    /// Setter of the `marginLeft` attribute.
    /// [`CSSPageDescriptors.marginLeft`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marginLeft)
    void marginLeft(const jsbind::String& value);
    /// Getter of the `margin-top` attribute.
    /// [`CSSPageDescriptors.margin-top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-top)
    [[nodiscard]] jsbind::String margin_top() const;
    /// Setter of the `margin-top` attribute.
    /// [`CSSPageDescriptors.margin-top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-top)
    void margin_top(const jsbind::String& value);
    /// Getter of the `margin-right` attribute.
    /// [`CSSPageDescriptors.margin-right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-right)
    [[nodiscard]] jsbind::String margin_right() const;
    /// Setter of the `margin-right` attribute.
    /// [`CSSPageDescriptors.margin-right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-right)
    void margin_right(const jsbind::String& value);
    /// Getter of the `margin-bottom` attribute.
    /// [`CSSPageDescriptors.margin-bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-bottom)
    [[nodiscard]] jsbind::String margin_bottom() const;
    /// Setter of the `margin-bottom` attribute.
    /// [`CSSPageDescriptors.margin-bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-bottom)
    void margin_bottom(const jsbind::String& value);
    /// Getter of the `margin-left` attribute.
    /// [`CSSPageDescriptors.margin-left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-left)
    [[nodiscard]] jsbind::String margin_left() const;
    /// Setter of the `margin-left` attribute.
    /// [`CSSPageDescriptors.margin-left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/margin-left)
    void margin_left(const jsbind::String& value);
    /// Getter of the `size` attribute.
    /// [`CSSPageDescriptors.size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/size)
    [[nodiscard]] jsbind::String size() const;
    /// Setter of the `size` attribute.
    /// [`CSSPageDescriptors.size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/size)
    void size(const jsbind::String& value);
    /// Getter of the `pageOrientation` attribute.
    /// [`CSSPageDescriptors.pageOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/pageOrientation)
    [[nodiscard]] jsbind::String pageOrientation() const;
    /// Setter of the `pageOrientation` attribute.
    /// [`CSSPageDescriptors.pageOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/pageOrientation)
    void pageOrientation(const jsbind::String& value);
    /// Getter of the `page-orientation` attribute.
    /// [`CSSPageDescriptors.page-orientation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/page-orientation)
    [[nodiscard]] jsbind::String page_orientation() const;
    /// Setter of the `page-orientation` attribute.
    /// [`CSSPageDescriptors.page-orientation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/page-orientation)
    void page_orientation(const jsbind::String& value);
    /// Getter of the `marks` attribute.
    /// [`CSSPageDescriptors.marks`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marks)
    [[nodiscard]] jsbind::String marks() const;
    /// Setter of the `marks` attribute.
    /// [`CSSPageDescriptors.marks`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/marks)
    void marks(const jsbind::String& value);
    /// Getter of the `bleed` attribute.
    /// [`CSSPageDescriptors.bleed`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/bleed)
    [[nodiscard]] jsbind::String bleed() const;
    /// Setter of the `bleed` attribute.
    /// [`CSSPageDescriptors.bleed`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors/bleed)
    void bleed(const jsbind::String& value);
};

