#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class MediaList;
class CSSStyleSheet;


/// The CSSImportRule class.
/// [`CSSImportRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSImportRule)
class CSSImportRule : public CSSRule {
    explicit CSSImportRule(Handle h) noexcept;

public:
    explicit CSSImportRule(const emlite::Val &val) noexcept;
    static CSSImportRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSImportRule clone() const noexcept;
    /// Getter of the `href` attribute.
    /// [`CSSImportRule.href`](https://developer.mozilla.org/en-US/docs/Web/API/CSSImportRule/href)
    [[nodiscard]] jsbind::String href() const;
    /// Getter of the `media` attribute.
    /// [`CSSImportRule.media`](https://developer.mozilla.org/en-US/docs/Web/API/CSSImportRule/media)
    [[nodiscard]] MediaList media() const;
    /// Getter of the `styleSheet` attribute.
    /// [`CSSImportRule.styleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/CSSImportRule/styleSheet)
    [[nodiscard]] CSSStyleSheet styleSheet() const;
    /// Getter of the `layerName` attribute.
    /// [`CSSImportRule.layerName`](https://developer.mozilla.org/en-US/docs/Web/API/CSSImportRule/layerName)
    [[nodiscard]] jsbind::String layerName() const;
    /// Getter of the `supportsText` attribute.
    /// [`CSSImportRule.supportsText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSImportRule/supportsText)
    [[nodiscard]] jsbind::String supportsText() const;
};

