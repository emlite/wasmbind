#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StructuredSerializeOptions.hpp"

namespace webbind {

/// Dictionary type PortalActivateOptions
/// [`PortalActivateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateOptions)
class PortalActivateOptions : public StructuredSerializeOptions {
  explicit PortalActivateOptions(Handle h) noexcept;
public:
    static PortalActivateOptions take_ownership(Handle h) noexcept;
    explicit PortalActivateOptions(const emlite::Val &val) noexcept;
    PortalActivateOptions() noexcept;
    [[nodiscard]] PortalActivateOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

} // namespace webbind