#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class CountQueuingStrategy : public emlite::Val {
    explicit CountQueuingStrategy(Handle h) noexcept;

public:
    explicit CountQueuingStrategy(const emlite::Val &val) noexcept;
    static CountQueuingStrategy take_ownership(Handle h) noexcept;

    CountQueuingStrategy clone() const noexcept;
    CountQueuingStrategy(const jsbind::Any& init);
    double highWaterMark() const;
    jsbind::Function size() const;
};

