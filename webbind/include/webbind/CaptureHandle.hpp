#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CaptureHandle
class CaptureHandle : public emlite::Val {
  explicit CaptureHandle(Handle h) noexcept;
public:
    static CaptureHandle take_ownership(Handle h) noexcept;
    explicit CaptureHandle(const emlite::Val &val) noexcept;
    CaptureHandle() noexcept;
    [[nodiscard]] CaptureHandle clone() const noexcept;
    /// Getter of the `origin` attribute.
    [[nodiscard]] jsbind::String origin() const;
    /// Setter of the `origin` attribute.
    void origin(const jsbind::String& value);
    /// Getter of the `handle` attribute.
    [[nodiscard]] jsbind::String handle() const;
    /// Setter of the `handle` attribute.
    void handle(const jsbind::String& value);
};

} // namespace webbind