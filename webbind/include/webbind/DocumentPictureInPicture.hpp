#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class Window;
class DocumentPictureInPictureOptions;

/// Interface DocumentPictureInPicture
/// [`DocumentPictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture)
class DocumentPictureInPicture : public EventTarget {
    explicit DocumentPictureInPicture(Handle h) noexcept;
public:
    explicit DocumentPictureInPicture(const emlite::Val &val) noexcept;
    static DocumentPictureInPicture take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentPictureInPicture clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The requestWindow method.
    /// [`DocumentPictureInPicture.requestWindow`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/requestWindow)
    jsbind::Promise<Window> requestWindow();
    /// The requestWindow method.
    /// [`DocumentPictureInPicture.requestWindow`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/requestWindow)
    jsbind::Promise<Window> requestWindow(const DocumentPictureInPictureOptions& options);
    /// [`DocumentPictureInPicture.window`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/window)
    /// [`DocumentPictureInPicture.window`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/window)
    [[nodiscard]] Window window() const;
    /// [`DocumentPictureInPicture.onenter`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/onenter)
    /// [`DocumentPictureInPicture.onenter`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/onenter)
    [[nodiscard]] jsbind::Any onenter() const;
    /// Setter of the `onenter` attribute.
    /// [`DocumentPictureInPicture.onenter`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/onenter)
    void onenter(const jsbind::Any& value);
};

} // namespace webbind