#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "SnapEventInit.hpp"

namespace webbind {

class Node;

/// Interface SnapEvent
/// [`SnapEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SnapEvent)
class SnapEvent : public Event {
    explicit SnapEvent(Handle h) noexcept;
public:
    explicit SnapEvent(const emlite::Val &val) noexcept;
    static SnapEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SnapEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SnapEvent(..)` constructor, creating a new SnapEvent instance
    SnapEvent(const jsbind::String& type);
    /// The `new SnapEvent(..)` constructor, creating a new SnapEvent instance
    SnapEvent(const jsbind::String& type, const SnapEventInit& eventInitDict);
    /// Getter of the `snapTargetBlock` attribute.
    /// [`SnapEvent.snapTargetBlock`](https://developer.mozilla.org/en-US/docs/Web/API/SnapEvent/snapTargetBlock)
    [[nodiscard]] Node snapTargetBlock() const;
    /// Getter of the `snapTargetInline` attribute.
    /// [`SnapEvent.snapTargetInline`](https://developer.mozilla.org/en-US/docs/Web/API/SnapEvent/snapTargetInline)
    [[nodiscard]] Node snapTargetInline() const;
};

} // namespace webbind