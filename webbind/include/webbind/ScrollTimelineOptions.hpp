#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type ScrollTimelineOptions
class ScrollTimelineOptions : public emlite::Val {
  explicit ScrollTimelineOptions(Handle h) noexcept;
public:
    static ScrollTimelineOptions take_ownership(Handle h) noexcept;
    explicit ScrollTimelineOptions(const emlite::Val &val) noexcept;
    ScrollTimelineOptions() noexcept;
    [[nodiscard]] ScrollTimelineOptions clone() const noexcept;
    /// Getter of the `source` attribute.
    [[nodiscard]] Element source() const;
    /// Setter of the `source` attribute.
    void source(const Element& value);
    /// Getter of the `axis` attribute.
    [[nodiscard]] ScrollAxis axis() const;
    /// Setter of the `axis` attribute.
    void axis(const ScrollAxis& value);
};

} // namespace webbind