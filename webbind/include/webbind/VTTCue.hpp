#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "TextTrackCue.hpp"
#include "enums.hpp"

class VTTRegion;
class DocumentFragment;


class VTTCue : public TextTrackCue {
    explicit VTTCue(Handle h) noexcept;

public:
    explicit VTTCue(const emlite::Val &val) noexcept;
    static VTTCue take_ownership(Handle h) noexcept;

    VTTCue clone() const noexcept;
    VTTCue(double startTime, double endTime, const jsbind::DOMString& text);
    VTTRegion region() const;
    void region(const VTTRegion& value);
    DirectionSetting vertical() const;
    void vertical(const DirectionSetting& value);
    bool snapToLines() const;
    void snapToLines(bool value);
    jsbind::Any line() const;
    void line(const jsbind::Any& value);
    LineAlignSetting lineAlign() const;
    void lineAlign(const LineAlignSetting& value);
    jsbind::Any position() const;
    void position(const jsbind::Any& value);
    PositionAlignSetting positionAlign() const;
    void positionAlign(const PositionAlignSetting& value);
    double size() const;
    void size(double value);
    AlignSetting align() const;
    void align(const AlignSetting& value);
    jsbind::DOMString text() const;
    void text(const jsbind::DOMString& value);
    DocumentFragment getCueAsHTML();
};

