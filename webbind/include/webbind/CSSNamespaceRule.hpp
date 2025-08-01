#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


/// The CSSNamespaceRule class.
/// [`CSSNamespaceRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule)
class CSSNamespaceRule : public CSSRule {
    explicit CSSNamespaceRule(Handle h) noexcept;

public:
    explicit CSSNamespaceRule(const emlite::Val &val) noexcept;
    static CSSNamespaceRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSNamespaceRule clone() const noexcept;
    /// Getter of the `namespaceURI` attribute.
    /// [`CSSNamespaceRule.namespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule/namespaceURI)
    [[nodiscard]] jsbind::String namespaceURI() const;
    /// Getter of the `prefix` attribute.
    /// [`CSSNamespaceRule.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule/prefix)
    [[nodiscard]] jsbind::String prefix() const;
};

