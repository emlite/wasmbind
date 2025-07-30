#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MIDIPort.hpp"
#include "enums.hpp"


class MIDIOutput : public MIDIPort {
    explicit MIDIOutput(Handle h) noexcept;

public:
    explicit MIDIOutput(const emlite::Val &val) noexcept;
    static MIDIOutput take_ownership(Handle h) noexcept;

    MIDIOutput clone() const noexcept;
    jsbind::Undefined send(jsbind::TypedArray<unsigned char> data);
    jsbind::Undefined send(jsbind::TypedArray<unsigned char> data, const jsbind::Any& timestamp);
    jsbind::Undefined clear();
};

