#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserValue.hpp"
#include "enums.hpp"


/// The CSSParserBlock class.
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
    /// Getter of the `name` attribute.
    /// [`CSSParserBlock.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `body` attribute.
    /// [`CSSParserBlock.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock/body)
    [[nodiscard]] jsbind::TypedArray<CSSParserValue> body() const;
};

