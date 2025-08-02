#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSConditionRule.hpp"
#include "enums.hpp"

class MediaList;


/// The CSSMediaRule class.
/// [`CSSMediaRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule)
class CSSMediaRule : public CSSConditionRule {
    explicit CSSMediaRule(Handle h) noexcept;

public:
    explicit CSSMediaRule(const emlite::Val &val) noexcept;
    static CSSMediaRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSMediaRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `media` attribute.
    /// [`CSSMediaRule.media`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule/media)
    [[nodiscard]] MediaList media() const;
    /// Getter of the `matches` attribute.
    /// [`CSSMediaRule.matches`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMediaRule/matches)
    [[nodiscard]] bool matches() const;
};

