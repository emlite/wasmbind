#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Node;

/// Dictionary type SnapEventInit
/// [`SnapEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SnapEventInit)
class SnapEventInit : public EventInit {
  explicit SnapEventInit(Handle h) noexcept;
public:
    static SnapEventInit take_ownership(Handle h) noexcept;
    explicit SnapEventInit(const emlite::Val &val) noexcept;
    SnapEventInit() noexcept;
    [[nodiscard]] SnapEventInit clone() const noexcept;
    [[nodiscard]] Node snapTargetBlock() const;
    void snapTargetBlock(const Node& value);
    [[nodiscard]] Node snapTargetInline() const;
    void snapTargetInline(const Node& value);
};

} // namespace webbind