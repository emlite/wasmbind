#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSParserRule.hpp"

namespace webbind {

class CSSParserValue;

/// Interface CSSParserAtRule
/// [`CSSParserAtRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule)
class CSSParserAtRule : public CSSParserRule {
    explicit CSSParserAtRule(Handle h) noexcept;
public:
    explicit CSSParserAtRule(const emlite::Val &val) noexcept;
    static CSSParserAtRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSParserAtRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSParserAtRule(..)` constructor, creating a new CSSParserAtRule instance
    CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude);
    /// The `new CSSParserAtRule(..)` constructor, creating a new CSSParserAtRule instance
    CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude, const jsbind::TypedArray<CSSParserRule>& body);
    /// [`CSSParserAtRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/name)
    /// [`CSSParserAtRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSParserAtRule.prelude`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/prelude)
    /// [`CSSParserAtRule.prelude`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/prelude)
    [[nodiscard]] jsbind::TypedArray<CSSParserValue> prelude() const;
    /// [`CSSParserAtRule.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/body)
    /// [`CSSParserAtRule.body`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule/body)
    [[nodiscard]] jsbind::TypedArray<CSSParserRule> body() const;
};

} // namespace webbind