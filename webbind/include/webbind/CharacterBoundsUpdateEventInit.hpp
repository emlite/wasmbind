#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CharacterBoundsUpdateEventInit
/// [`CharacterBoundsUpdateEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterBoundsUpdateEventInit)
class CharacterBoundsUpdateEventInit : public EventInit {
  explicit CharacterBoundsUpdateEventInit(Handle h) noexcept;
public:
    static CharacterBoundsUpdateEventInit take_ownership(Handle h) noexcept;
    explicit CharacterBoundsUpdateEventInit(const emlite::Val &val) noexcept;
    CharacterBoundsUpdateEventInit() noexcept;
    [[nodiscard]] CharacterBoundsUpdateEventInit clone() const noexcept;
    [[nodiscard]] unsigned long rangeStart() const;
    void rangeStart(unsigned long value);
    [[nodiscard]] unsigned long rangeEnd() const;
    void rangeEnd(unsigned long value);
};

} // namespace webbind