#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

/// Interface CSSCounterStyleRule
/// [`CSSCounterStyleRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule)
class CSSCounterStyleRule : public CSSRule {
    explicit CSSCounterStyleRule(Handle h) noexcept;
public:
    explicit CSSCounterStyleRule(const emlite::Val &val) noexcept;
    static CSSCounterStyleRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSCounterStyleRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSCounterStyleRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/name)
    /// [`CSSCounterStyleRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`CSSCounterStyleRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/name)
    void name(const jsbind::String& value);
    /// [`CSSCounterStyleRule.system`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/system)
    /// [`CSSCounterStyleRule.system`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/system)
    [[nodiscard]] jsbind::String system() const;
    /// Setter of the `system` attribute.
    /// [`CSSCounterStyleRule.system`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/system)
    void system(const jsbind::String& value);
    /// [`CSSCounterStyleRule.symbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/symbols)
    /// [`CSSCounterStyleRule.symbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/symbols)
    [[nodiscard]] jsbind::String symbols() const;
    /// Setter of the `symbols` attribute.
    /// [`CSSCounterStyleRule.symbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/symbols)
    void symbols(const jsbind::String& value);
    /// [`CSSCounterStyleRule.additiveSymbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/additiveSymbols)
    /// [`CSSCounterStyleRule.additiveSymbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/additiveSymbols)
    [[nodiscard]] jsbind::String additiveSymbols() const;
    /// Setter of the `additiveSymbols` attribute.
    /// [`CSSCounterStyleRule.additiveSymbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/additiveSymbols)
    void additiveSymbols(const jsbind::String& value);
    /// [`CSSCounterStyleRule.negative`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/negative)
    /// [`CSSCounterStyleRule.negative`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/negative)
    [[nodiscard]] jsbind::String negative() const;
    /// Setter of the `negative` attribute.
    /// [`CSSCounterStyleRule.negative`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/negative)
    void negative(const jsbind::String& value);
    /// [`CSSCounterStyleRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/prefix)
    /// [`CSSCounterStyleRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/prefix)
    [[nodiscard]] jsbind::String prefix() const;
    /// Setter of the `prefix` attribute.
    /// [`CSSCounterStyleRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/prefix)
    void prefix(const jsbind::String& value);
    /// [`CSSCounterStyleRule.suffix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/suffix)
    /// [`CSSCounterStyleRule.suffix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/suffix)
    [[nodiscard]] jsbind::String suffix() const;
    /// Setter of the `suffix` attribute.
    /// [`CSSCounterStyleRule.suffix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/suffix)
    void suffix(const jsbind::String& value);
    /// [`CSSCounterStyleRule.range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/range)
    /// [`CSSCounterStyleRule.range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/range)
    [[nodiscard]] jsbind::String range() const;
    /// Setter of the `range` attribute.
    /// [`CSSCounterStyleRule.range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/range)
    void range(const jsbind::String& value);
    /// [`CSSCounterStyleRule.pad`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/pad)
    /// [`CSSCounterStyleRule.pad`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/pad)
    [[nodiscard]] jsbind::String pad() const;
    /// Setter of the `pad` attribute.
    /// [`CSSCounterStyleRule.pad`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/pad)
    void pad(const jsbind::String& value);
    /// [`CSSCounterStyleRule.speakAs`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/speakAs)
    /// [`CSSCounterStyleRule.speakAs`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/speakAs)
    [[nodiscard]] jsbind::String speakAs() const;
    /// Setter of the `speakAs` attribute.
    /// [`CSSCounterStyleRule.speakAs`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/speakAs)
    void speakAs(const jsbind::String& value);
    /// [`CSSCounterStyleRule.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/fallback)
    /// [`CSSCounterStyleRule.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/fallback)
    [[nodiscard]] jsbind::String fallback() const;
    /// Setter of the `fallback` attribute.
    /// [`CSSCounterStyleRule.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/fallback)
    void fallback(const jsbind::String& value);
};

} // namespace webbind