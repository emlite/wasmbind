#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MIDIInputMap;
class MIDIOutputMap;


/// The MIDIAccess class.
/// [`MIDIAccess`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess)
class MIDIAccess : public EventTarget {
    explicit MIDIAccess(Handle h) noexcept;

public:
    explicit MIDIAccess(const emlite::Val &val) noexcept;
    static MIDIAccess take_ownership(Handle h) noexcept;

    [[nodiscard]] MIDIAccess clone() const noexcept;
    /// Getter of the `inputs` attribute.
    /// [`MIDIAccess.inputs`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/inputs)
    [[nodiscard]] MIDIInputMap inputs() const;
    /// Getter of the `outputs` attribute.
    /// [`MIDIAccess.outputs`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/outputs)
    [[nodiscard]] MIDIOutputMap outputs() const;
    /// Getter of the `onstatechange` attribute.
    /// [`MIDIAccess.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`MIDIAccess.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// Getter of the `sysexEnabled` attribute.
    /// [`MIDIAccess.sysexEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/sysexEnabled)
    [[nodiscard]] bool sysexEnabled() const;
};

