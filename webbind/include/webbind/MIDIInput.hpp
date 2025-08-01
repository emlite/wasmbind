#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MIDIPort.hpp"
#include "enums.hpp"


/// The MIDIInput class.
/// [`MIDIInput`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIInput)
class MIDIInput : public MIDIPort {
    explicit MIDIInput(Handle h) noexcept;

public:
    explicit MIDIInput(const emlite::Val &val) noexcept;
    static MIDIInput take_ownership(Handle h) noexcept;

    [[nodiscard]] MIDIInput clone() const noexcept;
    /// Getter of the `onmidimessage` attribute.
    /// [`MIDIInput.onmidimessage`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIInput/onmidimessage)
    [[nodiscard]] jsbind::Any onmidimessage() const;
    /// Setter of the `onmidimessage` attribute.
    /// [`MIDIInput.onmidimessage`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIInput/onmidimessage)
    void onmidimessage(const jsbind::Any& value);
};

