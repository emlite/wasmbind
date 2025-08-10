#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CharacterData.hpp"

namespace webbind {

class Text;
class DOMQuad;
class BoxQuadOptions;
class DOMQuadInit;
class ConvertCoordinateOptions;
class DOMRectReadOnly;
class DOMPoint;
class DOMPointInit;
class HTMLSlotElement;

/// Interface Text
/// [`Text`](https://developer.mozilla.org/en-US/docs/Web/API/Text)
class Text : public CharacterData {
    explicit Text(Handle h) noexcept;
public:
    explicit Text(const emlite::Val &val) noexcept;
    static Text take_ownership(Handle h) noexcept;
    [[nodiscard]] Text clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Text(..)` constructor, creating a new Text instance
    Text();
    /// The `new Text(..)` constructor, creating a new Text instance
    Text(const jsbind::String& data);
    /// The splitText method.
    /// [`Text.splitText`](https://developer.mozilla.org/en-US/docs/Web/API/Text/splitText)
    Text splitText(unsigned long offset);
    /// [`Text.wholeText`](https://developer.mozilla.org/en-US/docs/Web/API/Text/wholeText)
    /// [`Text.wholeText`](https://developer.mozilla.org/en-US/docs/Web/API/Text/wholeText)
    [[nodiscard]] jsbind::String wholeText() const;
    /// The getBoxQuads method.
    /// [`Text.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/Text/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads();
    /// The getBoxQuads method.
    /// [`Text.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/Text/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
    /// The convertQuadFromNode method.
    /// [`Text.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Text/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from);
    /// The convertQuadFromNode method.
    /// [`Text.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Text/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertRectFromNode method.
    /// [`Text.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Text/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from);
    /// The convertRectFromNode method.
    /// [`Text.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Text/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertPointFromNode method.
    /// [`Text.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Text/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from);
    /// The convertPointFromNode method.
    /// [`Text.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Text/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// [`Text.assignedSlot`](https://developer.mozilla.org/en-US/docs/Web/API/Text/assignedSlot)
    /// [`Text.assignedSlot`](https://developer.mozilla.org/en-US/docs/Web/API/Text/assignedSlot)
    [[nodiscard]] HTMLSlotElement assignedSlot() const;
};

} // namespace webbind