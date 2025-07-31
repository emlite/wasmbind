#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The MediaSourceHandle class.
/// [`MediaSourceHandle`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSourceHandle)
class MediaSourceHandle : public emlite::Val {
    explicit MediaSourceHandle(Handle h) noexcept;

public:
    explicit MediaSourceHandle(const emlite::Val &val) noexcept;
    static MediaSourceHandle take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaSourceHandle clone() const noexcept;
};

