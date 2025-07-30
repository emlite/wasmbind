#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CharacterData.hpp"
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class Text;
class DOMQuad;
class DOMRectReadOnly;
class DOMPoint;
class HTMLSlotElement;


class Text : public CharacterData {
    explicit Text(Handle h) noexcept;

public:
    explicit Text(const emlite::Val &val) noexcept;
    static Text take_ownership(Handle h) noexcept;

    Text clone() const noexcept;
    Text();
    Text(const jsbind::String& data);
    Text splitText(unsigned long offset);
    jsbind::String wholeText() const;
    jsbind::TypedArray<DOMQuad> getBoxQuads();
    jsbind::TypedArray<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from);
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from);
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from);
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    HTMLSlotElement assignedSlot() const;
};

