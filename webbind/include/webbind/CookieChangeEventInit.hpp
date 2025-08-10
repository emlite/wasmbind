#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CookieChangeEventInit
/// [`CookieChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEventInit)
class CookieChangeEventInit : public EventInit {
  explicit CookieChangeEventInit(Handle h) noexcept;
public:
    static CookieChangeEventInit take_ownership(Handle h) noexcept;
    explicit CookieChangeEventInit(const emlite::Val &val) noexcept;
    CookieChangeEventInit() noexcept;
    [[nodiscard]] CookieChangeEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any changed() const;
    void changed(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any deleted() const;
    void deleted(const jsbind::Any& value);
};

} // namespace webbind