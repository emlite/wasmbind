#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieStoreDeleteOptions
/// [`CookieStoreDeleteOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStoreDeleteOptions)
class CookieStoreDeleteOptions : public emlite::Val {
  explicit CookieStoreDeleteOptions(Handle h) noexcept;
public:
    static CookieStoreDeleteOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreDeleteOptions(const emlite::Val &val) noexcept;
    CookieStoreDeleteOptions() noexcept;
    [[nodiscard]] CookieStoreDeleteOptions clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String domain() const;
    void domain(const jsbind::String& value);
    [[nodiscard]] jsbind::String path() const;
    void path(const jsbind::String& value);
    [[nodiscard]] bool partitioned() const;
    void partitioned(bool value);
};

} // namespace webbind