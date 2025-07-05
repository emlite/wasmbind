#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class MediaQueryListEvent : public Event {
    explicit MediaQueryListEvent(Handle h) noexcept;

public:
    explicit MediaQueryListEvent(const emlite::Val &val) noexcept;
    static MediaQueryListEvent take_ownership(Handle h) noexcept;

    MediaQueryListEvent clone() const noexcept;
    MediaQueryListEvent(const jsbind::CSSOMString& type);
    MediaQueryListEvent(const jsbind::CSSOMString& type, const jsbind::Any& eventInitDict);
    jsbind::CSSOMString media() const;
    bool matches() const;
};

