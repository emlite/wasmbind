#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FenceEvent
class FenceEvent : public emlite::Val {
  explicit FenceEvent(Handle h) noexcept;
public:
    static FenceEvent take_ownership(Handle h) noexcept;
    explicit FenceEvent(const emlite::Val &val) noexcept;
    FenceEvent() noexcept;
    [[nodiscard]] FenceEvent clone() const noexcept;
    /// Getter of the `eventType` attribute.
    [[nodiscard]] jsbind::String eventType() const;
    /// Setter of the `eventType` attribute.
    void eventType(const jsbind::String& value);
    /// Getter of the `eventData` attribute.
    [[nodiscard]] jsbind::String eventData() const;
    /// Setter of the `eventData` attribute.
    void eventData(const jsbind::String& value);
    /// Getter of the `destination` attribute.
    [[nodiscard]] jsbind::TypedArray<FenceReportingDestination> destination() const;
    /// Setter of the `destination` attribute.
    void destination(const jsbind::TypedArray<FenceReportingDestination>& value);
    /// Getter of the `crossOriginExposed` attribute.
    [[nodiscard]] bool crossOriginExposed() const;
    /// Setter of the `crossOriginExposed` attribute.
    void crossOriginExposed(bool value);
    /// Getter of the `once` attribute.
    [[nodiscard]] bool once() const;
    /// Setter of the `once` attribute.
    void once(bool value);
    /// Getter of the `destinationURL` attribute.
    [[nodiscard]] jsbind::String destinationURL() const;
    /// Setter of the `destinationURL` attribute.
    void destinationURL(const jsbind::String& value);
};

} // namespace webbind