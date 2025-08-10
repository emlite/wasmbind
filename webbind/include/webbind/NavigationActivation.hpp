#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class NavigationHistoryEntry;

/// Interface NavigationActivation
/// [`NavigationActivation`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation)
class NavigationActivation : public emlite::Val {
    explicit NavigationActivation(Handle h) noexcept;
public:
    explicit NavigationActivation(const emlite::Val &val) noexcept;
    static NavigationActivation take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationActivation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`NavigationActivation.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/from)
    /// [`NavigationActivation.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/from)
    [[nodiscard]] NavigationHistoryEntry from() const;
    /// [`NavigationActivation.entry`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/entry)
    /// [`NavigationActivation.entry`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/entry)
    [[nodiscard]] NavigationHistoryEntry entry() const;
    /// [`NavigationActivation.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/navigationType)
    /// [`NavigationActivation.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
};

} // namespace webbind