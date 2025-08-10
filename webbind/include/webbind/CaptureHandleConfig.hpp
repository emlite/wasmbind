#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CaptureHandleConfig
/// [`CaptureHandleConfig`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureHandleConfig)
class CaptureHandleConfig : public emlite::Val {
  explicit CaptureHandleConfig(Handle h) noexcept;
public:
    static CaptureHandleConfig take_ownership(Handle h) noexcept;
    explicit CaptureHandleConfig(const emlite::Val &val) noexcept;
    CaptureHandleConfig() noexcept;
    [[nodiscard]] CaptureHandleConfig clone() const noexcept;
    [[nodiscard]] bool exposeOrigin() const;
    void exposeOrigin(bool value);
    [[nodiscard]] jsbind::String handle() const;
    void handle(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> permittedOrigins() const;
    void permittedOrigins(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind