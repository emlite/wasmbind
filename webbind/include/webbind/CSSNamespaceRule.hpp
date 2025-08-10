#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

/// Interface CSSNamespaceRule
/// [`CSSNamespaceRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule)
class CSSNamespaceRule : public CSSRule {
    explicit CSSNamespaceRule(Handle h) noexcept;
public:
    explicit CSSNamespaceRule(const emlite::Val &val) noexcept;
    static CSSNamespaceRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSNamespaceRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSNamespaceRule.namespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule/namespaceURI)
    /// [`CSSNamespaceRule.namespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule/namespaceURI)
    [[nodiscard]] jsbind::String namespaceURI() const;
    /// [`CSSNamespaceRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule/prefix)
    /// [`CSSNamespaceRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule/prefix)
    [[nodiscard]] jsbind::String prefix() const;
};

} // namespace webbind