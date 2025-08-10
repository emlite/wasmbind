#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpContributingSource.hpp"

namespace webbind {

/// Dictionary type RTCRtpSynchronizationSource
class RTCRtpSynchronizationSource : public RTCRtpContributingSource {
  explicit RTCRtpSynchronizationSource(Handle h) noexcept;
public:
    static RTCRtpSynchronizationSource take_ownership(Handle h) noexcept;
    explicit RTCRtpSynchronizationSource(const emlite::Val &val) noexcept;
    RTCRtpSynchronizationSource() noexcept;
    [[nodiscard]] RTCRtpSynchronizationSource clone() const noexcept;
};

} // namespace webbind