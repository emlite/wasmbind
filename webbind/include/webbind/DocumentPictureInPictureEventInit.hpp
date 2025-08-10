#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Window;

/// Dictionary type DocumentPictureInPictureEventInit
class DocumentPictureInPictureEventInit : public EventInit {
  explicit DocumentPictureInPictureEventInit(Handle h) noexcept;
public:
    static DocumentPictureInPictureEventInit take_ownership(Handle h) noexcept;
    explicit DocumentPictureInPictureEventInit(const emlite::Val &val) noexcept;
    DocumentPictureInPictureEventInit() noexcept;
    [[nodiscard]] DocumentPictureInPictureEventInit clone() const noexcept;
    /// Getter of the `window` attribute.
    [[nodiscard]] Window window() const;
    /// Setter of the `window` attribute.
    void window(const Window& value);
};

} // namespace webbind