#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class NavigationHistoryEntry;

/// Dictionary type NavigationCurrentEntryChangeEventInit
/// [`NavigationCurrentEntryChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEventInit)
class NavigationCurrentEntryChangeEventInit : public EventInit {
  explicit NavigationCurrentEntryChangeEventInit(Handle h) noexcept;
public:
    static NavigationCurrentEntryChangeEventInit take_ownership(Handle h) noexcept;
    explicit NavigationCurrentEntryChangeEventInit(const emlite::Val &val) noexcept;
    NavigationCurrentEntryChangeEventInit() noexcept;
    [[nodiscard]] NavigationCurrentEntryChangeEventInit clone() const noexcept;
    [[nodiscard]] NavigationType navigationType() const;
    void navigationType(const NavigationType& value);
    [[nodiscard]] NavigationHistoryEntry from() const;
    void from(const NavigationHistoryEntry& value);
};

} // namespace webbind