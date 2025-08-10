#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSStyleDeclaration.hpp"

namespace webbind {

/// Interface CSSPositionTryDescriptors
/// [`CSSPositionTryDescriptors`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors)
class CSSPositionTryDescriptors : public CSSStyleDeclaration {
    explicit CSSPositionTryDescriptors(Handle h) noexcept;
public:
    explicit CSSPositionTryDescriptors(const emlite::Val &val) noexcept;
    static CSSPositionTryDescriptors take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSPositionTryDescriptors clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSPositionTryDescriptors.margin`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin)
    /// [`CSSPositionTryDescriptors.margin`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin)
    [[nodiscard]] jsbind::String margin() const;
    /// Setter of the `margin` attribute.
    /// [`CSSPositionTryDescriptors.margin`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin)
    void margin(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginTop`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginTop)
    /// [`CSSPositionTryDescriptors.marginTop`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginTop)
    [[nodiscard]] jsbind::String marginTop() const;
    /// Setter of the `marginTop` attribute.
    /// [`CSSPositionTryDescriptors.marginTop`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginTop)
    void marginTop(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginRight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginRight)
    /// [`CSSPositionTryDescriptors.marginRight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginRight)
    [[nodiscard]] jsbind::String marginRight() const;
    /// Setter of the `marginRight` attribute.
    /// [`CSSPositionTryDescriptors.marginRight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginRight)
    void marginRight(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginBottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBottom)
    /// [`CSSPositionTryDescriptors.marginBottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBottom)
    [[nodiscard]] jsbind::String marginBottom() const;
    /// Setter of the `marginBottom` attribute.
    /// [`CSSPositionTryDescriptors.marginBottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBottom)
    void marginBottom(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginLeft`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginLeft)
    /// [`CSSPositionTryDescriptors.marginLeft`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginLeft)
    [[nodiscard]] jsbind::String marginLeft() const;
    /// Setter of the `marginLeft` attribute.
    /// [`CSSPositionTryDescriptors.marginLeft`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginLeft)
    void marginLeft(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginBlock`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlock)
    /// [`CSSPositionTryDescriptors.marginBlock`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlock)
    [[nodiscard]] jsbind::String marginBlock() const;
    /// Setter of the `marginBlock` attribute.
    /// [`CSSPositionTryDescriptors.marginBlock`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlock)
    void marginBlock(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginBlockStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlockStart)
    /// [`CSSPositionTryDescriptors.marginBlockStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlockStart)
    [[nodiscard]] jsbind::String marginBlockStart() const;
    /// Setter of the `marginBlockStart` attribute.
    /// [`CSSPositionTryDescriptors.marginBlockStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlockStart)
    void marginBlockStart(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginBlockEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlockEnd)
    /// [`CSSPositionTryDescriptors.marginBlockEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlockEnd)
    [[nodiscard]] jsbind::String marginBlockEnd() const;
    /// Setter of the `marginBlockEnd` attribute.
    /// [`CSSPositionTryDescriptors.marginBlockEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginBlockEnd)
    void marginBlockEnd(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginInline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInline)
    /// [`CSSPositionTryDescriptors.marginInline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInline)
    [[nodiscard]] jsbind::String marginInline() const;
    /// Setter of the `marginInline` attribute.
    /// [`CSSPositionTryDescriptors.marginInline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInline)
    void marginInline(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginInlineStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInlineStart)
    /// [`CSSPositionTryDescriptors.marginInlineStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInlineStart)
    [[nodiscard]] jsbind::String marginInlineStart() const;
    /// Setter of the `marginInlineStart` attribute.
    /// [`CSSPositionTryDescriptors.marginInlineStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInlineStart)
    void marginInlineStart(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.marginInlineEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInlineEnd)
    /// [`CSSPositionTryDescriptors.marginInlineEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInlineEnd)
    [[nodiscard]] jsbind::String marginInlineEnd() const;
    /// Setter of the `marginInlineEnd` attribute.
    /// [`CSSPositionTryDescriptors.marginInlineEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/marginInlineEnd)
    void marginInlineEnd(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-top)
    /// [`CSSPositionTryDescriptors.margin-top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-top)
    [[nodiscard]] jsbind::String margin_top() const;
    /// Setter of the `margin-top` attribute.
    /// [`CSSPositionTryDescriptors.margin-top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-top)
    void margin_top(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-right)
    /// [`CSSPositionTryDescriptors.margin-right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-right)
    [[nodiscard]] jsbind::String margin_right() const;
    /// Setter of the `margin-right` attribute.
    /// [`CSSPositionTryDescriptors.margin-right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-right)
    void margin_right(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-bottom)
    /// [`CSSPositionTryDescriptors.margin-bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-bottom)
    [[nodiscard]] jsbind::String margin_bottom() const;
    /// Setter of the `margin-bottom` attribute.
    /// [`CSSPositionTryDescriptors.margin-bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-bottom)
    void margin_bottom(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-left)
    /// [`CSSPositionTryDescriptors.margin-left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-left)
    [[nodiscard]] jsbind::String margin_left() const;
    /// Setter of the `margin-left` attribute.
    /// [`CSSPositionTryDescriptors.margin-left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-left)
    void margin_left(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-block`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block)
    /// [`CSSPositionTryDescriptors.margin-block`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block)
    [[nodiscard]] jsbind::String margin_block() const;
    /// Setter of the `margin-block` attribute.
    /// [`CSSPositionTryDescriptors.margin-block`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block)
    void margin_block(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-block-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block-start)
    /// [`CSSPositionTryDescriptors.margin-block-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block-start)
    [[nodiscard]] jsbind::String margin_block_start() const;
    /// Setter of the `margin-block-start` attribute.
    /// [`CSSPositionTryDescriptors.margin-block-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block-start)
    void margin_block_start(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-block-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block-end)
    /// [`CSSPositionTryDescriptors.margin-block-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block-end)
    [[nodiscard]] jsbind::String margin_block_end() const;
    /// Setter of the `margin-block-end` attribute.
    /// [`CSSPositionTryDescriptors.margin-block-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-block-end)
    void margin_block_end(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-inline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline)
    /// [`CSSPositionTryDescriptors.margin-inline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline)
    [[nodiscard]] jsbind::String margin_inline() const;
    /// Setter of the `margin-inline` attribute.
    /// [`CSSPositionTryDescriptors.margin-inline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline)
    void margin_inline(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-inline-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline-start)
    /// [`CSSPositionTryDescriptors.margin-inline-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline-start)
    [[nodiscard]] jsbind::String margin_inline_start() const;
    /// Setter of the `margin-inline-start` attribute.
    /// [`CSSPositionTryDescriptors.margin-inline-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline-start)
    void margin_inline_start(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.margin-inline-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline-end)
    /// [`CSSPositionTryDescriptors.margin-inline-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline-end)
    [[nodiscard]] jsbind::String margin_inline_end() const;
    /// Setter of the `margin-inline-end` attribute.
    /// [`CSSPositionTryDescriptors.margin-inline-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/margin-inline-end)
    void margin_inline_end(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inset`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset)
    /// [`CSSPositionTryDescriptors.inset`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset)
    [[nodiscard]] jsbind::String inset() const;
    /// Setter of the `inset` attribute.
    /// [`CSSPositionTryDescriptors.inset`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset)
    void inset(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.insetBlock`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlock)
    /// [`CSSPositionTryDescriptors.insetBlock`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlock)
    [[nodiscard]] jsbind::String insetBlock() const;
    /// Setter of the `insetBlock` attribute.
    /// [`CSSPositionTryDescriptors.insetBlock`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlock)
    void insetBlock(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.insetBlockStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlockStart)
    /// [`CSSPositionTryDescriptors.insetBlockStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlockStart)
    [[nodiscard]] jsbind::String insetBlockStart() const;
    /// Setter of the `insetBlockStart` attribute.
    /// [`CSSPositionTryDescriptors.insetBlockStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlockStart)
    void insetBlockStart(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.insetBlockEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlockEnd)
    /// [`CSSPositionTryDescriptors.insetBlockEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlockEnd)
    [[nodiscard]] jsbind::String insetBlockEnd() const;
    /// Setter of the `insetBlockEnd` attribute.
    /// [`CSSPositionTryDescriptors.insetBlockEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetBlockEnd)
    void insetBlockEnd(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.insetInline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInline)
    /// [`CSSPositionTryDescriptors.insetInline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInline)
    [[nodiscard]] jsbind::String insetInline() const;
    /// Setter of the `insetInline` attribute.
    /// [`CSSPositionTryDescriptors.insetInline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInline)
    void insetInline(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.insetInlineStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInlineStart)
    /// [`CSSPositionTryDescriptors.insetInlineStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInlineStart)
    [[nodiscard]] jsbind::String insetInlineStart() const;
    /// Setter of the `insetInlineStart` attribute.
    /// [`CSSPositionTryDescriptors.insetInlineStart`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInlineStart)
    void insetInlineStart(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.insetInlineEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInlineEnd)
    /// [`CSSPositionTryDescriptors.insetInlineEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInlineEnd)
    [[nodiscard]] jsbind::String insetInlineEnd() const;
    /// Setter of the `insetInlineEnd` attribute.
    /// [`CSSPositionTryDescriptors.insetInlineEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/insetInlineEnd)
    void insetInlineEnd(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/top)
    /// [`CSSPositionTryDescriptors.top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/top)
    [[nodiscard]] jsbind::String top() const;
    /// Setter of the `top` attribute.
    /// [`CSSPositionTryDescriptors.top`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/top)
    void top(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/left)
    /// [`CSSPositionTryDescriptors.left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/left)
    [[nodiscard]] jsbind::String left() const;
    /// Setter of the `left` attribute.
    /// [`CSSPositionTryDescriptors.left`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/left)
    void left(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/right)
    /// [`CSSPositionTryDescriptors.right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/right)
    [[nodiscard]] jsbind::String right() const;
    /// Setter of the `right` attribute.
    /// [`CSSPositionTryDescriptors.right`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/right)
    void right(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/bottom)
    /// [`CSSPositionTryDescriptors.bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/bottom)
    [[nodiscard]] jsbind::String bottom() const;
    /// Setter of the `bottom` attribute.
    /// [`CSSPositionTryDescriptors.bottom`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/bottom)
    void bottom(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inset-block`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block)
    /// [`CSSPositionTryDescriptors.inset-block`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block)
    [[nodiscard]] jsbind::String inset_block() const;
    /// Setter of the `inset-block` attribute.
    /// [`CSSPositionTryDescriptors.inset-block`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block)
    void inset_block(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inset-block-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block-start)
    /// [`CSSPositionTryDescriptors.inset-block-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block-start)
    [[nodiscard]] jsbind::String inset_block_start() const;
    /// Setter of the `inset-block-start` attribute.
    /// [`CSSPositionTryDescriptors.inset-block-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block-start)
    void inset_block_start(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inset-block-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block-end)
    /// [`CSSPositionTryDescriptors.inset-block-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block-end)
    [[nodiscard]] jsbind::String inset_block_end() const;
    /// Setter of the `inset-block-end` attribute.
    /// [`CSSPositionTryDescriptors.inset-block-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-block-end)
    void inset_block_end(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inset-inline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline)
    /// [`CSSPositionTryDescriptors.inset-inline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline)
    [[nodiscard]] jsbind::String inset_inline() const;
    /// Setter of the `inset-inline` attribute.
    /// [`CSSPositionTryDescriptors.inset-inline`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline)
    void inset_inline(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inset-inline-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline-start)
    /// [`CSSPositionTryDescriptors.inset-inline-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline-start)
    [[nodiscard]] jsbind::String inset_inline_start() const;
    /// Setter of the `inset-inline-start` attribute.
    /// [`CSSPositionTryDescriptors.inset-inline-start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline-start)
    void inset_inline_start(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inset-inline-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline-end)
    /// [`CSSPositionTryDescriptors.inset-inline-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline-end)
    [[nodiscard]] jsbind::String inset_inline_end() const;
    /// Setter of the `inset-inline-end` attribute.
    /// [`CSSPositionTryDescriptors.inset-inline-end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inset-inline-end)
    void inset_inline_end(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/width)
    /// [`CSSPositionTryDescriptors.width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`CSSPositionTryDescriptors.width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/width)
    void width(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.minWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minWidth)
    /// [`CSSPositionTryDescriptors.minWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minWidth)
    [[nodiscard]] jsbind::String minWidth() const;
    /// Setter of the `minWidth` attribute.
    /// [`CSSPositionTryDescriptors.minWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minWidth)
    void minWidth(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.maxWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxWidth)
    /// [`CSSPositionTryDescriptors.maxWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxWidth)
    [[nodiscard]] jsbind::String maxWidth() const;
    /// Setter of the `maxWidth` attribute.
    /// [`CSSPositionTryDescriptors.maxWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxWidth)
    void maxWidth(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/height)
    /// [`CSSPositionTryDescriptors.height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/height)
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    /// [`CSSPositionTryDescriptors.height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/height)
    void height(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.minHeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minHeight)
    /// [`CSSPositionTryDescriptors.minHeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minHeight)
    [[nodiscard]] jsbind::String minHeight() const;
    /// Setter of the `minHeight` attribute.
    /// [`CSSPositionTryDescriptors.minHeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minHeight)
    void minHeight(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.maxHeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxHeight)
    /// [`CSSPositionTryDescriptors.maxHeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxHeight)
    [[nodiscard]] jsbind::String maxHeight() const;
    /// Setter of the `maxHeight` attribute.
    /// [`CSSPositionTryDescriptors.maxHeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxHeight)
    void maxHeight(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/blockSize)
    /// [`CSSPositionTryDescriptors.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/blockSize)
    [[nodiscard]] jsbind::String blockSize() const;
    /// Setter of the `blockSize` attribute.
    /// [`CSSPositionTryDescriptors.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/blockSize)
    void blockSize(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.minBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minBlockSize)
    /// [`CSSPositionTryDescriptors.minBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minBlockSize)
    [[nodiscard]] jsbind::String minBlockSize() const;
    /// Setter of the `minBlockSize` attribute.
    /// [`CSSPositionTryDescriptors.minBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minBlockSize)
    void minBlockSize(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.maxBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxBlockSize)
    /// [`CSSPositionTryDescriptors.maxBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxBlockSize)
    [[nodiscard]] jsbind::String maxBlockSize() const;
    /// Setter of the `maxBlockSize` attribute.
    /// [`CSSPositionTryDescriptors.maxBlockSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxBlockSize)
    void maxBlockSize(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inlineSize)
    /// [`CSSPositionTryDescriptors.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inlineSize)
    [[nodiscard]] jsbind::String inlineSize() const;
    /// Setter of the `inlineSize` attribute.
    /// [`CSSPositionTryDescriptors.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inlineSize)
    void inlineSize(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.minInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minInlineSize)
    /// [`CSSPositionTryDescriptors.minInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minInlineSize)
    [[nodiscard]] jsbind::String minInlineSize() const;
    /// Setter of the `minInlineSize` attribute.
    /// [`CSSPositionTryDescriptors.minInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/minInlineSize)
    void minInlineSize(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.maxInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxInlineSize)
    /// [`CSSPositionTryDescriptors.maxInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxInlineSize)
    [[nodiscard]] jsbind::String maxInlineSize() const;
    /// Setter of the `maxInlineSize` attribute.
    /// [`CSSPositionTryDescriptors.maxInlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/maxInlineSize)
    void maxInlineSize(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.min-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-width)
    /// [`CSSPositionTryDescriptors.min-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-width)
    [[nodiscard]] jsbind::String min_width() const;
    /// Setter of the `min-width` attribute.
    /// [`CSSPositionTryDescriptors.min-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-width)
    void min_width(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.max-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-width)
    /// [`CSSPositionTryDescriptors.max-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-width)
    [[nodiscard]] jsbind::String max_width() const;
    /// Setter of the `max-width` attribute.
    /// [`CSSPositionTryDescriptors.max-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-width)
    void max_width(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.min-height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-height)
    /// [`CSSPositionTryDescriptors.min-height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-height)
    [[nodiscard]] jsbind::String min_height() const;
    /// Setter of the `min-height` attribute.
    /// [`CSSPositionTryDescriptors.min-height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-height)
    void min_height(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.max-height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-height)
    /// [`CSSPositionTryDescriptors.max-height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-height)
    [[nodiscard]] jsbind::String max_height() const;
    /// Setter of the `max-height` attribute.
    /// [`CSSPositionTryDescriptors.max-height`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-height)
    void max_height(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/block-size)
    /// [`CSSPositionTryDescriptors.block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/block-size)
    [[nodiscard]] jsbind::String block_size() const;
    /// Setter of the `block-size` attribute.
    /// [`CSSPositionTryDescriptors.block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/block-size)
    void block_size(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.min-block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-block-size)
    /// [`CSSPositionTryDescriptors.min-block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-block-size)
    [[nodiscard]] jsbind::String min_block_size() const;
    /// Setter of the `min-block-size` attribute.
    /// [`CSSPositionTryDescriptors.min-block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-block-size)
    void min_block_size(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.max-block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-block-size)
    /// [`CSSPositionTryDescriptors.max-block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-block-size)
    [[nodiscard]] jsbind::String max_block_size() const;
    /// Setter of the `max-block-size` attribute.
    /// [`CSSPositionTryDescriptors.max-block-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-block-size)
    void max_block_size(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inline-size)
    /// [`CSSPositionTryDescriptors.inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inline-size)
    [[nodiscard]] jsbind::String inline_size() const;
    /// Setter of the `inline-size` attribute.
    /// [`CSSPositionTryDescriptors.inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/inline-size)
    void inline_size(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.min-inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-inline-size)
    /// [`CSSPositionTryDescriptors.min-inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-inline-size)
    [[nodiscard]] jsbind::String min_inline_size() const;
    /// Setter of the `min-inline-size` attribute.
    /// [`CSSPositionTryDescriptors.min-inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/min-inline-size)
    void min_inline_size(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.max-inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-inline-size)
    /// [`CSSPositionTryDescriptors.max-inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-inline-size)
    [[nodiscard]] jsbind::String max_inline_size() const;
    /// Setter of the `max-inline-size` attribute.
    /// [`CSSPositionTryDescriptors.max-inline-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/max-inline-size)
    void max_inline_size(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.placeSelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/placeSelf)
    /// [`CSSPositionTryDescriptors.placeSelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/placeSelf)
    [[nodiscard]] jsbind::String placeSelf() const;
    /// Setter of the `placeSelf` attribute.
    /// [`CSSPositionTryDescriptors.placeSelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/placeSelf)
    void placeSelf(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.alignSelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/alignSelf)
    /// [`CSSPositionTryDescriptors.alignSelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/alignSelf)
    [[nodiscard]] jsbind::String alignSelf() const;
    /// Setter of the `alignSelf` attribute.
    /// [`CSSPositionTryDescriptors.alignSelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/alignSelf)
    void alignSelf(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.justifySelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/justifySelf)
    /// [`CSSPositionTryDescriptors.justifySelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/justifySelf)
    [[nodiscard]] jsbind::String justifySelf() const;
    /// Setter of the `justifySelf` attribute.
    /// [`CSSPositionTryDescriptors.justifySelf`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/justifySelf)
    void justifySelf(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.place-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/place-self)
    /// [`CSSPositionTryDescriptors.place-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/place-self)
    [[nodiscard]] jsbind::String place_self() const;
    /// Setter of the `place-self` attribute.
    /// [`CSSPositionTryDescriptors.place-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/place-self)
    void place_self(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.align-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/align-self)
    /// [`CSSPositionTryDescriptors.align-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/align-self)
    [[nodiscard]] jsbind::String align_self() const;
    /// Setter of the `align-self` attribute.
    /// [`CSSPositionTryDescriptors.align-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/align-self)
    void align_self(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.justify-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/justify-self)
    /// [`CSSPositionTryDescriptors.justify-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/justify-self)
    [[nodiscard]] jsbind::String justify_self() const;
    /// Setter of the `justify-self` attribute.
    /// [`CSSPositionTryDescriptors.justify-self`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/justify-self)
    void justify_self(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.positionAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/positionAnchor)
    /// [`CSSPositionTryDescriptors.positionAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/positionAnchor)
    [[nodiscard]] jsbind::String positionAnchor() const;
    /// Setter of the `positionAnchor` attribute.
    /// [`CSSPositionTryDescriptors.positionAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/positionAnchor)
    void positionAnchor(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.position-anchor`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/position-anchor)
    /// [`CSSPositionTryDescriptors.position-anchor`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/position-anchor)
    [[nodiscard]] jsbind::String position_anchor() const;
    /// Setter of the `position-anchor` attribute.
    /// [`CSSPositionTryDescriptors.position-anchor`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/position-anchor)
    void position_anchor(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.positionArea`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/positionArea)
    /// [`CSSPositionTryDescriptors.positionArea`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/positionArea)
    [[nodiscard]] jsbind::String positionArea() const;
    /// Setter of the `positionArea` attribute.
    /// [`CSSPositionTryDescriptors.positionArea`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/positionArea)
    void positionArea(const jsbind::String& value);
    /// [`CSSPositionTryDescriptors.position-area`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/position-area)
    /// [`CSSPositionTryDescriptors.position-area`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/position-area)
    [[nodiscard]] jsbind::String position_area() const;
    /// Setter of the `position-area` attribute.
    /// [`CSSPositionTryDescriptors.position-area`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors/position-area)
    void position_area(const jsbind::String& value);
};

} // namespace webbind