#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "StyleSheet.hpp"
#include "enums.hpp"

class CSSRule;
class CSSRuleList;
class CSSStyleSheet;


/// The CSSStyleSheet class.
/// [`CSSStyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet)
class CSSStyleSheet : public StyleSheet {
    explicit CSSStyleSheet(Handle h) noexcept;

public:
    explicit CSSStyleSheet(const emlite::Val &val) noexcept;
    static CSSStyleSheet take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSStyleSheet clone() const noexcept;
    /// The `new CSSStyleSheet(..)` constructor, creating a new CSSStyleSheet instance
    CSSStyleSheet();
    /// The `new CSSStyleSheet(..)` constructor, creating a new CSSStyleSheet instance
    CSSStyleSheet(const jsbind::Any& options);
    /// Getter of the `ownerRule` attribute.
    /// [`CSSStyleSheet.ownerRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/ownerRule)
    [[nodiscard]] CSSRule ownerRule() const;
    /// Getter of the `cssRules` attribute.
    /// [`CSSStyleSheet.cssRules`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/cssRules)
    [[nodiscard]] CSSRuleList cssRules() const;
    /// The insertRule method.
    /// [`CSSStyleSheet.insertRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/insertRule)
    unsigned long insertRule(const jsbind::String& rule);
    /// The insertRule method.
    /// [`CSSStyleSheet.insertRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/insertRule)
    unsigned long insertRule(const jsbind::String& rule, unsigned long index);
    /// The deleteRule method.
    /// [`CSSStyleSheet.deleteRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/deleteRule)
    jsbind::Undefined deleteRule(unsigned long index);
    /// The replace method.
    /// [`CSSStyleSheet.replace`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/replace)
    jsbind::Promise<CSSStyleSheet> replace(const jsbind::String& text);
    /// The replaceSync method.
    /// [`CSSStyleSheet.replaceSync`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/replaceSync)
    jsbind::Undefined replaceSync(const jsbind::String& text);
    /// Getter of the `rules` attribute.
    /// [`CSSStyleSheet.rules`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/rules)
    [[nodiscard]] CSSRuleList rules() const;
    /// The addRule method.
    /// [`CSSStyleSheet.addRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/addRule)
    long addRule();
    /// The addRule method.
    /// [`CSSStyleSheet.addRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/addRule)
    long addRule(const jsbind::String& selector);
    /// The addRule method.
    /// [`CSSStyleSheet.addRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/addRule)
    long addRule(const jsbind::String& selector, const jsbind::String& style);
    /// The addRule method.
    /// [`CSSStyleSheet.addRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/addRule)
    long addRule(const jsbind::String& selector, const jsbind::String& style, unsigned long index);
    /// The removeRule method.
    /// [`CSSStyleSheet.removeRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/removeRule)
    jsbind::Undefined removeRule();
    /// The removeRule method.
    /// [`CSSStyleSheet.removeRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet/removeRule)
    jsbind::Undefined removeRule(unsigned long index);
};

