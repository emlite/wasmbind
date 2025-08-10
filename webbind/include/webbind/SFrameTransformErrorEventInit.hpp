#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type SFrameTransformErrorEventInit
/// [`SFrameTransformErrorEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEventInit)
class SFrameTransformErrorEventInit : public EventInit {
  explicit SFrameTransformErrorEventInit(Handle h) noexcept;
public:
    static SFrameTransformErrorEventInit take_ownership(Handle h) noexcept;
    explicit SFrameTransformErrorEventInit(const emlite::Val &val) noexcept;
    SFrameTransformErrorEventInit() noexcept;
    [[nodiscard]] SFrameTransformErrorEventInit clone() const noexcept;
    [[nodiscard]] SFrameTransformErrorEventType errorType() const;
    void errorType(const SFrameTransformErrorEventType& value);
    [[nodiscard]] jsbind::Any frame() const;
    void frame(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any keyID() const;
    void keyID(const jsbind::Any& value);
};

} // namespace webbind