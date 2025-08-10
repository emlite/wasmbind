#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieStoreGetOptions
class CookieStoreGetOptions : public emlite::Val {
  explicit CookieStoreGetOptions(Handle h) noexcept;
public:
    static CookieStoreGetOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreGetOptions(const emlite::Val &val) noexcept;
    CookieStoreGetOptions() noexcept;
    [[nodiscard]] CookieStoreGetOptions clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
};

} // namespace webbind