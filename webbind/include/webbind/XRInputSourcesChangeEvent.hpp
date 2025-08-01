#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRSession;
class XRInputSource;


/// The XRInputSourcesChangeEvent class.
/// [`XRInputSourcesChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourcesChangeEvent)
class XRInputSourcesChangeEvent : public Event {
    explicit XRInputSourcesChangeEvent(Handle h) noexcept;

public:
    explicit XRInputSourcesChangeEvent(const emlite::Val &val) noexcept;
    static XRInputSourcesChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] XRInputSourcesChangeEvent clone() const noexcept;
    /// The `new XRInputSourcesChangeEvent(..)` constructor, creating a new XRInputSourcesChangeEvent instance
    XRInputSourcesChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `session` attribute.
    /// [`XRInputSourcesChangeEvent.session`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourcesChangeEvent/session)
    [[nodiscard]] XRSession session() const;
    /// Getter of the `added` attribute.
    /// [`XRInputSourcesChangeEvent.added`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourcesChangeEvent/added)
    [[nodiscard]] jsbind::TypedArray<XRInputSource> added() const;
    /// Getter of the `removed` attribute.
    /// [`XRInputSourcesChangeEvent.removed`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourcesChangeEvent/removed)
    [[nodiscard]] jsbind::TypedArray<XRInputSource> removed() const;
};

