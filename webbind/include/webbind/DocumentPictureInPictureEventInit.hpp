#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Window;

/// Dictionary type DocumentPictureInPictureEventInit
/// [`DocumentPictureInPictureEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPictureEventInit)
class DocumentPictureInPictureEventInit : public EventInit {
  explicit DocumentPictureInPictureEventInit(Handle h) noexcept;
public:
    static DocumentPictureInPictureEventInit take_ownership(Handle h) noexcept;
    explicit DocumentPictureInPictureEventInit(const emlite::Val &val) noexcept;
    DocumentPictureInPictureEventInit() noexcept;
    [[nodiscard]] DocumentPictureInPictureEventInit clone() const noexcept;
    [[nodiscard]] Window window() const;
    void window(const Window& value);
};

} // namespace webbind