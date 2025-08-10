#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FenceEvent
/// [`FenceEvent`](https://developer.mozilla.org/en-US/docs/Web/API/FenceEvent)
class FenceEvent : public emlite::Val {
  explicit FenceEvent(Handle h) noexcept;
public:
    static FenceEvent take_ownership(Handle h) noexcept;
    explicit FenceEvent(const emlite::Val &val) noexcept;
    FenceEvent() noexcept;
    [[nodiscard]] FenceEvent clone() const noexcept;
    [[nodiscard]] jsbind::String eventType() const;
    void eventType(const jsbind::String& value);
    [[nodiscard]] jsbind::String eventData() const;
    void eventData(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<FenceReportingDestination> destination() const;
    void destination(const jsbind::TypedArray<FenceReportingDestination>& value);
    [[nodiscard]] bool crossOriginExposed() const;
    void crossOriginExposed(bool value);
    [[nodiscard]] bool once() const;
    void once(bool value);
    [[nodiscard]] jsbind::String destinationURL() const;
    void destinationURL(const jsbind::String& value);
};

} // namespace webbind