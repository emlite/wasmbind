#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ImageTrack;


class ImageTrackList : public emlite::Val {
    explicit ImageTrackList(Handle h) noexcept;

public:
    explicit ImageTrackList(const emlite::Val &val) noexcept;
    static ImageTrackList take_ownership(Handle h) noexcept;

    ImageTrackList clone() const noexcept;
    jsbind::Promise ready() const;
    unsigned long length() const;
    long selectedIndex() const;
    ImageTrack selectedTrack() const;
};

