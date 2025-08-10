#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSParserValue.hpp"

namespace webbind {

/// Interface CSSParserBlock
/// [`CSSParserBlock`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock)
class CSSParserBlock : public CSSParserValue {
    explicit CSSParserBlock(Handle h) noexcept;
public:
    explicit CSSParserBlock(const emlite::Val &val) noexcept;
    static CSSParserBlock take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSParserBlock clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSParserBlock(..)` constructor, creating a new CSSParserBlock instance
    CSSParserBlock(const jsbind::String& name, const jsbind::TypedArray<CSSParserValue>& body);
    /// [`CSSParserBlock.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock/name)
    /// [`CSSParserBlock.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSParserBlock.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock/body)
    /// [`CSSParserBlock.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock/body)
    [[nodiscard]] jsbind::TypedArray<CSSParserValue> body() const;
};

} // namespace webbind