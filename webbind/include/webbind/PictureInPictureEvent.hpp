#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class PictureInPictureWindow;


class PictureInPictureEvent : public Event {
    explicit PictureInPictureEvent(Handle h) noexcept;

public:
    explicit PictureInPictureEvent(const emlite::Val &val) noexcept;
    static PictureInPictureEvent take_ownership(Handle h) noexcept;

    PictureInPictureEvent clone() const noexcept;
    PictureInPictureEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    PictureInPictureWindow pictureInPictureWindow() const;
};

