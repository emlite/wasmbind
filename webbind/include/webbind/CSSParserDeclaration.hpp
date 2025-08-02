#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserRule.hpp"
#include "enums.hpp"

class CSSParserValue;


/// The CSSParserDeclaration class.
/// [`CSSParserDeclaration`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration)
class CSSParserDeclaration : public CSSParserRule {
    explicit CSSParserDeclaration(Handle h) noexcept;

public:
    explicit CSSParserDeclaration(const emlite::Val &val) noexcept;
    static CSSParserDeclaration take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSParserDeclaration clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSParserDeclaration(..)` constructor, creating a new CSSParserDeclaration instance
    CSSParserDeclaration(const jsbind::String& name);
    /// The `new CSSParserDeclaration(..)` constructor, creating a new CSSParserDeclaration instance
    CSSParserDeclaration(const jsbind::String& name, const jsbind::TypedArray<CSSParserRule>& body);
    /// Getter of the `name` attribute.
    /// [`CSSParserDeclaration.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `body` attribute.
    /// [`CSSParserDeclaration.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration/body)
    [[nodiscard]] jsbind::TypedArray<CSSParserValue> body() const;
};

