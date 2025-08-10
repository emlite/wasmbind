#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type StreamPipeOptions
/// [`StreamPipeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/StreamPipeOptions)
class StreamPipeOptions : public emlite::Val {
  explicit StreamPipeOptions(Handle h) noexcept;
public:
    static StreamPipeOptions take_ownership(Handle h) noexcept;
    explicit StreamPipeOptions(const emlite::Val &val) noexcept;
    StreamPipeOptions() noexcept;
    [[nodiscard]] StreamPipeOptions clone() const noexcept;
    [[nodiscard]] bool preventClose() const;
    void preventClose(bool value);
    [[nodiscard]] bool preventAbort() const;
    void preventAbort(bool value);
    [[nodiscard]] bool preventCancel() const;
    void preventCancel(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind