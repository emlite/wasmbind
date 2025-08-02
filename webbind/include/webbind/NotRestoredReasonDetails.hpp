#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The NotRestoredReasonDetails class.
/// [`NotRestoredReasonDetails`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasonDetails)
class NotRestoredReasonDetails : public emlite::Val {
    explicit NotRestoredReasonDetails(Handle h) noexcept;

public:
    explicit NotRestoredReasonDetails(const emlite::Val &val) noexcept;
    static NotRestoredReasonDetails take_ownership(Handle h) noexcept;

    [[nodiscard]] NotRestoredReasonDetails clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `reason` attribute.
    /// [`NotRestoredReasonDetails.reason`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasonDetails/reason)
    [[nodiscard]] jsbind::String reason() const;
    /// The toJSON method.
    /// [`NotRestoredReasonDetails.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasonDetails/toJSON)
    jsbind::Object toJSON();
};

