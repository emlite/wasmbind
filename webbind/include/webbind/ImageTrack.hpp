#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ImageTrack : public emlite::Val {
    explicit ImageTrack(Handle h) noexcept;

public:
    explicit ImageTrack(const emlite::Val &val) noexcept;
    static ImageTrack take_ownership(Handle h) noexcept;

    ImageTrack clone() const noexcept;
    bool animated() const;
    unsigned long frameCount() const;
    float repetitionCount() const;
    bool selected() const;
    void selected(bool value);
};

