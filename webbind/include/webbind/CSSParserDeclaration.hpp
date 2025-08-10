#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSParserRule.hpp"

namespace webbind {

class CSSParserValue;

/// Interface CSSParserDeclaration
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
    /// [`CSSParserDeclaration.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration/name)
    /// [`CSSParserDeclaration.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSParserDeclaration.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration/body)
    /// [`CSSParserDeclaration.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration/body)
    [[nodiscard]] jsbind::TypedArray<CSSParserValue> body() const;
};

} // namespace webbind