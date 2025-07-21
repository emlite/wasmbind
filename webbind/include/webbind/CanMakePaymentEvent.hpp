#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


class CanMakePaymentEvent : public ExtendableEvent {
    explicit CanMakePaymentEvent(Handle h) noexcept;

public:
    explicit CanMakePaymentEvent(const emlite::Val &val) noexcept;
    static CanMakePaymentEvent take_ownership(Handle h) noexcept;

    CanMakePaymentEvent clone() const noexcept;
    CanMakePaymentEvent(const jsbind::DOMString& type);
    jsbind::Undefined respondWith(jsbind::Promise<bool> canMakePaymentResponse);
};

