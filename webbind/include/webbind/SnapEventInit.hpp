#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Node;

/// Dictionary type SnapEventInit
class SnapEventInit : public EventInit {
  explicit SnapEventInit(Handle h) noexcept;
public:
    static SnapEventInit take_ownership(Handle h) noexcept;
    explicit SnapEventInit(const emlite::Val &val) noexcept;
    SnapEventInit() noexcept;
    [[nodiscard]] SnapEventInit clone() const noexcept;
    /// Getter of the `snapTargetBlock` attribute.
    [[nodiscard]] Node snapTargetBlock() const;
    /// Setter of the `snapTargetBlock` attribute.
    void snapTargetBlock(const Node& value);
    /// Getter of the `snapTargetInline` attribute.
    [[nodiscard]] Node snapTargetInline() const;
    /// Setter of the `snapTargetInline` attribute.
    void snapTargetInline(const Node& value);
};

} // namespace webbind