#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StructuredSerializeOptions.hpp"

namespace webbind {

/// Dictionary type PortalActivateOptions
class PortalActivateOptions : public StructuredSerializeOptions {
  explicit PortalActivateOptions(Handle h) noexcept;
public:
    static PortalActivateOptions take_ownership(Handle h) noexcept;
    explicit PortalActivateOptions(const emlite::Val &val) noexcept;
    PortalActivateOptions() noexcept;
    [[nodiscard]] PortalActivateOptions clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
};

} // namespace webbind