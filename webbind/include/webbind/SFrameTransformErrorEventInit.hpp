#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type SFrameTransformErrorEventInit
class SFrameTransformErrorEventInit : public EventInit {
  explicit SFrameTransformErrorEventInit(Handle h) noexcept;
public:
    static SFrameTransformErrorEventInit take_ownership(Handle h) noexcept;
    explicit SFrameTransformErrorEventInit(const emlite::Val &val) noexcept;
    SFrameTransformErrorEventInit() noexcept;
    [[nodiscard]] SFrameTransformErrorEventInit clone() const noexcept;
    /// Getter of the `errorType` attribute.
    [[nodiscard]] SFrameTransformErrorEventType errorType() const;
    /// Setter of the `errorType` attribute.
    void errorType(const SFrameTransformErrorEventType& value);
    /// Getter of the `frame` attribute.
    [[nodiscard]] jsbind::Any frame() const;
    /// Setter of the `frame` attribute.
    void frame(const jsbind::Any& value);
    /// Getter of the `keyID` attribute.
    [[nodiscard]] jsbind::Any keyID() const;
    /// Setter of the `keyID` attribute.
    void keyID(const jsbind::Any& value);
};

} // namespace webbind