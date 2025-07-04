#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PerformanceServerTiming : public emlite::Val {
    explicit PerformanceServerTiming(Handle h) noexcept;

public:
    explicit PerformanceServerTiming(const emlite::Val &val) noexcept;
    static PerformanceServerTiming take_ownership(Handle h) noexcept;

    PerformanceServerTiming clone() const noexcept;
    jsbind::DOMString name() const;
    jsbind::Any duration() const;
    jsbind::DOMString description() const;
    jsbind::Object toJSON();
};

