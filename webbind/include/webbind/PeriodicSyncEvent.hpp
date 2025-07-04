#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


class PeriodicSyncEvent : public ExtendableEvent {
    explicit PeriodicSyncEvent(Handle h) noexcept;

public:
    explicit PeriodicSyncEvent(const emlite::Val &val) noexcept;
    static PeriodicSyncEvent take_ownership(Handle h) noexcept;

    PeriodicSyncEvent clone() const noexcept;
    PeriodicSyncEvent(const jsbind::DOMString& type, const jsbind::Any& init);
    jsbind::DOMString tag() const;
};

