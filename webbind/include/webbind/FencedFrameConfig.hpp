#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FencedFrameConfig class.
/// [`FencedFrameConfig`](https://developer.mozilla.org/en-US/docs/Web/API/FencedFrameConfig)
class FencedFrameConfig : public emlite::Val {
    explicit FencedFrameConfig(Handle h) noexcept;

public:
    explicit FencedFrameConfig(const emlite::Val &val) noexcept;
    static FencedFrameConfig take_ownership(Handle h) noexcept;

    [[nodiscard]] FencedFrameConfig clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FencedFrameConfig(..)` constructor, creating a new FencedFrameConfig instance
    FencedFrameConfig(const jsbind::String& url);
    /// The setSharedStorageContext method.
    /// [`FencedFrameConfig.setSharedStorageContext`](https://developer.mozilla.org/en-US/docs/Web/API/FencedFrameConfig/setSharedStorageContext)
    jsbind::Undefined setSharedStorageContext(const jsbind::String& contextString);
};

