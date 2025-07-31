#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The MIDIInputMap class.
/// [`MIDIInputMap`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIInputMap)
class MIDIInputMap : public emlite::Val {
    explicit MIDIInputMap(Handle h) noexcept;

public:
    explicit MIDIInputMap(const emlite::Val &val) noexcept;
    static MIDIInputMap take_ownership(Handle h) noexcept;

    [[nodiscard]] MIDIInputMap clone() const noexcept;
};

