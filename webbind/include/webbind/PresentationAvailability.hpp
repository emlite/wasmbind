#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The PresentationAvailability class.
/// [`PresentationAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationAvailability)
class PresentationAvailability : public EventTarget {
    explicit PresentationAvailability(Handle h) noexcept;

public:
    explicit PresentationAvailability(const emlite::Val &val) noexcept;
    static PresentationAvailability take_ownership(Handle h) noexcept;

    [[nodiscard]] PresentationAvailability clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `value` attribute.
    /// [`PresentationAvailability.value`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationAvailability/value)
    [[nodiscard]] bool value() const;
    /// Getter of the `onchange` attribute.
    /// [`PresentationAvailability.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationAvailability/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`PresentationAvailability.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationAvailability/onchange)
    void onchange(const jsbind::Any& value);
};

