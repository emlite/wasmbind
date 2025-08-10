#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RTCIceCandidate;

/// Interface RTCIceCandidatePair
/// [`RTCIceCandidatePair`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidatePair)
class RTCIceCandidatePair : public emlite::Val {
    explicit RTCIceCandidatePair(Handle h) noexcept;
public:
    explicit RTCIceCandidatePair(const emlite::Val &val) noexcept;
    static RTCIceCandidatePair take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceCandidatePair clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `local` attribute.
    /// [`RTCIceCandidatePair.local`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidatePair/local)
    [[nodiscard]] RTCIceCandidate local() const;
    /// Getter of the `remote` attribute.
    /// [`RTCIceCandidatePair.remote`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidatePair/remote)
    [[nodiscard]] RTCIceCandidate remote() const;
};

} // namespace webbind