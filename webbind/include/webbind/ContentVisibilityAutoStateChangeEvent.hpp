#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class ContentVisibilityAutoStateChangeEvent : public Event {
    explicit ContentVisibilityAutoStateChangeEvent(Handle h) noexcept;

public:
    explicit ContentVisibilityAutoStateChangeEvent(const emlite::Val &val) noexcept;
    static ContentVisibilityAutoStateChangeEvent take_ownership(Handle h) noexcept;

    ContentVisibilityAutoStateChangeEvent clone() const noexcept;
    ContentVisibilityAutoStateChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    bool skipped() const;
};

