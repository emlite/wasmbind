#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class HTMLElement;


class SubmitEvent : public Event {
    explicit SubmitEvent(Handle h) noexcept;

public:
    explicit SubmitEvent(const emlite::Val &val) noexcept;
    static SubmitEvent take_ownership(Handle h) noexcept;

    SubmitEvent clone() const noexcept;
    SubmitEvent(const jsbind::DOMString& type);
    SubmitEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    HTMLElement submitter() const;
};

