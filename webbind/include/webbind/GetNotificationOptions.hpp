#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GetNotificationOptions
/// [`GetNotificationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GetNotificationOptions)
class GetNotificationOptions : public emlite::Val {
  explicit GetNotificationOptions(Handle h) noexcept;
public:
    static GetNotificationOptions take_ownership(Handle h) noexcept;
    explicit GetNotificationOptions(const emlite::Val &val) noexcept;
    GetNotificationOptions() noexcept;
    [[nodiscard]] GetNotificationOptions clone() const noexcept;
    [[nodiscard]] jsbind::String tag() const;
    void tag(const jsbind::String& value);
};

} // namespace webbind