#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RegistrationOptions
/// [`RegistrationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RegistrationOptions)
class RegistrationOptions : public emlite::Val {
  explicit RegistrationOptions(Handle h) noexcept;
public:
    static RegistrationOptions take_ownership(Handle h) noexcept;
    explicit RegistrationOptions(const emlite::Val &val) noexcept;
    RegistrationOptions() noexcept;
    [[nodiscard]] RegistrationOptions clone() const noexcept;
    [[nodiscard]] jsbind::String scope() const;
    void scope(const jsbind::String& value);
    [[nodiscard]] WorkerType type() const;
    void type(const WorkerType& value);
    [[nodiscard]] ServiceWorkerUpdateViaCache updateViaCache() const;
    void updateViaCache(const ServiceWorkerUpdateViaCache& value);
};

} // namespace webbind