#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CaptureHandleConfig
class CaptureHandleConfig : public emlite::Val {
  explicit CaptureHandleConfig(Handle h) noexcept;
public:
    static CaptureHandleConfig take_ownership(Handle h) noexcept;
    explicit CaptureHandleConfig(const emlite::Val &val) noexcept;
    CaptureHandleConfig() noexcept;
    [[nodiscard]] CaptureHandleConfig clone() const noexcept;
    /// Getter of the `exposeOrigin` attribute.
    [[nodiscard]] bool exposeOrigin() const;
    /// Setter of the `exposeOrigin` attribute.
    void exposeOrigin(bool value);
    /// Getter of the `handle` attribute.
    [[nodiscard]] jsbind::String handle() const;
    /// Setter of the `handle` attribute.
    void handle(const jsbind::String& value);
    /// Getter of the `permittedOrigins` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> permittedOrigins() const;
    /// Setter of the `permittedOrigins` attribute.
    void permittedOrigins(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind