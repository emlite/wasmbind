#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRLayer;


class XRLayerEvent : public Event {
    explicit XRLayerEvent(Handle h) noexcept;

public:
    explicit XRLayerEvent(const emlite::Val &val) noexcept;
    static XRLayerEvent take_ownership(Handle h) noexcept;

    XRLayerEvent clone() const noexcept;
    XRLayerEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    XRLayer layer() const;
};

