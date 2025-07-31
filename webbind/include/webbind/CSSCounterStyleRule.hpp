#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


/// The CSSCounterStyleRule class.
/// [`CSSCounterStyleRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule)
class CSSCounterStyleRule : public CSSRule {
    explicit CSSCounterStyleRule(Handle h) noexcept;

public:
    explicit CSSCounterStyleRule(const emlite::Val &val) noexcept;
    static CSSCounterStyleRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSCounterStyleRule clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSCounterStyleRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`CSSCounterStyleRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/name)
    void name(const jsbind::String& value);
    /// Getter of the `system` attribute.
    /// [`CSSCounterStyleRule.system`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/system)
    [[nodiscard]] jsbind::String system() const;
    /// Setter of the `system` attribute.
    /// [`CSSCounterStyleRule.system`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/system)
    void system(const jsbind::String& value);
    /// Getter of the `symbols` attribute.
    /// [`CSSCounterStyleRule.symbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/symbols)
    [[nodiscard]] jsbind::String symbols() const;
    /// Setter of the `symbols` attribute.
    /// [`CSSCounterStyleRule.symbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/symbols)
    void symbols(const jsbind::String& value);
    /// Getter of the `additiveSymbols` attribute.
    /// [`CSSCounterStyleRule.additiveSymbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/additiveSymbols)
    [[nodiscard]] jsbind::String additiveSymbols() const;
    /// Setter of the `additiveSymbols` attribute.
    /// [`CSSCounterStyleRule.additiveSymbols`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/additiveSymbols)
    void additiveSymbols(const jsbind::String& value);
    /// Getter of the `negative` attribute.
    /// [`CSSCounterStyleRule.negative`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/negative)
    [[nodiscard]] jsbind::String negative() const;
    /// Setter of the `negative` attribute.
    /// [`CSSCounterStyleRule.negative`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/negative)
    void negative(const jsbind::String& value);
    /// Getter of the `prefix` attribute.
    /// [`CSSCounterStyleRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/prefix)
    [[nodiscard]] jsbind::String prefix() const;
    /// Setter of the `prefix` attribute.
    /// [`CSSCounterStyleRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/prefix)
    void prefix(const jsbind::String& value);
    /// Getter of the `suffix` attribute.
    /// [`CSSCounterStyleRule.suffix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/suffix)
    [[nodiscard]] jsbind::String suffix() const;
    /// Setter of the `suffix` attribute.
    /// [`CSSCounterStyleRule.suffix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/suffix)
    void suffix(const jsbind::String& value);
    /// Getter of the `range` attribute.
    /// [`CSSCounterStyleRule.range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/range)
    [[nodiscard]] jsbind::String range() const;
    /// Setter of the `range` attribute.
    /// [`CSSCounterStyleRule.range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/range)
    void range(const jsbind::String& value);
    /// Getter of the `pad` attribute.
    /// [`CSSCounterStyleRule.pad`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/pad)
    [[nodiscard]] jsbind::String pad() const;
    /// Setter of the `pad` attribute.
    /// [`CSSCounterStyleRule.pad`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/pad)
    void pad(const jsbind::String& value);
    /// Getter of the `speakAs` attribute.
    /// [`CSSCounterStyleRule.speakAs`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/speakAs)
    [[nodiscard]] jsbind::String speakAs() const;
    /// Setter of the `speakAs` attribute.
    /// [`CSSCounterStyleRule.speakAs`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/speakAs)
    void speakAs(const jsbind::String& value);
    /// Getter of the `fallback` attribute.
    /// [`CSSCounterStyleRule.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/fallback)
    [[nodiscard]] jsbind::String fallback() const;
    /// Setter of the `fallback` attribute.
    /// [`CSSCounterStyleRule.fallback`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule/fallback)
    void fallback(const jsbind::String& value);
};

