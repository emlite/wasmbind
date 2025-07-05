#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class NavigationActivation;
class ViewTransition;


class PageSwapEvent : public Event {
    explicit PageSwapEvent(Handle h) noexcept;

public:
    explicit PageSwapEvent(const emlite::Val &val) noexcept;
    static PageSwapEvent take_ownership(Handle h) noexcept;

    PageSwapEvent clone() const noexcept;
    PageSwapEvent(const jsbind::DOMString& type);
    PageSwapEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    NavigationActivation activation() const;
    ViewTransition viewTransition() const;
};

