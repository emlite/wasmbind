#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NavigationNavigateOptions;

/// Interface NavigationPrecommitController
/// [`NavigationPrecommitController`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPrecommitController)
class NavigationPrecommitController : public emlite::Val {
    explicit NavigationPrecommitController(Handle h) noexcept;
public:
    explicit NavigationPrecommitController(const emlite::Val &val) noexcept;
    static NavigationPrecommitController take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationPrecommitController clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The redirect method.
    /// [`NavigationPrecommitController.redirect`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPrecommitController/redirect)
    jsbind::Undefined redirect(const jsbind::String& url);
    /// The redirect method.
    /// [`NavigationPrecommitController.redirect`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPrecommitController/redirect)
    jsbind::Undefined redirect(const jsbind::String& url, const NavigationNavigateOptions& options);
};

} // namespace webbind