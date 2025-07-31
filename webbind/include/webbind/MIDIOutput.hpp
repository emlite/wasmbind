#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MIDIPort.hpp"
#include "enums.hpp"


/// The MIDIOutput class.
/// [`MIDIOutput`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIOutput)
class MIDIOutput : public MIDIPort {
    explicit MIDIOutput(Handle h) noexcept;

public:
    explicit MIDIOutput(const emlite::Val &val) noexcept;
    static MIDIOutput take_ownership(Handle h) noexcept;

    [[nodiscard]] MIDIOutput clone() const noexcept;
    /// The send method.
    /// [`MIDIOutput.send`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIOutput/send)
    jsbind::Undefined send(jsbind::TypedArray<unsigned char> data);
    /// The send method.
    /// [`MIDIOutput.send`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIOutput/send)
    jsbind::Undefined send(jsbind::TypedArray<unsigned char> data, const jsbind::Any& timestamp);
    /// The clear method.
    /// [`MIDIOutput.clear`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIOutput/clear)
    jsbind::Undefined clear();
};

