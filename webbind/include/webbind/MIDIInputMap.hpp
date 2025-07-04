#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MIDIInputMap : public emlite::Val {
    explicit MIDIInputMap(Handle h) noexcept;

public:
    explicit MIDIInputMap(const emlite::Val &val) noexcept;
    static MIDIInputMap take_ownership(Handle h) noexcept;

    MIDIInputMap clone() const noexcept;
};

