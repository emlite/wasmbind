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
    /// [`NavigationTransition.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/navigationType)
    /// [`NavigationTransition.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
    /// [`NavigationTransition.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/from)
    /// [`NavigationTransition.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/from)
    [[nodiscard]] NavigationHistoryEntry from() const;
    /// [`NavigationTransition.committed`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/committed)
    /// [`NavigationTransition.committed`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/committed)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> committed() const;
    /// [`NavigationTransition.finished`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/finished)
    /// [`NavigationTransition.finished`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition/finished)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> finished() const;
};

} // namespace webbind