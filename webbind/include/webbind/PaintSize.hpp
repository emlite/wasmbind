#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PaintSize : public emlite::Val {
    explicit PaintSize(Handle h) noexcept;

public:
    explicit PaintSize(const emlite::Val &val) noexcept;
    static PaintSize take_ownership(Handle h) noexcept;

    PaintSize clone() const noexcept;
    double width() const;
    double height() const;
};

