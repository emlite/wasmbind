#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PressureRecord : public emlite::Val {
    explicit PressureRecord(Handle h) noexcept;

public:
    explicit PressureRecord(const emlite::Val &val) noexcept;
    static PressureRecord take_ownership(Handle h) noexcept;

    PressureRecord clone() const noexcept;
    PressureSource source() const;
    PressureState state() const;
    jsbind::Any time() const;
    jsbind::Object toJSON();
};

