#include <webbind/Text.hpp>
#include <webbind/DOMQuad.hpp>
#include <webbind/Document.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/SVGGeometryElement.hpp>
#include <webbind/HTMLSlotElement.hpp>


Text Text::take_ownership(Handle h) noexcept {
        return Text(h);
    }
Text Text::clone() const noexcept { return *this; }
Text::Text(Handle h) noexcept : CharacterData(emlite::Val::take_ownership(h)) {}
Text::Text(const emlite::Val &val) noexcept: CharacterData(val) {}


Text::Text(const jsbind::DOMString& data): CharacterData(emlite::Val::global("Text").new_(data)) {}

Text Text::splitText(unsigned long offset) {
    return CharacterData::call("splitText", offset).as<Text>();
}

jsbind::DOMString Text::wholeText() const {
    return CharacterData::get("wholeText").as<jsbind::DOMString>();
}

jsbind::Sequence<DOMQuad> Text::getBoxQuads(const BoxQuadOptions& options) {
    return CharacterData::call("getBoxQuads", options).as<jsbind::Sequence<DOMQuad>>();
}

DOMQuad Text::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return CharacterData::call("convertQuadFromNode", quad, from, options).as<DOMQuad>();
}

DOMQuad Text::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return CharacterData::call("convertRectFromNode", rect, from, options).as<DOMQuad>();
}

DOMPoint Text::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return CharacterData::call("convertPointFromNode", point, from, options).as<DOMPoint>();
}

HTMLSlotElement Text::assignedSlot() const {
    return CharacterData::get("assignedSlot").as<HTMLSlotElement>();
}

