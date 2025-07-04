#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class TextMetrics : public emlite::Val {
    explicit TextMetrics(Handle h) noexcept;

public:
    explicit TextMetrics(const emlite::Val &val) noexcept;
    static TextMetrics take_ownership(Handle h) noexcept;

    TextMetrics clone() const noexcept;
    double width() const;
    double actualBoundingBoxLeft() const;
    double actualBoundingBoxRight() const;
    double fontBoundingBoxAscent() const;
    double fontBoundingBoxDescent() const;
    double actualBoundingBoxAscent() const;
    double actualBoundingBoxDescent() const;
    double emHeightAscent() const;
    double emHeightDescent() const;
    double hangingBaseline() const;
    double alphabeticBaseline() const;
    double ideographicBaseline() const;
};

