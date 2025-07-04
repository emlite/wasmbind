#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class PromiseRejectionEvent : public Event {
    explicit PromiseRejectionEvent(Handle h) noexcept;

public:
    explicit PromiseRejectionEvent(const emlite::Val &val) noexcept;
    static PromiseRejectionEvent take_ownership(Handle h) noexcept;

    PromiseRejectionEvent clone() const noexcept;
    PromiseRejectionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Object promise() const;
    jsbind::Any reason() const;
};

