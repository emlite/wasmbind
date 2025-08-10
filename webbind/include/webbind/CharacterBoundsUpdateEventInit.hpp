#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CharacterBoundsUpdateEventInit
class CharacterBoundsUpdateEventInit : public EventInit {
  explicit CharacterBoundsUpdateEventInit(Handle h) noexcept;
public:
    static CharacterBoundsUpdateEventInit take_ownership(Handle h) noexcept;
    explicit CharacterBoundsUpdateEventInit(const emlite::Val &val) noexcept;
    CharacterBoundsUpdateEventInit() noexcept;
    [[nodiscard]] CharacterBoundsUpdateEventInit clone() const noexcept;
    /// Getter of the `rangeStart` attribute.
    [[nodiscard]] unsigned long rangeStart() const;
    /// Setter of the `rangeStart` attribute.
    void rangeStart(unsigned long value);
    /// Getter of the `rangeEnd` attribute.
    [[nodiscard]] unsigned long rangeEnd() const;
    /// Setter of the `rangeEnd` attribute.
    void rangeEnd(unsigned long value);
};

} // namespace webbind