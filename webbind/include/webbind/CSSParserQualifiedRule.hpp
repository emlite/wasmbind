#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSParserRule.hpp"

namespace webbind {

class CSSParserValue;

/// Interface CSSParserQualifiedRule
/// [`CSSParserQualifiedRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserQualifiedRule)
class CSSParserQualifiedRule : public CSSParserRule {
    explicit CSSParserQualifiedRule(Handle h) noexcept;
public:
    explicit CSSParserQualifiedRule(const emlite::Val &val) noexcept;
    static CSSParserQualifiedRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSParserQualifiedRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSParserQualifiedRule(..)` constructor, creating a new CSSParserQualifiedRule instance
    CSSParserQualifiedRule(const jsbind::TypedArray<jsbind::Any>& prelude);
    /// The `new CSSParserQualifiedRule(..)` constructor, creating a new CSSParserQualifiedRule instance
    CSSParserQualifiedRule(const jsbind::TypedArray<jsbind::Any>& prelude, const jsbind::TypedArray<CSSParserRule>& body);
    /// Getter of the `prelude` attribute.
    /// [`CSSParserQualifiedRule.prelude`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserQualifiedRule/prelude)
    [[nodiscard]] jsbind::TypedArray<CSSParserValue> prelude() const;
    /// Getter of the `body` attribute.
    /// [`CSSParserQualifiedRule.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserQualifiedRule/body)
    [[nodiscard]] jsbind::TypedArray<CSSParserRule> body() const;
};

} // namespace webbind