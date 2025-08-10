#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class PictureInPictureWindow;

/// Dictionary type PictureInPictureEventInit
/// [`PictureInPictureEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureEventInit)
class PictureInPictureEventInit : public EventInit {
  explicit PictureInPictureEventInit(Handle h) noexcept;
public:
    static PictureInPictureEventInit take_ownership(Handle h) noexcept;
    explicit PictureInPictureEventInit(const emlite::Val &val) noexcept;
    PictureInPictureEventInit() noexcept;
    [[nodiscard]] PictureInPictureEventInit clone() const noexcept;
    [[nodiscard]] PictureInPictureWindow pictureInPictureWindow() const;
    void pictureInPictureWindow(const PictureInPictureWindow& value);
};

} // namespace webbind