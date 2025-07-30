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
    ExtendableCookieChangeEvent(const jsbind::String& type);
    ExtendableCookieChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::TypedArray<CookieListItem> changed() const;
    jsbind::TypedArray<CookieListItem> deleted() const;
};

