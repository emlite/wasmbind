#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class NavigationHistoryEntry;

/// Dictionary type NavigationCurrentEntryChangeEventInit
class NavigationCurrentEntryChangeEventInit : public EventInit {
  explicit NavigationCurrentEntryChangeEventInit(Handle h) noexcept;
public:
    static NavigationCurrentEntryChangeEventInit take_ownership(Handle h) noexcept;
    explicit NavigationCurrentEntryChangeEventInit(const emlite::Val &val) noexcept;
    NavigationCurrentEntryChangeEventInit() noexcept;
    [[nodiscard]] NavigationCurrentEntryChangeEventInit clone() const noexcept;
    /// Getter of the `navigationType` attribute.
    [[nodiscard]] NavigationType navigationType() const;
    /// Setter of the `navigationType` attribute.
    void navigationType(const NavigationType& value);
    /// Getter of the `from` attribute.
    [[nodiscard]] NavigationHistoryEntry from() const;
    /// Setter of the `from` attribute.
    void from(const NavigationHistoryEntry& value);
};

} // namespace webbind