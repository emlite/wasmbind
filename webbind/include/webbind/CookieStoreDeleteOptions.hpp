#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieStoreDeleteOptions
class CookieStoreDeleteOptions : public emlite::Val {
  explicit CookieStoreDeleteOptions(Handle h) noexcept;
public:
    static CookieStoreDeleteOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreDeleteOptions(const emlite::Val &val) noexcept;
    CookieStoreDeleteOptions() noexcept;
    [[nodiscard]] CookieStoreDeleteOptions clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `domain` attribute.
    [[nodiscard]] jsbind::String domain() const;
    /// Setter of the `domain` attribute.
    void domain(const jsbind::String& value);
    /// Getter of the `path` attribute.
    [[nodiscard]] jsbind::String path() const;
    /// Setter of the `path` attribute.
    void path(const jsbind::String& value);
    /// Getter of the `partitioned` attribute.
    [[nodiscard]] bool partitioned() const;
    /// Setter of the `partitioned` attribute.
    void partitioned(bool value);
};

} // namespace webbind