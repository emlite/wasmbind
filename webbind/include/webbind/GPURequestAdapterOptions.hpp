#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPURequestAdapterOptions
/// [`GPURequestAdapterOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GPURequestAdapterOptions)
class GPURequestAdapterOptions : public emlite::Val {
  explicit GPURequestAdapterOptions(Handle h) noexcept;
public:
    static GPURequestAdapterOptions take_ownership(Handle h) noexcept;
    explicit GPURequestAdapterOptions(const emlite::Val &val) noexcept;
    GPURequestAdapterOptions() noexcept;
    [[nodiscard]] GPURequestAdapterOptions clone() const noexcept;
    [[nodiscard]] jsbind::String featureLevel() const;
    void featureLevel(const jsbind::String& value);
    [[nodiscard]] GPUPowerPreference powerPreference() const;
    void powerPreference(const GPUPowerPreference& value);
    [[nodiscard]] bool forceFallbackAdapter() const;
    void forceFallbackAdapter(bool value);
    [[nodiscard]] bool xrCompatible() const;
    void xrCompatible(bool value);
};

} // namespace webbind