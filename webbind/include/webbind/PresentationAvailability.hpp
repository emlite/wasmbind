#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class PresentationAvailability : public EventTarget {
    explicit PresentationAvailability(Handle h) noexcept;

public:
    explicit PresentationAvailability(const emlite::Val &val) noexcept;
    static PresentationAvailability take_ownership(Handle h) noexcept;

    PresentationAvailability clone() const noexcept;
    bool value() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

