#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MIDIOutputMap : public emlite::Val {
    explicit MIDIOutputMap(Handle h) noexcept;

public:
    explicit MIDIOutputMap(const emlite::Val &val) noexcept;
    static MIDIOutputMap take_ownership(Handle h) noexcept;

    MIDIOutputMap clone() const noexcept;
};

