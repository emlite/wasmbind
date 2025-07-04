#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MIDIInputMap;
class MIDIOutputMap;


class MIDIAccess : public EventTarget {
    explicit MIDIAccess(Handle h) noexcept;

public:
    explicit MIDIAccess(const emlite::Val &val) noexcept;
    static MIDIAccess take_ownership(Handle h) noexcept;

    MIDIAccess clone() const noexcept;
    MIDIInputMap inputs() const;
    MIDIOutputMap outputs() const;
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
    bool sysexEnabled() const;
};

