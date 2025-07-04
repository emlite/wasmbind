#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;


class MediaStreamTrackProcessor : public emlite::Val {
    explicit MediaStreamTrackProcessor(Handle h) noexcept;

public:
    explicit MediaStreamTrackProcessor(const emlite::Val &val) noexcept;
    static MediaStreamTrackProcessor take_ownership(Handle h) noexcept;

    MediaStreamTrackProcessor clone() const noexcept;
    MediaStreamTrackProcessor(const jsbind::Any& init);
    ReadableStream readable() const;
};

