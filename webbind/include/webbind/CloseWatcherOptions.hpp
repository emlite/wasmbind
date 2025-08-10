#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type CloseWatcherOptions
/// [`CloseWatcherOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcherOptions)
class CloseWatcherOptions : public emlite::Val {
  explicit CloseWatcherOptions(Handle h) noexcept;
public:
    static CloseWatcherOptions take_ownership(Handle h) noexcept;
    explicit CloseWatcherOptions(const emlite::Val &val) noexcept;
    CloseWatcherOptions() noexcept;
    [[nodiscard]] CloseWatcherOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind