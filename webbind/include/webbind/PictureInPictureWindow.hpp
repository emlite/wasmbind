#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class PictureInPictureWindow : public EventTarget {
    explicit PictureInPictureWindow(Handle h) noexcept;

public:
    explicit PictureInPictureWindow(const emlite::Val &val) noexcept;
    static PictureInPictureWindow take_ownership(Handle h) noexcept;

    PictureInPictureWindow clone() const noexcept;
    long width() const;
    long height() const;
    jsbind::Any onresize() const;
    void onresize(const jsbind::Any& value);
};

