#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Window;


class DocumentPictureInPictureEvent : public Event {
    explicit DocumentPictureInPictureEvent(Handle h) noexcept;

public:
    explicit DocumentPictureInPictureEvent(const emlite::Val &val) noexcept;
    static DocumentPictureInPictureEvent take_ownership(Handle h) noexcept;

    DocumentPictureInPictureEvent clone() const noexcept;
    DocumentPictureInPictureEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    Window window() const;
};

