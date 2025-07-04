#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ResizeObserverSize : public emlite::Val {
    explicit ResizeObserverSize(Handle h) noexcept;

public:
    explicit ResizeObserverSize(const emlite::Val &val) noexcept;
    static ResizeObserverSize take_ownership(Handle h) noexcept;

    ResizeObserverSize clone() const noexcept;
    double inlineSize() const;
    double blockSize() const;
};

