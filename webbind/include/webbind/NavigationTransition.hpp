#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class NavigationHistoryEntry;

/// Interface NavigationTransition
/// [`NavigationTransition`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition)
class NavigationTransition : public emlite::Val {
    explicit NavigationTransition(Handle h) noexcept;
public:
    explicit NavigationTransition(const emlite::Val &val) noexcept;
    static NavigationTransition take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationTransition clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `navigationType` attribute.
    /// [`NavigationTransition.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
    /// Getter of the `from` attribute.
    /// [`NavigationTransition.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/from)
    [[nodiscard]] NavigationHistoryEntry from() const;
    /// Getter of the `finished` attribute.
    /// [`NavigationTransition.finished`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/finished)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> finished() const;
};

} // namespace webbind