#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMRect;


class VirtualKeyboard : public EventTarget {
    explicit VirtualKeyboard(Handle h) noexcept;

public:
    explicit VirtualKeyboard(const emlite::Val &val) noexcept;
    static VirtualKeyboard take_ownership(Handle h) noexcept;

    VirtualKeyboard clone() const noexcept;
    jsbind::Undefined show();
    jsbind::Undefined hide();
    DOMRect boundingRect() const;
    bool overlaysContent() const;
    void overlaysContent(bool value);
    jsbind::Any ongeometrychange() const;
    void ongeometrychange(const jsbind::Any& value);
};

