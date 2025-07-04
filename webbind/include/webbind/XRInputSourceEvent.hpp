#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRFrame;
class XRInputSource;


class XRInputSourceEvent : public Event {
    explicit XRInputSourceEvent(Handle h) noexcept;

public:
    explicit XRInputSourceEvent(const emlite::Val &val) noexcept;
    static XRInputSourceEvent take_ownership(Handle h) noexcept;

    XRInputSourceEvent clone() const noexcept;
    XRInputSourceEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    XRFrame frame() const;
    XRInputSource inputSource() const;
};

