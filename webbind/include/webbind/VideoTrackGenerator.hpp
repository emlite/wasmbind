#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WritableStream;
class MediaStreamTrack;


class VideoTrackGenerator : public emlite::Val {
    explicit VideoTrackGenerator(Handle h) noexcept;

public:
    explicit VideoTrackGenerator(const emlite::Val &val) noexcept;
    static VideoTrackGenerator take_ownership(Handle h) noexcept;

    VideoTrackGenerator clone() const noexcept;
    VideoTrackGenerator();
    WritableStream writable() const;
    bool muted() const;
    void muted(bool value);
    MediaStreamTrack track() const;
};

