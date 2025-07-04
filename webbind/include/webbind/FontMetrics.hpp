#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Baseline;
class Font;


class FontMetrics : public emlite::Val {
    explicit FontMetrics(Handle h) noexcept;

public:
    explicit FontMetrics(const emlite::Val &val) noexcept;
    static FontMetrics take_ownership(Handle h) noexcept;

    FontMetrics clone() const noexcept;
    double width() const;
    jsbind::FrozenArray<double> advances() const;
    double boundingBoxLeft() const;
    double boundingBoxRight() const;
    double height() const;
    double emHeightAscent() const;
    double emHeightDescent() const;
    double boundingBoxAscent() const;
    double boundingBoxDescent() const;
    double fontBoundingBoxAscent() const;
    double fontBoundingBoxDescent() const;
    Baseline dominantBaseline() const;
    jsbind::FrozenArray<Baseline> baselines() const;
    jsbind::FrozenArray<Font> fonts() const;
};

