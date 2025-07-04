#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PerformanceNavigation : public emlite::Val {
    explicit PerformanceNavigation(Handle h) noexcept;

public:
    explicit PerformanceNavigation(const emlite::Val &val) noexcept;
    static PerformanceNavigation take_ownership(Handle h) noexcept;

    PerformanceNavigation clone() const noexcept;
    unsigned short type() const;
    unsigned short redirectCount() const;
    jsbind::Object toJSON();
};

