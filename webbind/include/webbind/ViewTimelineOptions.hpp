#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type ViewTimelineOptions
class ViewTimelineOptions : public emlite::Val {
  explicit ViewTimelineOptions(Handle h) noexcept;
public:
    static ViewTimelineOptions take_ownership(Handle h) noexcept;
    explicit ViewTimelineOptions(const emlite::Val &val) noexcept;
    ViewTimelineOptions() noexcept;
    [[nodiscard]] ViewTimelineOptions clone() const noexcept;
    /// Getter of the `subject` attribute.
    [[nodiscard]] Element subject() const;
    /// Setter of the `subject` attribute.
    void subject(const Element& value);
    /// Getter of the `axis` attribute.
    [[nodiscard]] ScrollAxis axis() const;
    /// Setter of the `axis` attribute.
    void axis(const ScrollAxis& value);
    /// Getter of the `inset` attribute.
    [[nodiscard]] jsbind::Any inset() const;
    /// Setter of the `inset` attribute.
    void inset(const jsbind::Any& value);
};

} // namespace webbind