#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ChildBreakToken;


class BreakToken : public emlite::Val {
    explicit BreakToken(Handle h) noexcept;

public:
    explicit BreakToken(const emlite::Val &val) noexcept;
    static BreakToken take_ownership(Handle h) noexcept;

    BreakToken clone() const noexcept;
    jsbind::FrozenArray<ChildBreakToken> childBreakTokens() const;
    jsbind::Any data() const;
};

