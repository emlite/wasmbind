#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkerOptions.hpp"

namespace webbind {

/// Dictionary type SharedWorkerOptions
class SharedWorkerOptions : public WorkerOptions {
  explicit SharedWorkerOptions(Handle h) noexcept;
public:
    static SharedWorkerOptions take_ownership(Handle h) noexcept;
    explicit SharedWorkerOptions(const emlite::Val &val) noexcept;
    SharedWorkerOptions() noexcept;
    [[nodiscard]] SharedWorkerOptions clone() const noexcept;
    /// Getter of the `sameSiteCookies` attribute.
    [[nodiscard]] SameSiteCookiesType sameSiteCookies() const;
    /// Setter of the `sameSiteCookies` attribute.
    void sameSiteCookies(const SameSiteCookiesType& value);
};

} // namespace webbind