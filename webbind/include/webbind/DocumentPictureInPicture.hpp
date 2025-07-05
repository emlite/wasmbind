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
    DocumentPictureInPictureOptions clone() const noexcept;
    long long width() const;
    void width(long long value);
    long long height() const;
    void height(long long value);
    bool disallowReturnToOpener() const;
    void disallowReturnToOpener(bool value);
    bool preferInitialWindowPlacement() const;
    void preferInitialWindowPlacement(bool value);
};

class DocumentPictureInPicture : public EventTarget {
    explicit DocumentPictureInPicture(Handle h) noexcept;

public:
    explicit DocumentPictureInPicture(const emlite::Val &val) noexcept;
    static DocumentPictureInPicture take_ownership(Handle h) noexcept;

    DocumentPictureInPicture clone() const noexcept;
    jsbind::Promise requestWindow();
    jsbind::Promise requestWindow(const DocumentPictureInPictureOptions& options);
    Window window() const;
    jsbind::Any onenter() const;
    void onenter(const jsbind::Any& value);
};

