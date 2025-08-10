#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CaptureHandle
/// [`CaptureHandle`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureHandle)
class CaptureHandle : public emlite::Val {
  explicit CaptureHandle(Handle h) noexcept;
public:
    static CaptureHandle take_ownership(Handle h) noexcept;
    explicit CaptureHandle(const emlite::Val &val) noexcept;
    CaptureHandle() noexcept;
    [[nodiscard]] CaptureHandle clone() const noexcept;
    [[nodiscard]] jsbind::String origin() const;
    void origin(const jsbind::String& value);
    [[nodiscard]] jsbind::String handle() const;
    void handle(const jsbind::String& value);
};

} // namespace webbind