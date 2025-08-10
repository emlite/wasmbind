#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkerOptions.hpp"

namespace webbind {

/// Dictionary type SharedWorkerOptions
/// [`SharedWorkerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorkerOptions)
class SharedWorkerOptions : public WorkerOptions {
  explicit SharedWorkerOptions(Handle h) noexcept;
public:
    static SharedWorkerOptions take_ownership(Handle h) noexcept;
    explicit SharedWorkerOptions(const emlite::Val &val) noexcept;
    SharedWorkerOptions() noexcept;
    [[nodiscard]] SharedWorkerOptions clone() const noexcept;
    [[nodiscard]] SameSiteCookiesType sameSiteCookies() const;
    void sameSiteCookies(const SameSiteCookiesType& value);
};

} // namespace webbind