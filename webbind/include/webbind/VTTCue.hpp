#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "TextTrackCue.hpp"
#include "enums.hpp"

class VTTRegion;
class DocumentFragment;


/// The VTTCue class.
/// [`VTTCue`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue)
class VTTCue : public TextTrackCue {
    explicit VTTCue(Handle h) noexcept;

public:
    explicit VTTCue(const emlite::Val &val) noexcept;
    static VTTCue take_ownership(Handle h) noexcept;

    [[nodiscard]] VTTCue clone() const noexcept;
    /// The `new VTTCue(..)` constructor, creating a new VTTCue instance
    VTTCue(double startTime, double endTime, const jsbind::String& text);
    /// Getter of the `region` attribute.
    /// [`VTTCue.region`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/region)
    [[nodiscard]] VTTRegion region() const;
    /// Setter of the `region` attribute.
    /// [`VTTCue.region`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/region)
    void region(const VTTRegion& value);
    /// Getter of the `vertical` attribute.
    /// [`VTTCue.vertical`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/vertical)
    [[nodiscard]] DirectionSetting vertical() const;
    /// Setter of the `vertical` attribute.
    /// [`VTTCue.vertical`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/vertical)
    void vertical(const DirectionSetting& value);
    /// Getter of the `snapToLines` attribute.
    /// [`VTTCue.snapToLines`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/snapToLines)
    [[nodiscard]] bool snapToLines() const;
    /// Setter of the `snapToLines` attribute.
    /// [`VTTCue.snapToLines`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/snapToLines)
    void snapToLines(bool value);
    /// Getter of the `line` attribute.
    /// [`VTTCue.line`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/line)
    [[nodiscard]] jsbind::Any line() const;
    /// Setter of the `line` attribute.
    /// [`VTTCue.line`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/line)
    void line(const jsbind::Any& value);
    /// Getter of the `lineAlign` attribute.
    /// [`VTTCue.lineAlign`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/lineAlign)
    [[nodiscard]] LineAlignSetting lineAlign() const;
    /// Setter of the `lineAlign` attribute.
    /// [`VTTCue.lineAlign`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/lineAlign)
    void lineAlign(const LineAlignSetting& value);
    /// Getter of the `position` attribute.
    /// [`VTTCue.position`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/position)
    [[nodiscard]] jsbind::Any position() const;
    /// Setter of the `position` attribute.
    /// [`VTTCue.position`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/position)
    void position(const jsbind::Any& value);
    /// Getter of the `positionAlign` attribute.
    /// [`VTTCue.positionAlign`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/positionAlign)
    [[nodiscard]] PositionAlignSetting positionAlign() const;
    /// Setter of the `positionAlign` attribute.
    /// [`VTTCue.positionAlign`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/positionAlign)
    void positionAlign(const PositionAlignSetting& value);
    /// Getter of the `size` attribute.
    /// [`VTTCue.size`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/size)
    [[nodiscard]] double size() const;
    /// Setter of the `size` attribute.
    /// [`VTTCue.size`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/size)
    void size(double value);
    /// Getter of the `align` attribute.
    /// [`VTTCue.align`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/align)
    [[nodiscard]] AlignSetting align() const;
    /// Setter of the `align` attribute.
    /// [`VTTCue.align`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/align)
    void align(const AlignSetting& value);
    /// Getter of the `text` attribute.
    /// [`VTTCue.text`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`VTTCue.text`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/text)
    void text(const jsbind::String& value);
    /// The getCueAsHTML method.
    /// [`VTTCue.getCueAsHTML`](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue/getCueAsHTML)
    DocumentFragment getCueAsHTML();
};

