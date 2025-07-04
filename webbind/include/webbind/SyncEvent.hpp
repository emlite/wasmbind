#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


class SyncEvent : public ExtendableEvent {
    explicit SyncEvent(Handle h) noexcept;

public:
    explicit SyncEvent(const emlite::Val &val) noexcept;
    static SyncEvent take_ownership(Handle h) noexcept;

    SyncEvent clone() const noexcept;
    SyncEvent(const jsbind::DOMString& type, const jsbind::Any& init);
    jsbind::DOMString tag() const;
    bool lastChance() const;
};

