#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class MIDIInputMap;
class MIDIOutputMap;

/// Interface MIDIAccess
/// [`MIDIAccess`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess)
class MIDIAccess : public EventTarget {
    explicit MIDIAccess(Handle h) noexcept;
public:
    explicit MIDIAccess(const emlite::Val &val) noexcept;
    static MIDIAccess take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIAccess clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MIDIAccess.inputs`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/inputs)
    /// [`MIDIAccess.inputs`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/inputs)
    [[nodiscard]] MIDIInputMap inputs() const;
    /// [`MIDIAccess.outputs`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/outputs)
    /// [`MIDIAccess.outputs`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/outputs)
    [[nodiscard]] MIDIOutputMap outputs() const;
    /// [`MIDIAccess.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/onstatechange)
    /// [`MIDIAccess.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`MIDIAccess.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// [`MIDIAccess.sysexEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/sysexEnabled)
    /// [`MIDIAccess.sysexEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess/sysexEnabled)
    [[nodiscard]] bool sysexEnabled() const;
};

} // namespace webbind