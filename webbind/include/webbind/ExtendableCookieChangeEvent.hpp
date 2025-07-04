#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "CookieStore.hpp"
#include "enums.hpp"


class ExtendableCookieChangeEvent : public ExtendableEvent {
    explicit ExtendableCookieChangeEvent(Handle h) noexcept;

public:
    explicit ExtendableCookieChangeEvent(const emlite::Val &val) noexcept;
    static ExtendableCookieChangeEvent take_ownership(Handle h) noexcept;

    ExtendableCookieChangeEvent clone() const noexcept;
    ExtendableCookieChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::FrozenArray<CookieListItem> changed() const;
    jsbind::FrozenArray<CookieListItem> deleted() const;
};

