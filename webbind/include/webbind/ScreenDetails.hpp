#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ScreenDetailed;


class ScreenDetails : public EventTarget {
    explicit ScreenDetails(Handle h) noexcept;

public:
    explicit ScreenDetails(const emlite::Val &val) noexcept;
    static ScreenDetails take_ownership(Handle h) noexcept;

    ScreenDetails clone() const noexcept;
    jsbind::FrozenArray<ScreenDetailed> screens() const;
    ScreenDetailed currentScreen() const;
    jsbind::Any onscreenschange() const;
    void onscreenschange(const jsbind::Any& value);
    jsbind::Any oncurrentscreenchange() const;
    void oncurrentscreenchange(const jsbind::Any& value);
};

