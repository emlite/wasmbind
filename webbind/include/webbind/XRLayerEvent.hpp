#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRLayer;


/// The XRLayerEvent class.
/// [`XRLayerEvent`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerEvent)
class XRLayerEvent : public Event {
    explicit XRLayerEvent(Handle h) noexcept;

public:
    explicit XRLayerEvent(const emlite::Val &val) noexcept;
    static XRLayerEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] XRLayerEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRLayerEvent(..)` constructor, creating a new XRLayerEvent instance
    XRLayerEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `layer` attribute.
    /// [`XRLayerEvent.layer`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerEvent/layer)
    [[nodiscard]] XRLayer layer() const;
};

