#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TrackEventInit
class TrackEventInit : public EventInit {
  explicit TrackEventInit(Handle h) noexcept;
public:
    static TrackEventInit take_ownership(Handle h) noexcept;
    explicit TrackEventInit(const emlite::Val &val) noexcept;
    TrackEventInit() noexcept;
    [[nodiscard]] TrackEventInit clone() const noexcept;
    /// Getter of the `track` attribute.
    [[nodiscard]] jsbind::Any track() const;
    /// Setter of the `track` attribute.
    void track(const jsbind::Any& value);
};

} // namespace webbind