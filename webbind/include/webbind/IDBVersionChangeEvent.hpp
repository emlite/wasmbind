#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class IDBVersionChangeEvent : public Event {
    explicit IDBVersionChangeEvent(Handle h) noexcept;

public:
    explicit IDBVersionChangeEvent(const emlite::Val &val) noexcept;
    static IDBVersionChangeEvent take_ownership(Handle h) noexcept;

    IDBVersionChangeEvent clone() const noexcept;
    IDBVersionChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    long long oldVersion() const;
    long long newVersion() const;
};

