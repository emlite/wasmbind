#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type ExtendableCookieChangeEventInit
class ExtendableCookieChangeEventInit : public ExtendableEventInit {
  explicit ExtendableCookieChangeEventInit(Handle h) noexcept;
public:
    static ExtendableCookieChangeEventInit take_ownership(Handle h) noexcept;
    explicit ExtendableCookieChangeEventInit(const emlite::Val &val) noexcept;
    ExtendableCookieChangeEventInit() noexcept;
    [[nodiscard]] ExtendableCookieChangeEventInit clone() const noexcept;
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