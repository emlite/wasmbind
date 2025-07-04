#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MediaStreamTrack.hpp"
#include "enums.hpp"

class CropTarget;
class BrowserCaptureMediaStreamTrack;
class RestrictionTarget;


class BrowserCaptureMediaStreamTrack : public MediaStreamTrack {
    explicit BrowserCaptureMediaStreamTrack(Handle h) noexcept;

public:
    explicit BrowserCaptureMediaStreamTrack(const emlite::Val &val) noexcept;
    static BrowserCaptureMediaStreamTrack take_ownership(Handle h) noexcept;

    BrowserCaptureMediaStreamTrack clone() const noexcept;
    jsbind::Promise cropTo(const CropTarget& cropTarget);
    BrowserCaptureMediaStreamTrack clone();
    jsbind::Promise restrictTo(const RestrictionTarget& RestrictionTarget);
};

