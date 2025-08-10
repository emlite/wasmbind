#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSConditionRule.hpp"

namespace webbind {

class MediaList;

/// Interface CSSMediaRule
/// [`CSSMediaRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule)
class CSSMediaRule : public CSSConditionRule {
    explicit CSSMediaRule(Handle h) noexcept;
public:
    explicit CSSMediaRule(const emlite::Val &val) noexcept;
    static CSSMediaRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMediaRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSMediaRule.media`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule/media)
    /// [`CSSMediaRule.media`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule/media)
    [[nodiscard]] MediaList media() const;
    /// [`CSSMediaRule.matches`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule/matches)
    /// [`CSSMediaRule.matches`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule/matches)
    [[nodiscard]] bool matches() const;
};

} // namespace webbind