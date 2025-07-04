#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NavigationHistoryEntry;


class NavigationActivation : public emlite::Val {
    explicit NavigationActivation(Handle h) noexcept;

public:
    explicit NavigationActivation(const emlite::Val &val) noexcept;
    static NavigationActivation take_ownership(Handle h) noexcept;

    NavigationActivation clone() const noexcept;
    NavigationHistoryEntry from() const;
    NavigationHistoryEntry entry() const;
    NavigationType navigationType() const;
};

