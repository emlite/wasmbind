#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type StreamPipeOptions
class StreamPipeOptions : public emlite::Val {
  explicit StreamPipeOptions(Handle h) noexcept;
public:
    static StreamPipeOptions take_ownership(Handle h) noexcept;
    explicit StreamPipeOptions(const emlite::Val &val) noexcept;
    StreamPipeOptions() noexcept;
    [[nodiscard]] StreamPipeOptions clone() const noexcept;
    /// Getter of the `preventClose` attribute.
    [[nodiscard]] bool preventClose() const;
    /// Setter of the `preventClose` attribute.
    void preventClose(bool value);
    /// Getter of the `preventAbort` attribute.
    [[nodiscard]] bool preventAbort() const;
    /// Setter of the `preventAbort` attribute.
    void preventAbort(bool value);
    /// Getter of the `preventCancel` attribute.
    [[nodiscard]] bool preventCancel() const;
    /// Setter of the `preventCancel` attribute.
    void preventCancel(bool value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind