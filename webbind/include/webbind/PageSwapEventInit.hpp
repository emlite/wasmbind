#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class NavigationActivation;
class ViewTransition;

/// Dictionary type PageSwapEventInit
class PageSwapEventInit : public EventInit {
  explicit PageSwapEventInit(Handle h) noexcept;
public:
    static PageSwapEventInit take_ownership(Handle h) noexcept;
    explicit PageSwapEventInit(const emlite::Val &val) noexcept;
    PageSwapEventInit() noexcept;
    [[nodiscard]] PageSwapEventInit clone() const noexcept;
    /// Getter of the `activation` attribute.
    [[nodiscard]] NavigationActivation activation() const;
    /// Setter of the `activation` attribute.
    void activation(const NavigationActivation& value);
    /// Getter of the `viewTransition` attribute.
    [[nodiscard]] ViewTransition viewTransition() const;
    /// Setter of the `viewTransition` attribute.
    void viewTransition(const ViewTransition& value);
};

} // namespace webbind