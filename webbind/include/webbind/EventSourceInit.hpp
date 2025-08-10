#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EventSourceInit
class EventSourceInit : public emlite::Val {
  explicit EventSourceInit(Handle h) noexcept;
public:
    static EventSourceInit take_ownership(Handle h) noexcept;
    explicit EventSourceInit(const emlite::Val &val) noexcept;
    EventSourceInit() noexcept;
    [[nodiscard]] EventSourceInit clone() const noexcept;
    /// Getter of the `withCredentials` attribute.
    [[nodiscard]] bool withCredentials() const;
    /// Setter of the `withCredentials` attribute.
    void withCredentials(bool value);
};

} // namespace webbind