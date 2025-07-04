#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Baseline : public emlite::Val {
    explicit Baseline(Handle h) noexcept;

public:
    explicit Baseline(const emlite::Val &val) noexcept;
    static Baseline take_ownership(Handle h) noexcept;

    Baseline clone() const noexcept;
    jsbind::DOMString name() const;
    double value() const;
};

