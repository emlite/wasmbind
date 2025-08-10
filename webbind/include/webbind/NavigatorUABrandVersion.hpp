#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigatorUABrandVersion
/// [`NavigatorUABrandVersion`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUABrandVersion)
class NavigatorUABrandVersion : public emlite::Val {
  explicit NavigatorUABrandVersion(Handle h) noexcept;
public:
    static NavigatorUABrandVersion take_ownership(Handle h) noexcept;
    explicit NavigatorUABrandVersion(const emlite::Val &val) noexcept;
    NavigatorUABrandVersion() noexcept;
    [[nodiscard]] NavigatorUABrandVersion clone() const noexcept;
    [[nodiscard]] jsbind::String brand() const;
    void brand(const jsbind::String& value);
    [[nodiscard]] jsbind::String version() const;
    void version(const jsbind::String& value);
};

} // namespace webbind