#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ByteLengthQueuingStrategy : public emlite::Val {
    explicit ByteLengthQueuingStrategy(Handle h) noexcept;

public:
    explicit ByteLengthQueuingStrategy(const emlite::Val &val) noexcept;
    static ByteLengthQueuingStrategy take_ownership(Handle h) noexcept;

    ByteLengthQueuingStrategy clone() const noexcept;
    ByteLengthQueuingStrategy(const jsbind::Any& init);
    double highWaterMark() const;
    jsbind::Function size() const;
};

