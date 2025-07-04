#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NavigationHistoryEntry;


class NavigationTransition : public emlite::Val {
    explicit NavigationTransition(Handle h) noexcept;

public:
    explicit NavigationTransition(const emlite::Val &val) noexcept;
    static NavigationTransition take_ownership(Handle h) noexcept;

    NavigationTransition clone() const noexcept;
    NavigationType navigationType() const;
    NavigationHistoryEntry from() const;
    jsbind::Promise finished() const;
};

