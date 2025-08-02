#include <webbind/CSSPositionTryDescriptors.hpp>


CSSPositionTryDescriptors CSSPositionTryDescriptors::take_ownership(Handle h) noexcept {
        return CSSPositionTryDescriptors(h);
    }
CSSPositionTryDescriptors CSSPositionTryDescriptors::clone() const noexcept { return *this; }
emlite::Val CSSPositionTryDescriptors::instance() noexcept { return emlite::Val::global("CSSPositionTryDescriptors"); }
CSSPositionTryDescriptors::CSSPositionTryDescriptors(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSPositionTryDescriptors::CSSPositionTryDescriptors(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}


jsbind::String CSSPositionTryDescriptors::margin() const {
    return CSSStyleDeclaration::get("margin").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin", value);
}

jsbind::String CSSPositionTryDescriptors::marginTop() const {
    return CSSStyleDeclaration::get("marginTop").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginTop(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginTop", value);
}

jsbind::String CSSPositionTryDescriptors::marginRight() const {
    return CSSStyleDeclaration::get("marginRight").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginRight(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginRight", value);
}

jsbind::String CSSPositionTryDescriptors::marginBottom() const {
    return CSSStyleDeclaration::get("marginBottom").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginBottom(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginBottom", value);
}

jsbind::String CSSPositionTryDescriptors::marginLeft() const {
    return CSSStyleDeclaration::get("marginLeft").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginLeft(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginLeft", value);
}

jsbind::String CSSPositionTryDescriptors::marginBlock() const {
    return CSSStyleDeclaration::get("marginBlock").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginBlock(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginBlock", value);
}

jsbind::String CSSPositionTryDescriptors::marginBlockStart() const {
    return CSSStyleDeclaration::get("marginBlockStart").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginBlockStart(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginBlockStart", value);
}

jsbind::String CSSPositionTryDescriptors::marginBlockEnd() const {
    return CSSStyleDeclaration::get("marginBlockEnd").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginBlockEnd(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginBlockEnd", value);
}

jsbind::String CSSPositionTryDescriptors::marginInline() const {
    return CSSStyleDeclaration::get("marginInline").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginInline(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginInline", value);
}

jsbind::String CSSPositionTryDescriptors::marginInlineStart() const {
    return CSSStyleDeclaration::get("marginInlineStart").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginInlineStart(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginInlineStart", value);
}

jsbind::String CSSPositionTryDescriptors::marginInlineEnd() const {
    return CSSStyleDeclaration::get("marginInlineEnd").as<jsbind::String>();
}

void CSSPositionTryDescriptors::marginInlineEnd(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginInlineEnd", value);
}

jsbind::String CSSPositionTryDescriptors::margin_top() const {
    return CSSStyleDeclaration::get("margin-top").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_top(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-top", value);
}

jsbind::String CSSPositionTryDescriptors::margin_right() const {
    return CSSStyleDeclaration::get("margin-right").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_right(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-right", value);
}

jsbind::String CSSPositionTryDescriptors::margin_bottom() const {
    return CSSStyleDeclaration::get("margin-bottom").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_bottom(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-bottom", value);
}

jsbind::String CSSPositionTryDescriptors::margin_left() const {
    return CSSStyleDeclaration::get("margin-left").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_left(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-left", value);
}

jsbind::String CSSPositionTryDescriptors::margin_block() const {
    return CSSStyleDeclaration::get("margin-block").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_block(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-block", value);
}

jsbind::String CSSPositionTryDescriptors::margin_block_start() const {
    return CSSStyleDeclaration::get("margin-block-start").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_block_start(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-block-start", value);
}

jsbind::String CSSPositionTryDescriptors::margin_block_end() const {
    return CSSStyleDeclaration::get("margin-block-end").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_block_end(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-block-end", value);
}

jsbind::String CSSPositionTryDescriptors::margin_inline() const {
    return CSSStyleDeclaration::get("margin-inline").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_inline(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-inline", value);
}

jsbind::String CSSPositionTryDescriptors::margin_inline_start() const {
    return CSSStyleDeclaration::get("margin-inline-start").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_inline_start(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-inline-start", value);
}

jsbind::String CSSPositionTryDescriptors::margin_inline_end() const {
    return CSSStyleDeclaration::get("margin-inline-end").as<jsbind::String>();
}

void CSSPositionTryDescriptors::margin_inline_end(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-inline-end", value);
}

jsbind::String CSSPositionTryDescriptors::inset() const {
    return CSSStyleDeclaration::get("inset").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inset(const jsbind::String& value) {
    CSSStyleDeclaration::set("inset", value);
}

jsbind::String CSSPositionTryDescriptors::insetBlock() const {
    return CSSStyleDeclaration::get("insetBlock").as<jsbind::String>();
}

void CSSPositionTryDescriptors::insetBlock(const jsbind::String& value) {
    CSSStyleDeclaration::set("insetBlock", value);
}

jsbind::String CSSPositionTryDescriptors::insetBlockStart() const {
    return CSSStyleDeclaration::get("insetBlockStart").as<jsbind::String>();
}

void CSSPositionTryDescriptors::insetBlockStart(const jsbind::String& value) {
    CSSStyleDeclaration::set("insetBlockStart", value);
}

jsbind::String CSSPositionTryDescriptors::insetBlockEnd() const {
    return CSSStyleDeclaration::get("insetBlockEnd").as<jsbind::String>();
}

void CSSPositionTryDescriptors::insetBlockEnd(const jsbind::String& value) {
    CSSStyleDeclaration::set("insetBlockEnd", value);
}

jsbind::String CSSPositionTryDescriptors::insetInline() const {
    return CSSStyleDeclaration::get("insetInline").as<jsbind::String>();
}

void CSSPositionTryDescriptors::insetInline(const jsbind::String& value) {
    CSSStyleDeclaration::set("insetInline", value);
}

jsbind::String CSSPositionTryDescriptors::insetInlineStart() const {
    return CSSStyleDeclaration::get("insetInlineStart").as<jsbind::String>();
}

void CSSPositionTryDescriptors::insetInlineStart(const jsbind::String& value) {
    CSSStyleDeclaration::set("insetInlineStart", value);
}

jsbind::String CSSPositionTryDescriptors::insetInlineEnd() const {
    return CSSStyleDeclaration::get("insetInlineEnd").as<jsbind::String>();
}

void CSSPositionTryDescriptors::insetInlineEnd(const jsbind::String& value) {
    CSSStyleDeclaration::set("insetInlineEnd", value);
}

jsbind::String CSSPositionTryDescriptors::top() const {
    return CSSStyleDeclaration::get("top").as<jsbind::String>();
}

void CSSPositionTryDescriptors::top(const jsbind::String& value) {
    CSSStyleDeclaration::set("top", value);
}

jsbind::String CSSPositionTryDescriptors::left() const {
    return CSSStyleDeclaration::get("left").as<jsbind::String>();
}

void CSSPositionTryDescriptors::left(const jsbind::String& value) {
    CSSStyleDeclaration::set("left", value);
}

jsbind::String CSSPositionTryDescriptors::right() const {
    return CSSStyleDeclaration::get("right").as<jsbind::String>();
}

void CSSPositionTryDescriptors::right(const jsbind::String& value) {
    CSSStyleDeclaration::set("right", value);
}

jsbind::String CSSPositionTryDescriptors::bottom() const {
    return CSSStyleDeclaration::get("bottom").as<jsbind::String>();
}

void CSSPositionTryDescriptors::bottom(const jsbind::String& value) {
    CSSStyleDeclaration::set("bottom", value);
}

jsbind::String CSSPositionTryDescriptors::inset_block() const {
    return CSSStyleDeclaration::get("inset-block").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inset_block(const jsbind::String& value) {
    CSSStyleDeclaration::set("inset-block", value);
}

jsbind::String CSSPositionTryDescriptors::inset_block_start() const {
    return CSSStyleDeclaration::get("inset-block-start").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inset_block_start(const jsbind::String& value) {
    CSSStyleDeclaration::set("inset-block-start", value);
}

jsbind::String CSSPositionTryDescriptors::inset_block_end() const {
    return CSSStyleDeclaration::get("inset-block-end").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inset_block_end(const jsbind::String& value) {
    CSSStyleDeclaration::set("inset-block-end", value);
}

jsbind::String CSSPositionTryDescriptors::inset_inline() const {
    return CSSStyleDeclaration::get("inset-inline").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inset_inline(const jsbind::String& value) {
    CSSStyleDeclaration::set("inset-inline", value);
}

jsbind::String CSSPositionTryDescriptors::inset_inline_start() const {
    return CSSStyleDeclaration::get("inset-inline-start").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inset_inline_start(const jsbind::String& value) {
    CSSStyleDeclaration::set("inset-inline-start", value);
}

jsbind::String CSSPositionTryDescriptors::inset_inline_end() const {
    return CSSStyleDeclaration::get("inset-inline-end").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inset_inline_end(const jsbind::String& value) {
    CSSStyleDeclaration::set("inset-inline-end", value);
}

jsbind::String CSSPositionTryDescriptors::width() const {
    return CSSStyleDeclaration::get("width").as<jsbind::String>();
}

void CSSPositionTryDescriptors::width(const jsbind::String& value) {
    CSSStyleDeclaration::set("width", value);
}

jsbind::String CSSPositionTryDescriptors::minWidth() const {
    return CSSStyleDeclaration::get("minWidth").as<jsbind::String>();
}

void CSSPositionTryDescriptors::minWidth(const jsbind::String& value) {
    CSSStyleDeclaration::set("minWidth", value);
}

jsbind::String CSSPositionTryDescriptors::maxWidth() const {
    return CSSStyleDeclaration::get("maxWidth").as<jsbind::String>();
}

void CSSPositionTryDescriptors::maxWidth(const jsbind::String& value) {
    CSSStyleDeclaration::set("maxWidth", value);
}

jsbind::String CSSPositionTryDescriptors::height() const {
    return CSSStyleDeclaration::get("height").as<jsbind::String>();
}

void CSSPositionTryDescriptors::height(const jsbind::String& value) {
    CSSStyleDeclaration::set("height", value);
}

jsbind::String CSSPositionTryDescriptors::minHeight() const {
    return CSSStyleDeclaration::get("minHeight").as<jsbind::String>();
}

void CSSPositionTryDescriptors::minHeight(const jsbind::String& value) {
    CSSStyleDeclaration::set("minHeight", value);
}

jsbind::String CSSPositionTryDescriptors::maxHeight() const {
    return CSSStyleDeclaration::get("maxHeight").as<jsbind::String>();
}

void CSSPositionTryDescriptors::maxHeight(const jsbind::String& value) {
    CSSStyleDeclaration::set("maxHeight", value);
}

jsbind::String CSSPositionTryDescriptors::blockSize() const {
    return CSSStyleDeclaration::get("blockSize").as<jsbind::String>();
}

void CSSPositionTryDescriptors::blockSize(const jsbind::String& value) {
    CSSStyleDeclaration::set("blockSize", value);
}

jsbind::String CSSPositionTryDescriptors::minBlockSize() const {
    return CSSStyleDeclaration::get("minBlockSize").as<jsbind::String>();
}

void CSSPositionTryDescriptors::minBlockSize(const jsbind::String& value) {
    CSSStyleDeclaration::set("minBlockSize", value);
}

jsbind::String CSSPositionTryDescriptors::maxBlockSize() const {
    return CSSStyleDeclaration::get("maxBlockSize").as<jsbind::String>();
}

void CSSPositionTryDescriptors::maxBlockSize(const jsbind::String& value) {
    CSSStyleDeclaration::set("maxBlockSize", value);
}

jsbind::String CSSPositionTryDescriptors::inlineSize() const {
    return CSSStyleDeclaration::get("inlineSize").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inlineSize(const jsbind::String& value) {
    CSSStyleDeclaration::set("inlineSize", value);
}

jsbind::String CSSPositionTryDescriptors::minInlineSize() const {
    return CSSStyleDeclaration::get("minInlineSize").as<jsbind::String>();
}

void CSSPositionTryDescriptors::minInlineSize(const jsbind::String& value) {
    CSSStyleDeclaration::set("minInlineSize", value);
}

jsbind::String CSSPositionTryDescriptors::maxInlineSize() const {
    return CSSStyleDeclaration::get("maxInlineSize").as<jsbind::String>();
}

void CSSPositionTryDescriptors::maxInlineSize(const jsbind::String& value) {
    CSSStyleDeclaration::set("maxInlineSize", value);
}

jsbind::String CSSPositionTryDescriptors::min_width() const {
    return CSSStyleDeclaration::get("min-width").as<jsbind::String>();
}

void CSSPositionTryDescriptors::min_width(const jsbind::String& value) {
    CSSStyleDeclaration::set("min-width", value);
}

jsbind::String CSSPositionTryDescriptors::max_width() const {
    return CSSStyleDeclaration::get("max-width").as<jsbind::String>();
}

void CSSPositionTryDescriptors::max_width(const jsbind::String& value) {
    CSSStyleDeclaration::set("max-width", value);
}

jsbind::String CSSPositionTryDescriptors::min_height() const {
    return CSSStyleDeclaration::get("min-height").as<jsbind::String>();
}

void CSSPositionTryDescriptors::min_height(const jsbind::String& value) {
    CSSStyleDeclaration::set("min-height", value);
}

jsbind::String CSSPositionTryDescriptors::max_height() const {
    return CSSStyleDeclaration::get("max-height").as<jsbind::String>();
}

void CSSPositionTryDescriptors::max_height(const jsbind::String& value) {
    CSSStyleDeclaration::set("max-height", value);
}

jsbind::String CSSPositionTryDescriptors::block_size() const {
    return CSSStyleDeclaration::get("block-size").as<jsbind::String>();
}

void CSSPositionTryDescriptors::block_size(const jsbind::String& value) {
    CSSStyleDeclaration::set("block-size", value);
}

jsbind::String CSSPositionTryDescriptors::min_block_size() const {
    return CSSStyleDeclaration::get("min-block-size").as<jsbind::String>();
}

void CSSPositionTryDescriptors::min_block_size(const jsbind::String& value) {
    CSSStyleDeclaration::set("min-block-size", value);
}

jsbind::String CSSPositionTryDescriptors::max_block_size() const {
    return CSSStyleDeclaration::get("max-block-size").as<jsbind::String>();
}

void CSSPositionTryDescriptors::max_block_size(const jsbind::String& value) {
    CSSStyleDeclaration::set("max-block-size", value);
}

jsbind::String CSSPositionTryDescriptors::inline_size() const {
    return CSSStyleDeclaration::get("inline-size").as<jsbind::String>();
}

void CSSPositionTryDescriptors::inline_size(const jsbind::String& value) {
    CSSStyleDeclaration::set("inline-size", value);
}

jsbind::String CSSPositionTryDescriptors::min_inline_size() const {
    return CSSStyleDeclaration::get("min-inline-size").as<jsbind::String>();
}

void CSSPositionTryDescriptors::min_inline_size(const jsbind::String& value) {
    CSSStyleDeclaration::set("min-inline-size", value);
}

jsbind::String CSSPositionTryDescriptors::max_inline_size() const {
    return CSSStyleDeclaration::get("max-inline-size").as<jsbind::String>();
}

void CSSPositionTryDescriptors::max_inline_size(const jsbind::String& value) {
    CSSStyleDeclaration::set("max-inline-size", value);
}

jsbind::String CSSPositionTryDescriptors::placeSelf() const {
    return CSSStyleDeclaration::get("placeSelf").as<jsbind::String>();
}

void CSSPositionTryDescriptors::placeSelf(const jsbind::String& value) {
    CSSStyleDeclaration::set("placeSelf", value);
}

jsbind::String CSSPositionTryDescriptors::alignSelf() const {
    return CSSStyleDeclaration::get("alignSelf").as<jsbind::String>();
}

void CSSPositionTryDescriptors::alignSelf(const jsbind::String& value) {
    CSSStyleDeclaration::set("alignSelf", value);
}

jsbind::String CSSPositionTryDescriptors::justifySelf() const {
    return CSSStyleDeclaration::get("justifySelf").as<jsbind::String>();
}

void CSSPositionTryDescriptors::justifySelf(const jsbind::String& value) {
    CSSStyleDeclaration::set("justifySelf", value);
}

jsbind::String CSSPositionTryDescriptors::place_self() const {
    return CSSStyleDeclaration::get("place-self").as<jsbind::String>();
}

void CSSPositionTryDescriptors::place_self(const jsbind::String& value) {
    CSSStyleDeclaration::set("place-self", value);
}

jsbind::String CSSPositionTryDescriptors::align_self() const {
    return CSSStyleDeclaration::get("align-self").as<jsbind::String>();
}

void CSSPositionTryDescriptors::align_self(const jsbind::String& value) {
    CSSStyleDeclaration::set("align-self", value);
}

jsbind::String CSSPositionTryDescriptors::justify_self() const {
    return CSSStyleDeclaration::get("justify-self").as<jsbind::String>();
}

void CSSPositionTryDescriptors::justify_self(const jsbind::String& value) {
    CSSStyleDeclaration::set("justify-self", value);
}

jsbind::String CSSPositionTryDescriptors::positionAnchor() const {
    return CSSStyleDeclaration::get("positionAnchor").as<jsbind::String>();
}

void CSSPositionTryDescriptors::positionAnchor(const jsbind::String& value) {
    CSSStyleDeclaration::set("positionAnchor", value);
}

jsbind::String CSSPositionTryDescriptors::position_anchor() const {
    return CSSStyleDeclaration::get("position-anchor").as<jsbind::String>();
}

void CSSPositionTryDescriptors::position_anchor(const jsbind::String& value) {
    CSSStyleDeclaration::set("position-anchor", value);
}

jsbind::String CSSPositionTryDescriptors::positionArea() const {
    return CSSStyleDeclaration::get("positionArea").as<jsbind::String>();
}

void CSSPositionTryDescriptors::positionArea(const jsbind::String& value) {
    CSSStyleDeclaration::set("positionArea", value);
}

jsbind::String CSSPositionTryDescriptors::position_area() const {
    return CSSStyleDeclaration::get("position-area").as<jsbind::String>();
}

void CSSPositionTryDescriptors::position_area(const jsbind::String& value) {
    CSSStyleDeclaration::set("position-area", value);
}

