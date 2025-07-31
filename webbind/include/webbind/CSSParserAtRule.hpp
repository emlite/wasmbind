#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserRule.hpp"
#include "enums.hpp"

class CSSParserValue;


/// The CSSParserAtRule class.
/// [`CSSParserAtRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule)
class CSSParserAtRule : public CSSParserRule {
    explicit CSSParserAtRule(Handle h) noexcept;

public:
    explicit CSSParserAtRule(const emlite::Val &val) noexcept;
    static CSSParserAtRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSParserAtRule clone() const noexcept;
    /// The `new CSSParserAtRule(..)` constructor, creating a new CSSParserAtRule instance
    CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude);
    /// The `new CSSParserAtRule(..)` constructor, creating a new CSSParserAtRule instance
    CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude, const jsbind::TypedArray<CSSParserRule>& body);
    /// Getter of the `name` attribute.
    /// [`CSSParserAtRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `prelude` attribute.
    /// [`CSSParserAtRule.prelude`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/prelude)
    [[nodiscard]] jsbind::TypedArray<CSSParserValue> prelude() const;
    /// Getter of the `body` attribute.
    /// [`CSSParserAtRule.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/body)
    [[nodiscard]] jsbind::TypedArray<CSSParserRule> body() const;
};

