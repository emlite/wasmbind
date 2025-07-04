#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMRect;


class WindowControlsOverlay : public EventTarget {
    explicit WindowControlsOverlay(Handle h) noexcept;

public:
    explicit WindowControlsOverlay(const emlite::Val &val) noexcept;
    static WindowControlsOverlay take_ownership(Handle h) noexcept;

    WindowControlsOverlay clone() const noexcept;
    bool visible() const;
    DOMRect getTitlebarAreaRect();
    jsbind::Any ongeometrychange() const;
    void ongeometrychange(const jsbind::Any& value);
};

