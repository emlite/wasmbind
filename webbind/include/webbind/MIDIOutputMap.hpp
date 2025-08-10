#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface MIDIOutputMap
/// [`MIDIOutputMap`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIOutputMap)
class MIDIOutputMap : public emlite::Val {
    explicit MIDIOutputMap(Handle h) noexcept;
public:
    explicit MIDIOutputMap(const emlite::Val &val) noexcept;
    static MIDIOutputMap take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIOutputMap clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind