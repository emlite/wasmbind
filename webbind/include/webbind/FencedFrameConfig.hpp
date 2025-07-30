#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FencedFrameConfig : public emlite::Val {
    explicit FencedFrameConfig(Handle h) noexcept;

public:
    explicit FencedFrameConfig(const emlite::Val &val) noexcept;
    static FencedFrameConfig take_ownership(Handle h) noexcept;

    FencedFrameConfig clone() const noexcept;
    FencedFrameConfig(const jsbind::String& url);
    jsbind::Undefined setSharedStorageContext(const jsbind::String& contextString);
};

