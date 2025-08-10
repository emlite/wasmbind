#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSRule;

/// Interface CSSRuleList
/// [`CSSRuleList`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRuleList)
class CSSRuleList : public emlite::Val {
    explicit CSSRuleList(Handle h) noexcept;
public:
    explicit CSSRuleList(const emlite::Val &val) noexcept;
    static CSSRuleList take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSRuleList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The item method.
    /// [`CSSRuleList.item`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRuleList/item)
    CSSRule item(unsigned long index);
    /// Getter of the `length` attribute.
    /// [`CSSRuleList.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRuleList/length)
    [[nodiscard]] unsigned long length() const;
};

} // namespace webbind