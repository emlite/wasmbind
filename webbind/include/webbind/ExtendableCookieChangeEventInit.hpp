#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type ExtendableCookieChangeEventInit
/// [`ExtendableCookieChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEventInit)
class ExtendableCookieChangeEventInit : public ExtendableEventInit {
  explicit ExtendableCookieChangeEventInit(Handle h) noexcept;
public:
    static ExtendableCookieChangeEventInit take_ownership(Handle h) noexcept;
    explicit ExtendableCookieChangeEventInit(const emlite::Val &val) noexcept;
    ExtendableCookieChangeEventInit() noexcept;
    [[nodiscard]] ExtendableCookieChangeEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any changed() const;
    void changed(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any deleted() const;
    void deleted(const jsbind::Any& value);
};

} // namespace webbind