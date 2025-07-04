#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class NavigationHistoryEntry : public EventTarget {
    explicit NavigationHistoryEntry(Handle h) noexcept;

public:
    explicit NavigationHistoryEntry(const emlite::Val &val) noexcept;
    static NavigationHistoryEntry take_ownership(Handle h) noexcept;

    NavigationHistoryEntry clone() const noexcept;
    jsbind::USVString url() const;
    jsbind::DOMString key() const;
    jsbind::DOMString id() const;
    long long index() const;
    bool sameDocument() const;
    jsbind::Any getState();
    jsbind::Any ondispose() const;
    void ondispose(const jsbind::Any& value);
};

