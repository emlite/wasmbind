#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class FontFace;


/// The FontFaceSetLoadEvent class.
/// [`FontFaceSetLoadEvent`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadEvent)
class FontFaceSetLoadEvent : public Event {
    explicit FontFaceSetLoadEvent(Handle h) noexcept;

public:
    explicit FontFaceSetLoadEvent(const emlite::Val &val) noexcept;
    static FontFaceSetLoadEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] FontFaceSetLoadEvent clone() const noexcept;
    /// The `new FontFaceSetLoadEvent(..)` constructor, creating a new FontFaceSetLoadEvent instance
    FontFaceSetLoadEvent(const jsbind::String& type);
    /// The `new FontFaceSetLoadEvent(..)` constructor, creating a new FontFaceSetLoadEvent instance
    FontFaceSetLoadEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `fontfaces` attribute.
    /// [`FontFaceSetLoadEvent.fontfaces`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadEvent/fontfaces)
    [[nodiscard]] jsbind::TypedArray<FontFace> fontfaces() const;
};

