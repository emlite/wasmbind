#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PaymentManager : public emlite::Val {
    explicit PaymentManager(Handle h) noexcept;

public:
    explicit PaymentManager(const emlite::Val &val) noexcept;
    static PaymentManager take_ownership(Handle h) noexcept;

    PaymentManager clone() const noexcept;
    jsbind::DOMString userHint() const;
    void userHint(const jsbind::DOMString& value);
    jsbind::Promise enableDelegations(const jsbind::Sequence<PaymentDelegation>& delegations);
};

