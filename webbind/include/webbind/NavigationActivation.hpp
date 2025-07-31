#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NavigationHistoryEntry;


/// The NavigationActivation class.
/// [`NavigationActivation`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation)
class NavigationActivation : public emlite::Val {
    explicit NavigationActivation(Handle h) noexcept;

public:
    explicit NavigationActivation(const emlite::Val &val) noexcept;
    static NavigationActivation take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigationActivation clone() const noexcept;
    /// Getter of the `from` attribute.
    /// [`NavigationActivation.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/from)
    [[nodiscard]] NavigationHistoryEntry from() const;
    /// Getter of the `entry` attribute.
    /// [`NavigationActivation.entry`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/entry)
    [[nodiscard]] NavigationHistoryEntry entry() const;
    /// Getter of the `navigationType` attribute.
    /// [`NavigationActivation.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
};

