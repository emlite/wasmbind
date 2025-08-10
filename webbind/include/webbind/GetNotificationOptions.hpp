#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GetNotificationOptions
class GetNotificationOptions : public emlite::Val {
  explicit GetNotificationOptions(Handle h) noexcept;
public:
    static GetNotificationOptions take_ownership(Handle h) noexcept;
    explicit GetNotificationOptions(const emlite::Val &val) noexcept;
    GetNotificationOptions() noexcept;
    [[nodiscard]] GetNotificationOptions clone() const noexcept;
    /// Getter of the `tag` attribute.
    [[nodiscard]] jsbind::String tag() const;
    /// Setter of the `tag` attribute.
    void tag(const jsbind::String& value);
};

} // namespace webbind