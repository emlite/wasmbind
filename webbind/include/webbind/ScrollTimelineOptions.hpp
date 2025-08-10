#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type ScrollTimelineOptions
/// [`ScrollTimelineOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimelineOptions)
class ScrollTimelineOptions : public emlite::Val {
  explicit ScrollTimelineOptions(Handle h) noexcept;
public:
    static ScrollTimelineOptions take_ownership(Handle h) noexcept;
    explicit ScrollTimelineOptions(const emlite::Val &val) noexcept;
    ScrollTimelineOptions() noexcept;
    [[nodiscard]] ScrollTimelineOptions clone() const noexcept;
    [[nodiscard]] Element source() const;
    void source(const Element& value);
    [[nodiscard]] ScrollAxis axis() const;
    void axis(const ScrollAxis& value);
};

} // namespace webbind