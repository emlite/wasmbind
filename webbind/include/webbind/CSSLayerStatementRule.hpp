#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


/// The CSSLayerStatementRule class.
/// [`CSSLayerStatementRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLayerStatementRule)
class CSSLayerStatementRule : public CSSRule {
    explicit CSSLayerStatementRule(Handle h) noexcept;

public:
    explicit CSSLayerStatementRule(const emlite::Val &val) noexcept;
    static CSSLayerStatementRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSLayerStatementRule clone() const noexcept;
    /// Getter of the `nameList` attribute.
    /// [`CSSLayerStatementRule.nameList`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLayerStatementRule/nameList)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> nameList() const;
};

