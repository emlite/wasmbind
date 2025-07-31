#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MIDIPort;


/// The MIDIPort class.
/// [`MIDIPort`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort)
class MIDIPort : public EventTarget {
    explicit MIDIPort(Handle h) noexcept;

public:
    explicit MIDIPort(const emlite::Val &val) noexcept;
    static MIDIPort take_ownership(Handle h) noexcept;

    [[nodiscard]] MIDIPort clone() const noexcept;
    /// Getter of the `id` attribute.
    /// [`MIDIPort.id`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `manufacturer` attribute.
    /// [`MIDIPort.manufacturer`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/manufacturer)
    [[nodiscard]] jsbind::String manufacturer() const;
    /// Getter of the `name` attribute.
    /// [`MIDIPort.name`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `type` attribute.
    /// [`MIDIPort.type`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/type)
    [[nodiscard]] MIDIPortType type() const;
    /// Getter of the `version` attribute.
    /// [`MIDIPort.version`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/version)
    [[nodiscard]] jsbind::String version() const;
    /// Getter of the `state` attribute.
    /// [`MIDIPort.state`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/state)
    [[nodiscard]] MIDIPortDeviceState state() const;
    /// Getter of the `connection` attribute.
    /// [`MIDIPort.connection`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort/connection)
    [[nodiscard]] MIDIPortConnectionState connection() const;
    /// Getter of the `onstatechange` attribute.
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

