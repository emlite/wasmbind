#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class MIDIPort;

/// Interface MIDIPort
/// [`MIDIPort`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort)
class MIDIPort : public EventTarget {
    explicit MIDIPort(Handle h) noexcept;
public:
    explicit MIDIPort(const emlite::Val &val) noexcept;
    static MIDIPort take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIPort clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MIDIPort.id`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/id)
    /// [`MIDIPort.id`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`MIDIPort.manufacturer`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/manufacturer)
    /// [`MIDIPort.manufacturer`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/manufacturer)
    [[nodiscard]] jsbind::String manufacturer() const;
    /// [`MIDIPort.name`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/name)
    /// [`MIDIPort.name`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`MIDIPort.type`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/type)
    /// [`MIDIPort.type`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/type)
    [[nodiscard]] MIDIPortType type() const;
    /// [`MIDIPort.version`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/version)
    /// [`MIDIPort.version`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/version)
    [[nodiscard]] jsbind::String version() const;
    /// [`MIDIPort.state`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/state)
    /// [`MIDIPort.state`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/state)
    [[nodiscard]] MIDIPortDeviceState state() const;
    /// [`MIDIPort.connection`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/connection)
    /// [`MIDIPort.connection`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/connection)
    [[nodiscard]] MIDIPortConnectionState connection() const;
    /// [`MIDIPort.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/onstatechange)
    /// [`MIDIPort.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`MIDIPort.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// The open method.
    /// [`MIDIPort.open`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/open)
    jsbind::Promise<MIDIPort> open();
    /// The close method.
    /// [`MIDIPort.close`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/close)
    jsbind::Promise<MIDIPort> close();
};

} // namespace webbind