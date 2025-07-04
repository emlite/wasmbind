#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class KeyboardLayoutMap;


class Keyboard : public EventTarget {
    explicit Keyboard(Handle h) noexcept;

public:
    explicit Keyboard(const emlite::Val &val) noexcept;
    static Keyboard take_ownership(Handle h) noexcept;

    Keyboard clone() const noexcept;
    jsbind::Promise lock(const jsbind::Sequence<jsbind::DOMString>& keyCodes);
    jsbind::Undefined unlock();
    jsbind::Promise getLayoutMap();
    jsbind::Any onlayoutchange() const;
    void onlayoutchange(const jsbind::Any& value);
};

