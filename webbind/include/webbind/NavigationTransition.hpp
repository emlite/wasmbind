#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NavigationHistoryEntry;


/// The NavigationTransition class.
/// [`NavigationTransition`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition)
class NavigationTransition : public emlite::Val {
    explicit NavigationTransition(Handle h) noexcept;

public:
    explicit NavigationTransition(const emlite::Val &val) noexcept;
    static NavigationTransition take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigationTransition clone() const noexcept;
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

