#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "FontFaceSetLoadEventInit.hpp"

namespace webbind {

class FontFace;

/// Interface FontFaceSetLoadEvent
/// [`FontFaceSetLoadEvent`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadEvent)
class FontFaceSetLoadEvent : public Event {
    explicit FontFaceSetLoadEvent(Handle h) noexcept;
public:
    explicit FontFaceSetLoadEvent(const emlite::Val &val) noexcept;
    static FontFaceSetLoadEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFaceSetLoadEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FontFaceSetLoadEvent(..)` constructor, creating a new FontFaceSetLoadEvent instance
    FontFaceSetLoadEvent(const jsbind::String& type);
    /// The `new FontFaceSetLoadEvent(..)` constructor, creating a new FontFaceSetLoadEvent instance
    FontFaceSetLoadEvent(const jsbind::String& type, const FontFaceSetLoadEventInit& eventInitDict);
    /// Getter of the `fontfaces` attribute.
    /// [`FontFaceSetLoadEvent.fontfaces`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadEvent/fontfaces)
    [[nodiscard]] jsbind::TypedArray<FontFace> fontfaces() const;
};

} // namespace webbind