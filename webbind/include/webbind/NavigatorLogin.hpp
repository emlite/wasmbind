#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The NavigatorLogin class.
/// [`NavigatorLogin`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorLogin)
class NavigatorLogin : public emlite::Val {
    explicit NavigatorLogin(Handle h) noexcept;

public:
    explicit NavigatorLogin(const emlite::Val &val) noexcept;
    static NavigatorLogin take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigatorLogin clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The setStatus method.
    /// [`NavigatorLogin.setStatus`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorLogin/setStatus)
    jsbind::Promise<jsbind::Undefined> setStatus(const LoginStatus& status);
};

