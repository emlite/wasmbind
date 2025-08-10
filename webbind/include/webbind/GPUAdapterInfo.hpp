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
    /// [`GPUAdapterInfo.vendor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/vendor)
    /// [`GPUAdapterInfo.vendor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/vendor)
    [[nodiscard]] jsbind::String vendor() const;
    /// [`GPUAdapterInfo.architecture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/architecture)
    /// [`GPUAdapterInfo.architecture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/architecture)
    [[nodiscard]] jsbind::String architecture() const;
    /// [`GPUAdapterInfo.device`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/device)
    /// [`GPUAdapterInfo.device`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/device)
    [[nodiscard]] jsbind::String device() const;
    /// [`GPUAdapterInfo.description`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/description)
    /// [`GPUAdapterInfo.description`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/description)
    [[nodiscard]] jsbind::String description() const;
    /// [`GPUAdapterInfo.subgroupMinSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/subgroupMinSize)
    /// [`GPUAdapterInfo.subgroupMinSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/subgroupMinSize)
    [[nodiscard]] unsigned long subgroupMinSize() const;
    /// [`GPUAdapterInfo.subgroupMaxSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/subgroupMaxSize)
    /// [`GPUAdapterInfo.subgroupMaxSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/subgroupMaxSize)
    [[nodiscard]] unsigned long subgroupMaxSize() const;
    /// [`GPUAdapterInfo.isFallbackAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/isFallbackAdapter)
    /// [`GPUAdapterInfo.isFallbackAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo/isFallbackAdapter)
    [[nodiscard]] bool isFallbackAdapter() const;
};

} // namespace webbind