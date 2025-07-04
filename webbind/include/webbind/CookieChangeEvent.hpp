#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "CookieStore.hpp"
#include "enums.hpp"


class CookieChangeEvent : public Event {
    explicit CookieChangeEvent(Handle h) noexcept;

public:
    explicit CookieChangeEvent(const emlite::Val &val) noexcept;
    static CookieChangeEvent take_ownership(Handle h) noexcept;

    CookieChangeEvent clone() const noexcept;
    CookieChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::FrozenArray<CookieListItem> changed() const;
    jsbind::FrozenArray<CookieListItem> deleted() const;
};

