#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSConditionRule.hpp"
#include "enums.hpp"

class MediaList;


class CSSMediaRule : public CSSConditionRule {
    explicit CSSMediaRule(Handle h) noexcept;

public:
    explicit CSSMediaRule(const emlite::Val &val) noexcept;
    static CSSMediaRule take_ownership(Handle h) noexcept;

    CSSMediaRule clone() const noexcept;
    MediaList media() const;
    bool matches() const;
};

