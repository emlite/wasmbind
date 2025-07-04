#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class DOMRect;


class WindowControlsOverlayGeometryChangeEvent : public Event {
    explicit WindowControlsOverlayGeometryChangeEvent(Handle h) noexcept;

public:
    explicit WindowControlsOverlayGeometryChangeEvent(const emlite::Val &val) noexcept;
    static WindowControlsOverlayGeometryChangeEvent take_ownership(Handle h) noexcept;

    WindowControlsOverlayGeometryChangeEvent clone() const noexcept;
    WindowControlsOverlayGeometryChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    DOMRect titlebarAreaRect() const;
    bool visible() const;
};

