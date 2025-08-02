#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PaymentManager class.
/// [`PaymentManager`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentManager)
class PaymentManager : public emlite::Val {
    explicit PaymentManager(Handle h) noexcept;

public:
    explicit PaymentManager(const emlite::Val &val) noexcept;
    static PaymentManager take_ownership(Handle h) noexcept;

    [[nodiscard]] PaymentManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `userHint` attribute.
    /// [`PaymentManager.userHint`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentManager/userHint)
    [[nodiscard]] jsbind::String userHint() const;
    /// Setter of the `userHint` attribute.
    /// [`PaymentManager.userHint`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentManager/userHint)
    void userHint(const jsbind::String& value);
    /// The enableDelegations method.
    /// [`PaymentManager.enableDelegations`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentManager/enableDelegations)
    jsbind::Promise<jsbind::Undefined> enableDelegations(const jsbind::TypedArray<PaymentDelegation>& delegations);
};

