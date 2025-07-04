#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MediaSourceHandle : public emlite::Val {
    explicit MediaSourceHandle(Handle h) noexcept;

public:
    explicit MediaSourceHandle(const emlite::Val &val) noexcept;
    static MediaSourceHandle take_ownership(Handle h) noexcept;

    MediaSourceHandle clone() const noexcept;
};

