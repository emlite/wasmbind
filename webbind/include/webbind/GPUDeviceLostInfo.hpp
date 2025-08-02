#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUDeviceLostInfo class.
/// [`GPUDeviceLostInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDeviceLostInfo)
class GPUDeviceLostInfo : public emlite::Val {
    explicit GPUDeviceLostInfo(Handle h) noexcept;

public:
    explicit GPUDeviceLostInfo(const emlite::Val &val) noexcept;
    static GPUDeviceLostInfo take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUDeviceLostInfo clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `reason` attribute.
    /// [`GPUDeviceLostInfo.reason`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDeviceLostInfo/reason)
    [[nodiscard]] GPUDeviceLostReason reason() const;
    /// Getter of the `message` attribute.
    /// [`GPUDeviceLostInfo.message`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDeviceLostInfo/message)
    [[nodiscard]] jsbind::String message() const;
};

