#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieStoreGetOptions
/// [`CookieStoreGetOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStoreGetOptions)
class CookieStoreGetOptions : public emlite::Val {
  explicit CookieStoreGetOptions(Handle h) noexcept;
public:
    static CookieStoreGetOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreGetOptions(const emlite::Val &val) noexcept;
    CookieStoreGetOptions() noexcept;
    [[nodiscard]] CookieStoreGetOptions clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

} // namespace webbind