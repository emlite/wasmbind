#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class ProgressEvent : public Event {
    explicit ProgressEvent(Handle h) noexcept;

public:
    explicit ProgressEvent(const emlite::Val &val) noexcept;
    static ProgressEvent take_ownership(Handle h) noexcept;

    ProgressEvent clone() const noexcept;
    ProgressEvent(const jsbind::String& type);
    ProgressEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    bool lengthComputable() const;
    double loaded() const;
    double total() const;
};

