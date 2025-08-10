#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCSessionDescriptionInit.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface RTCSessionDescription
/// [`RTCSessionDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescription)
class RTCSessionDescription : public emlite::Val {
    explicit RTCSessionDescription(Handle h) noexcept;
public:
    explicit RTCSessionDescription(const emlite::Val &val) noexcept;
    static RTCSessionDescription take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSessionDescription clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCSessionDescription(..)` constructor, creating a new RTCSessionDescription instance
    RTCSessionDescription(const RTCSessionDescriptionInit& descriptionInitDict);
    /// [`RTCSessionDescription.type`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescription/type)
    /// [`RTCSessionDescription.type`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescription/type)
    [[nodiscard]] RTCSdpType type() const;
    /// [`RTCSessionDescription.sdp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescription/sdp)
    /// [`RTCSessionDescription.sdp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescription/sdp)
    [[nodiscard]] jsbind::String sdp() const;
    /// The toJSON method.
    /// [`RTCSessionDescription.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescription/toJSON)
    RTCSessionDescriptionInit toJSON();
};

} // namespace webbind