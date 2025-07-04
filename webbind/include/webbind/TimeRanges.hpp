#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class TimeRanges : public emlite::Val {
    explicit TimeRanges(Handle h) noexcept;

public:
    explicit TimeRanges(const emlite::Val &val) noexcept;
    static TimeRanges take_ownership(Handle h) noexcept;

    TimeRanges clone() const noexcept;
    unsigned long length() const;
    double start(unsigned long index);
    double end(unsigned long index);
};

