#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TaskSignalAnyInit
class TaskSignalAnyInit : public emlite::Val {
  explicit TaskSignalAnyInit(Handle h) noexcept;
public:
    static TaskSignalAnyInit take_ownership(Handle h) noexcept;
    explicit TaskSignalAnyInit(const emlite::Val &val) noexcept;
    TaskSignalAnyInit() noexcept;
    [[nodiscard]] TaskSignalAnyInit clone() const noexcept;
    /// Getter of the `priority` attribute.
    [[nodiscard]] jsbind::Any priority() const;
    /// Setter of the `priority` attribute.
    void priority(const jsbind::Any& value);
};

} // namespace webbind