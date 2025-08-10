#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CookieChangeEventInit
class CookieChangeEventInit : public EventInit {
  explicit CookieChangeEventInit(Handle h) noexcept;
public:
    static CookieChangeEventInit take_ownership(Handle h) noexcept;
    explicit CookieChangeEventInit(const emlite::Val &val) noexcept;
    CookieChangeEventInit() noexcept;
    [[nodiscard]] CookieChangeEventInit clone() const noexcept;
    /// Getter of the `changed` attribute.
    [[nodiscard]] jsbind::Any changed() const;
    /// Setter of the `changed` attribute.
    void changed(const jsbind::Any& value);
    /// Getter of the `deleted` attribute.
    [[nodiscard]] jsbind::Any deleted() const;
    /// Setter of the `deleted` attribute.
    void deleted(const jsbind::Any& value);
};

} // namespace webbind