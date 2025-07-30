#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class HashChangeEvent : public Event {
    explicit HashChangeEvent(Handle h) noexcept;

public:
    explicit HashChangeEvent(const emlite::Val &val) noexcept;
    static HashChangeEvent take_ownership(Handle h) noexcept;

    HashChangeEvent clone() const noexcept;
    HashChangeEvent(const jsbind::String& type);
    HashChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String oldURL() const;
    jsbind::String newURL() const;
};

