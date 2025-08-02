#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLMediaElement.hpp"
#include "enums.hpp"

class VideoPlaybackQuality;
class PictureInPictureWindow;


/// The HTMLVideoElement class.
/// [`HTMLVideoElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement)
class HTMLVideoElement : public HTMLMediaElement {
    explicit HTMLVideoElement(Handle h) noexcept;

public:
    explicit HTMLVideoElement(const emlite::Val &val) noexcept;
    static HTMLVideoElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLVideoElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLVideoElement(..)` constructor, creating a new HTMLVideoElement instance
    HTMLVideoElement();
    /// Getter of the `width` attribute.
    /// [`HTMLVideoElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/width)
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLVideoElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/width)
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    /// [`HTMLVideoElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/height)
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLVideoElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/height)
    void height(unsigned long value);
    /// Getter of the `videoWidth` attribute.
    /// [`HTMLVideoElement.videoWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/videoWidth)
    [[nodiscard]] unsigned long videoWidth() const;
    /// Getter of the `videoHeight` attribute.
    /// [`HTMLVideoElement.videoHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/videoHeight)
    [[nodiscard]] unsigned long videoHeight() const;
    /// Getter of the `poster` attribute.
    /// [`HTMLVideoElement.poster`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/poster)
    [[nodiscard]] jsbind::String poster() const;
    /// Setter of the `poster` attribute.
    /// [`HTMLVideoElement.poster`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/poster)
    void poster(const jsbind::String& value);
    /// Getter of the `playsInline` attribute.
    /// [`HTMLVideoElement.playsInline`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/playsInline)
    [[nodiscard]] bool playsInline() const;
    /// Setter of the `playsInline` attribute.
    /// [`HTMLVideoElement.playsInline`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/playsInline)
    void playsInline(bool value);
    /// The getVideoPlaybackQuality method.
    /// [`HTMLVideoElement.getVideoPlaybackQuality`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/getVideoPlaybackQuality)
    VideoPlaybackQuality getVideoPlaybackQuality();
    /// The requestPictureInPicture method.
    /// [`HTMLVideoElement.requestPictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/requestPictureInPicture)
    jsbind::Promise<PictureInPictureWindow> requestPictureInPicture();
    /// Getter of the `onenterpictureinpicture` attribute.
    /// [`HTMLVideoElement.onenterpictureinpicture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/onenterpictureinpicture)
    [[nodiscard]] jsbind::Any onenterpictureinpicture() const;
    /// Setter of the `onenterpictureinpicture` attribute.
    /// [`HTMLVideoElement.onenterpictureinpicture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/onenterpictureinpicture)
    void onenterpictureinpicture(const jsbind::Any& value);
    /// Getter of the `onleavepictureinpicture` attribute.
    /// [`HTMLVideoElement.onleavepictureinpicture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/onleavepictureinpicture)
    [[nodiscard]] jsbind::Any onleavepictureinpicture() const;
    /// Setter of the `onleavepictureinpicture` attribute.
    /// [`HTMLVideoElement.onleavepictureinpicture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/onleavepictureinpicture)
    void onleavepictureinpicture(const jsbind::Any& value);
    /// Getter of the `disablePictureInPicture` attribute.
    /// [`HTMLVideoElement.disablePictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/disablePictureInPicture)
    [[nodiscard]] bool disablePictureInPicture() const;
    /// Setter of the `disablePictureInPicture` attribute.
    /// [`HTMLVideoElement.disablePictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/disablePictureInPicture)
    void disablePictureInPicture(bool value);
    /// The requestVideoFrameCallback method.
    /// [`HTMLVideoElement.requestVideoFrameCallback`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/requestVideoFrameCallback)
    unsigned long requestVideoFrameCallback(const jsbind::Function& callback);
    /// The cancelVideoFrameCallback method.
    /// [`HTMLVideoElement.cancelVideoFrameCallback`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement/cancelVideoFrameCallback)
    jsbind::Undefined cancelVideoFrameCallback(unsigned long handle);
};

