#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class ErrorEvent : public Event {
    explicit ErrorEvent(Handle h) noexcept;

public:
    explicit ErrorEvent(const emlite::Val &val) noexcept;
    static ErrorEvent take_ownership(Handle h) noexcept;

    ErrorEvent clone() const noexcept;
    ErrorEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::DOMString message() const;
    jsbind::USVString filename() const;
    unsigned long lineno() const;
    unsigned long colno() const;
    jsbind::Any error() const;
};

