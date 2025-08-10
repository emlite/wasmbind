#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class PictureInPictureWindow;

/// Dictionary type PictureInPictureEventInit
class PictureInPictureEventInit : public EventInit {
  explicit PictureInPictureEventInit(Handle h) noexcept;
public:
    static PictureInPictureEventInit take_ownership(Handle h) noexcept;
    explicit PictureInPictureEventInit(const emlite::Val &val) noexcept;
    PictureInPictureEventInit() noexcept;
    [[nodiscard]] PictureInPictureEventInit clone() const noexcept;
    /// Getter of the `pictureInPictureWindow` attribute.
    [[nodiscard]] PictureInPictureWindow pictureInPictureWindow() const;
    /// Setter of the `pictureInPictureWindow` attribute.
    void pictureInPictureWindow(const PictureInPictureWindow& value);
};

} // namespace webbind