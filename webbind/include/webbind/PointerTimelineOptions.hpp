#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type PointerTimelineOptions
/// [`PointerTimelineOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PointerTimelineOptions)
class PointerTimelineOptions : public emlite::Val {
  explicit PointerTimelineOptions(Handle h) noexcept;
public:
    static PointerTimelineOptions take_ownership(Handle h) noexcept;
    explicit PointerTimelineOptions(const emlite::Val &val) noexcept;
    PointerTimelineOptions() noexcept;
    [[nodiscard]] PointerTimelineOptions clone() const noexcept;
    [[nodiscard]] Element source() const;
    void source(const Element& value);
    [[nodiscard]] PointerAxis axis() const;
    void axis(const PointerAxis& value);
};

} // namespace webbind