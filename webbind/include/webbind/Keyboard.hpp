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
    jsbind::Promise<jsbind::Undefined> lock();
    jsbind::Promise<jsbind::Undefined> lock(const jsbind::TypedArray<jsbind::String>& keyCodes);
    jsbind::Undefined unlock();
    jsbind::Promise<KeyboardLayoutMap> getLayoutMap();
    jsbind::Any onlayoutchange() const;
    void onlayoutchange(const jsbind::Any& value);
};

