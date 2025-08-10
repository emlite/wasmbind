#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GPUAdapterInfo
/// [`GPUAdapterInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo)
class GPUAdapterInfo : public emlite::Val {
    explicit GPUAdapterInfo(Handle h) noexcept;
public:
    explicit GPUAdapterInfo(const emlite::Val &val) noexcept;
    static GPUAdapterInfo take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUAdapterInfo clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `vendor` attribute.
    /// [`GPUAdapterInfo.vendor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/vendor)
    [[nodiscard]] jsbind::String vendor() const;
    /// Getter of the `architecture` attribute.
    /// [`GPUAdapterInfo.architecture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/architecture)
    [[nodiscard]] jsbind::String architecture() const;
    /// Getter of the `device` attribute.
    /// [`GPUAdapterInfo.device`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/device)
    [[nodiscard]] jsbind::String device() const;
    /// Getter of the `description` attribute.
    /// [`GPUAdapterInfo.description`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/description)
    [[nodiscard]] jsbind::String description() const;
    /// Getter of the `subgroupMinSize` attribute.
    /// [`GPUAdapterInfo.subgroupMinSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/subgroupMinSize)
    [[nodiscard]] unsigned long subgroupMinSize() const;
    /// Getter of the `subgroupMaxSize` attribute.
    /// [`GPUAdapterInfo.subgroupMaxSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/subgroupMaxSize)
    [[nodiscard]] unsigned long subgroupMaxSize() const;
    /// Getter of the `isFallbackAdapter` attribute.
    /// [`GPUAdapterInfo.isFallbackAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/isFallbackAdapter)
    [[nodiscard]] bool isFallbackAdapter() const;
};

} // namespace webbind