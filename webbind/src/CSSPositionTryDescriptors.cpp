#include <webbind/CSSPositionTryDescriptors.hpp>


CSSPositionTryDescriptors CSSPositionTryDescriptors::take_ownership(Handle h) noexcept {
        return CSSPositionTryDescriptors(h);
    }
CSSPositionTryDescriptors CSSPositionTryDescriptors::clone() const noexcept { return *this; }
CSSPositionTryDescriptors::CSSPositionTryDescriptors(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSPositionTryDescriptors::CSSPositionTryDescriptors(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}


jsbind::CSSOMString CSSPositionTryDescriptors::margin() const {
    return CSSStyleDeclaration::get("margin").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginTop() const {
    return CSSStyleDeclaration::get("marginTop").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginTop(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginTop", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginRight() const {
    return CSSStyleDeclaration::get("marginRight").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginRight(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginRight", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginBottom() const {
    return CSSStyleDeclaration::get("marginBottom").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginBottom(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginBottom", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginLeft() const {
    return CSSStyleDeclaration::get("marginLeft").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginLeft(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginLeft", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginBlock() const {
    return CSSStyleDeclaration::get("marginBlock").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginBlock(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginBlock", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginBlockStart() const {
    return CSSStyleDeclaration::get("marginBlockStart").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginBlockStart(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginBlockStart", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginBlockEnd() const {
    return CSSStyleDeclaration::get("marginBlockEnd").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginBlockEnd(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginBlockEnd", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginInline() const {
    return CSSStyleDeclaration::get("marginInline").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginInline(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginInline", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginInlineStart() const {
    return CSSStyleDeclaration::get("marginInlineStart").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginInlineStart(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginInlineStart", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::marginInlineEnd() const {
    return CSSStyleDeclaration::get("marginInlineEnd").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::marginInlineEnd(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginInlineEnd", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_top() const {
    return CSSStyleDeclaration::get("margin-top").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_top(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-top", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_right() const {
    return CSSStyleDeclaration::get("margin-right").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_right(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-right", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_bottom() const {
    return CSSStyleDeclaration::get("margin-bottom").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_bottom(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-bottom", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_left() const {
    return CSSStyleDeclaration::get("margin-left").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_left(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-left", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_block() const {
    return CSSStyleDeclaration::get("margin-block").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_block(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-block", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_block_start() const {
    return CSSStyleDeclaration::get("margin-block-start").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_block_start(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-block-start", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_block_end() const {
    return CSSStyleDeclaration::get("margin-block-end").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_block_end(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-block-end", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_inline() const {
    return CSSStyleDeclaration::get("margin-inline").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_inline(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-inline", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_inline_start() const {
    return CSSStyleDeclaration::get("margin-inline-start").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_inline_start(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-inline-start", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::margin_inline_end() const {
    return CSSStyleDeclaration::get("margin-inline-end").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::margin_inline_end(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-inline-end", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inset() const {
    return CSSStyleDeclaration::get("inset").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inset(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inset", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::insetBlock() const {
    return CSSStyleDeclaration::get("insetBlock").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::insetBlock(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("insetBlock", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::insetBlockStart() const {
    return CSSStyleDeclaration::get("insetBlockStart").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::insetBlockStart(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("insetBlockStart", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::insetBlockEnd() const {
    return CSSStyleDeclaration::get("insetBlockEnd").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::insetBlockEnd(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("insetBlockEnd", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::insetInline() const {
    return CSSStyleDeclaration::get("insetInline").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::insetInline(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("insetInline", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::insetInlineStart() const {
    return CSSStyleDeclaration::get("insetInlineStart").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::insetInlineStart(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("insetInlineStart", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::insetInlineEnd() const {
    return CSSStyleDeclaration::get("insetInlineEnd").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::insetInlineEnd(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("insetInlineEnd", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::top() const {
    return CSSStyleDeclaration::get("top").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::top(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("top", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::left() const {
    return CSSStyleDeclaration::get("left").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::left(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("left", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::right() const {
    return CSSStyleDeclaration::get("right").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::right(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("right", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::bottom() const {
    return CSSStyleDeclaration::get("bottom").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::bottom(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("bottom", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inset_block() const {
    return CSSStyleDeclaration::get("inset-block").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inset_block(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inset-block", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inset_block_start() const {
    return CSSStyleDeclaration::get("inset-block-start").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inset_block_start(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inset-block-start", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inset_block_end() const {
    return CSSStyleDeclaration::get("inset-block-end").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inset_block_end(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inset-block-end", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inset_inline() const {
    return CSSStyleDeclaration::get("inset-inline").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inset_inline(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inset-inline", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inset_inline_start() const {
    return CSSStyleDeclaration::get("inset-inline-start").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inset_inline_start(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inset-inline-start", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inset_inline_end() const {
    return CSSStyleDeclaration::get("inset-inline-end").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inset_inline_end(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inset-inline-end", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::width() const {
    return CSSStyleDeclaration::get("width").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::width(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("width", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::minWidth() const {
    return CSSStyleDeclaration::get("minWidth").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::minWidth(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("minWidth", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::maxWidth() const {
    return CSSStyleDeclaration::get("maxWidth").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::maxWidth(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("maxWidth", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::height() const {
    return CSSStyleDeclaration::get("height").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::height(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("height", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::minHeight() const {
    return CSSStyleDeclaration::get("minHeight").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::minHeight(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("minHeight", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::maxHeight() const {
    return CSSStyleDeclaration::get("maxHeight").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::maxHeight(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("maxHeight", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::blockSize() const {
    return CSSStyleDeclaration::get("blockSize").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::blockSize(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("blockSize", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::minBlockSize() const {
    return CSSStyleDeclaration::get("minBlockSize").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::minBlockSize(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("minBlockSize", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::maxBlockSize() const {
    return CSSStyleDeclaration::get("maxBlockSize").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::maxBlockSize(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("maxBlockSize", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inlineSize() const {
    return CSSStyleDeclaration::get("inlineSize").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inlineSize(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inlineSize", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::minInlineSize() const {
    return CSSStyleDeclaration::get("minInlineSize").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::minInlineSize(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("minInlineSize", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::maxInlineSize() const {
    return CSSStyleDeclaration::get("maxInlineSize").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::maxInlineSize(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("maxInlineSize", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::min_width() const {
    return CSSStyleDeclaration::get("min-width").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::min_width(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("min-width", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::max_width() const {
    return CSSStyleDeclaration::get("max-width").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::max_width(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("max-width", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::min_height() const {
    return CSSStyleDeclaration::get("min-height").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::min_height(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("min-height", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::max_height() const {
    return CSSStyleDeclaration::get("max-height").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::max_height(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("max-height", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::block_size() const {
    return CSSStyleDeclaration::get("block-size").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::block_size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("block-size", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::min_block_size() const {
    return CSSStyleDeclaration::get("min-block-size").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::min_block_size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("min-block-size", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::max_block_size() const {
    return CSSStyleDeclaration::get("max-block-size").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::max_block_size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("max-block-size", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::inline_size() const {
    return CSSStyleDeclaration::get("inline-size").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::inline_size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("inline-size", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::min_inline_size() const {
    return CSSStyleDeclaration::get("min-inline-size").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::min_inline_size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("min-inline-size", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::max_inline_size() const {
    return CSSStyleDeclaration::get("max-inline-size").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::max_inline_size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("max-inline-size", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::placeSelf() const {
    return CSSStyleDeclaration::get("placeSelf").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::placeSelf(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("placeSelf", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::alignSelf() const {
    return CSSStyleDeclaration::get("alignSelf").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::alignSelf(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("alignSelf", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::justifySelf() const {
    return CSSStyleDeclaration::get("justifySelf").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::justifySelf(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("justifySelf", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::place_self() const {
    return CSSStyleDeclaration::get("place-self").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::place_self(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("place-self", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::align_self() const {
    return CSSStyleDeclaration::get("align-self").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::align_self(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("align-self", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::justify_self() const {
    return CSSStyleDeclaration::get("justify-self").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::justify_self(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("justify-self", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::positionAnchor() const {
    return CSSStyleDeclaration::get("positionAnchor").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::positionAnchor(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("positionAnchor", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::position_anchor() const {
    return CSSStyleDeclaration::get("position-anchor").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::position_anchor(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("position-anchor", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::positionArea() const {
    return CSSStyleDeclaration::get("positionArea").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::positionArea(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("positionArea", value);
}

jsbind::CSSOMString CSSPositionTryDescriptors::position_area() const {
    return CSSStyleDeclaration::get("position-area").as<jsbind::CSSOMString>();
}

void CSSPositionTryDescriptors::position_area(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("position-area", value);
}

