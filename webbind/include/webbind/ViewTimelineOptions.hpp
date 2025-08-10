#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type ViewTimelineOptions
/// [`ViewTimelineOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimelineOptions)
class ViewTimelineOptions : public emlite::Val {
  explicit ViewTimelineOptions(Handle h) noexcept;
public:
    static ViewTimelineOptions take_ownership(Handle h) noexcept;
    explicit ViewTimelineOptions(const emlite::Val &val) noexcept;
    ViewTimelineOptions() noexcept;
    [[nodiscard]] ViewTimelineOptions clone() const noexcept;
    [[nodiscard]] Element subject() const;
    void subject(const Element& value);
    [[nodiscard]] ScrollAxis axis() const;
    void axis(const ScrollAxis& value);
    [[nodiscard]] jsbind::Any inset() const;
    void inset(const jsbind::Any& value);
};

} // namespace webbind