#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class Window;
class DocumentPictureInPictureOptions;


class DocumentPictureInPictureOptions : public emlite::Val {
  explicit DocumentPictureInPictureOptions(Handle h) noexcept;
public:
    static DocumentPictureInPictureOptions take_ownership(Handle h) noexcept;
    explicit DocumentPictureInPictureOptions(const emlite::Val &val) noexcept;
    DocumentPictureInPictureOptions() noexcept;
    [[nodiscard]] DocumentPictureInPictureOptions clone() const noexcept;
    [[nodiscard]] long long width() const;
    void width(long long value);
    [[nodiscard]] long long height() const;
    void height(long long value);
    [[nodiscard]] bool disallowReturnToOpener() const;
    void disallowReturnToOpener(bool value);
    [[nodiscard]] bool preferInitialWindowPlacement() const;
    void preferInitialWindowPlacement(bool value);
};

/// The DocumentPictureInPicture class.
/// [`DocumentPictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture)
class DocumentPictureInPicture : public EventTarget {
    explicit DocumentPictureInPicture(Handle h) noexcept;

public:
    explicit DocumentPictureInPicture(const emlite::Val &val) noexcept;
    static DocumentPictureInPicture take_ownership(Handle h) noexcept;

    [[nodiscard]] DocumentPictureInPicture clone() const noexcept;
    /// The requestWindow method.
    /// [`DocumentPictureInPicture.requestWindow`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/requestWindow)
    jsbind::Promise<Window> requestWindow();
    /// The requestWindow method.
    /// [`DocumentPictureInPicture.requestWindow`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/requestWindow)
    jsbind::Promise<Window> requestWindow(const DocumentPictureInPictureOptions& options);
    /// Getter of the `window` attribute.
    /// [`DocumentPictureInPicture.window`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/window)
    [[nodiscard]] Window window() const;
    /// Getter of the `onenter` attribute.
    /// [`DocumentPictureInPicture.onenter`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/onenter)
    [[nodiscard]] jsbind::Any onenter() const;
    /// Setter of the `onenter` attribute.
    /// [`DocumentPictureInPicture.onenter`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture/onenter)
    void onenter(const jsbind::Any& value);
};

