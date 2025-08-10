#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type PointerTimelineOptions
class PointerTimelineOptions : public emlite::Val {
  explicit PointerTimelineOptions(Handle h) noexcept;
public:
    static PointerTimelineOptions take_ownership(Handle h) noexcept;
    explicit PointerTimelineOptions(const emlite::Val &val) noexcept;
    PointerTimelineOptions() noexcept;
    [[nodiscard]] PointerTimelineOptions clone() const noexcept;
    /// Getter of the `source` attribute.
    [[nodiscard]] Element source() const;
    /// Setter of the `source` attribute.
    void source(const Element& value);
    /// Getter of the `axis` attribute.
    [[nodiscard]] PointerAxis axis() const;
    /// Setter of the `axis` attribute.
    void axis(const PointerAxis& value);
};

} // namespace webbind