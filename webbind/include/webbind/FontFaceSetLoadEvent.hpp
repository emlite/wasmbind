#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class FontFace;


class FontFaceSetLoadEvent : public Event {
    explicit FontFaceSetLoadEvent(Handle h) noexcept;

public:
    explicit FontFaceSetLoadEvent(const emlite::Val &val) noexcept;
    static FontFaceSetLoadEvent take_ownership(Handle h) noexcept;

    FontFaceSetLoadEvent clone() const noexcept;
    FontFaceSetLoadEvent(const jsbind::String& type);
    FontFaceSetLoadEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::TypedArray<FontFace> fontfaces() const;
};

