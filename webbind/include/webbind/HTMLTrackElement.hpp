#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class TextTrack;

/// Interface HTMLTrackElement
/// [`HTMLTrackElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement)
class HTMLTrackElement : public HTMLElement {
    explicit HTMLTrackElement(Handle h) noexcept;
public:
    explicit HTMLTrackElement(const emlite::Val &val) noexcept;
    static HTMLTrackElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLTrackElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTrackElement(..)` constructor, creating a new HTMLTrackElement instance
    HTMLTrackElement();
    /// [`HTMLTrackElement.kind`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/kind)
    /// [`HTMLTrackElement.kind`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// Setter of the `kind` attribute.
    /// [`HTMLTrackElement.kind`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/kind)
    void kind(const jsbind::String& value);
    /// [`HTMLTrackElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/src)
    /// [`HTMLTrackElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLTrackElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/src)
    void src(const jsbind::String& value);
    /// [`HTMLTrackElement.srclang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/srclang)
    /// [`HTMLTrackElement.srclang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/srclang)
    [[nodiscard]] jsbind::String srclang() const;
    /// Setter of the `srclang` attribute.
    /// [`HTMLTrackElement.srclang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/srclang)
    void srclang(const jsbind::String& value);
    /// [`HTMLTrackElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/label)
    /// [`HTMLTrackElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`HTMLTrackElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/label)
    void label(const jsbind::String& value);
    /// [`HTMLTrackElement.default`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/default)
    /// [`HTMLTrackElement.default`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/default)
    [[nodiscard]] bool default_() const;
    /// Setter of the `default` attribute.
    /// [`HTMLTrackElement.default`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/default)
    void default_(bool value);
    /// [`HTMLTrackElement.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/readyState)
    /// [`HTMLTrackElement.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// [`HTMLTrackElement.track`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/track)
    /// [`HTMLTrackElement.track`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement/track)
    [[nodiscard]] TextTrack track() const;
};

} // namespace webbind