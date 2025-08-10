#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type TrackEventInit
/// [`TrackEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/TrackEventInit)
class TrackEventInit : public EventInit {
  explicit TrackEventInit(Handle h) noexcept;
public:
    static TrackEventInit take_ownership(Handle h) noexcept;
    explicit TrackEventInit(const emlite::Val &val) noexcept;
    TrackEventInit() noexcept;
    [[nodiscard]] TrackEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any track() const;
    void track(const jsbind::Any& value);
};

} // namespace webbind