#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRSession;
class XRInputSource;


class XRInputSourcesChangeEvent : public Event {
    explicit XRInputSourcesChangeEvent(Handle h) noexcept;

public:
    explicit XRInputSourcesChangeEvent(const emlite::Val &val) noexcept;
    static XRInputSourcesChangeEvent take_ownership(Handle h) noexcept;

    XRInputSourcesChangeEvent clone() const noexcept;
    XRInputSourcesChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    XRSession session() const;
    jsbind::TypedArray<XRInputSource> added() const;
    jsbind::TypedArray<XRInputSource> removed() const;
};

