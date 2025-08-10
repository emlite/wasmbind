#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RegistrationOptions
class RegistrationOptions : public emlite::Val {
  explicit RegistrationOptions(Handle h) noexcept;
public:
    static RegistrationOptions take_ownership(Handle h) noexcept;
    explicit RegistrationOptions(const emlite::Val &val) noexcept;
    RegistrationOptions() noexcept;
    [[nodiscard]] RegistrationOptions clone() const noexcept;
    /// Getter of the `scope` attribute.
    [[nodiscard]] jsbind::String scope() const;
    /// Setter of the `scope` attribute.
    void scope(const jsbind::String& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] WorkerType type() const;
    /// Setter of the `type` attribute.
    void type(const WorkerType& value);
    /// Getter of the `updateViaCache` attribute.
    [[nodiscard]] ServiceWorkerUpdateViaCache updateViaCache() const;
    /// Setter of the `updateViaCache` attribute.
    void updateViaCache(const ServiceWorkerUpdateViaCache& value);
};

} // namespace webbind