#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class NavigationActivation;
class ViewTransition;

/// Dictionary type PageSwapEventInit
/// [`PageSwapEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEventInit)
class PageSwapEventInit : public EventInit {
  explicit PageSwapEventInit(Handle h) noexcept;
public:
    static PageSwapEventInit take_ownership(Handle h) noexcept;
    explicit PageSwapEventInit(const emlite::Val &val) noexcept;
    PageSwapEventInit() noexcept;
    [[nodiscard]] PageSwapEventInit clone() const noexcept;
    [[nodiscard]] NavigationActivation activation() const;
    void activation(const NavigationActivation& value);
    [[nodiscard]] ViewTransition viewTransition() const;
    void viewTransition(const ViewTransition& value);
};

} // namespace webbind