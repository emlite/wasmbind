#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_clip_cull_distance class.
/// [`WEBGL_clip_cull_distance`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_clip_cull_distance)
class WEBGL_clip_cull_distance : public emlite::Val {
    explicit WEBGL_clip_cull_distance(Handle h) noexcept;

public:
    explicit WEBGL_clip_cull_distance(const emlite::Val &val) noexcept;
    static WEBGL_clip_cull_distance take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_clip_cull_distance clone() const noexcept;
};

