#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLMediaElement.hpp"
#include "enums.hpp"

class VideoPlaybackQuality;
class PictureInPictureWindow;


class HTMLVideoElement : public HTMLMediaElement {
    explicit HTMLVideoElement(Handle h) noexcept;

public:
    explicit HTMLVideoElement(const emlite::Val &val) noexcept;
    static HTMLVideoElement take_ownership(Handle h) noexcept;

    HTMLVideoElement clone() const noexcept;
    HTMLVideoElement();
    unsigned long width() const;
    void width(unsigned long value);
    unsigned long height() const;
    void height(unsigned long value);
    unsigned long videoWidth() const;
    unsigned long videoHeight() const;
    jsbind::USVString poster() const;
    void poster(const jsbind::USVString& value);
    bool playsInline() const;
    void playsInline(bool value);
    VideoPlaybackQuality getVideoPlaybackQuality();
    jsbind::Promise requestPictureInPicture();
    jsbind::Any onenterpictureinpicture() const;
    void onenterpictureinpicture(const jsbind::Any& value);
    jsbind::Any onleavepictureinpicture() const;
    void onleavepictureinpicture(const jsbind::Any& value);
    bool disablePictureInPicture() const;
    void disablePictureInPicture(bool value);
    unsigned long requestVideoFrameCallback(const jsbind::Function& callback);
    jsbind::Undefined cancelVideoFrameCallback(unsigned long handle);
};

