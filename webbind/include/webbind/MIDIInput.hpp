#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MIDIPort.hpp"
#include "enums.hpp"


class MIDIInput : public MIDIPort {
    explicit MIDIInput(Handle h) noexcept;

public:
    explicit MIDIInput(const emlite::Val &val) noexcept;
    static MIDIInput take_ownership(Handle h) noexcept;

    MIDIInput clone() const noexcept;
    jsbind::Any onmidimessage() const;
    void onmidimessage(const jsbind::Any& value);
};

