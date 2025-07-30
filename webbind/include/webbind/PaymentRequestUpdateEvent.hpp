#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "PaymentRequest.hpp"
#include "enums.hpp"


class PaymentRequestUpdateEvent : public Event {
    explicit PaymentRequestUpdateEvent(Handle h) noexcept;

public:
    explicit PaymentRequestUpdateEvent(const emlite::Val &val) noexcept;
    static PaymentRequestUpdateEvent take_ownership(Handle h) noexcept;

    PaymentRequestUpdateEvent clone() const noexcept;
    PaymentRequestUpdateEvent(const jsbind::String& type);
    PaymentRequestUpdateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::Undefined updateWith(const jsbind::Promise<PaymentDetailsUpdate>& detailsPromise);
};

