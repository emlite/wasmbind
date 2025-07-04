#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class ViewTransition;


class PageRevealEvent : public Event {
    explicit PageRevealEvent(Handle h) noexcept;

public:
    explicit PageRevealEvent(const emlite::Val &val) noexcept;
    static PageRevealEvent take_ownership(Handle h) noexcept;

    PageRevealEvent clone() const noexcept;
    PageRevealEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    ViewTransition viewTransition() const;
};

