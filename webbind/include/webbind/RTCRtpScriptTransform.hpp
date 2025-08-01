#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Worker;


/// The RTCRtpScriptTransform class.
/// [`RTCRtpScriptTransform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransform)
class RTCRtpScriptTransform : public emlite::Val {
    explicit RTCRtpScriptTransform(Handle h) noexcept;

public:
    explicit RTCRtpScriptTransform(const emlite::Val &val) noexcept;
    static RTCRtpScriptTransform take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCRtpScriptTransform clone() const noexcept;
    /// The `new RTCRtpScriptTransform(..)` constructor, creating a new RTCRtpScriptTransform instance
    RTCRtpScriptTransform(const Worker& worker);
    /// The `new RTCRtpScriptTransform(..)` constructor, creating a new RTCRtpScriptTransform instance
    RTCRtpScriptTransform(const Worker& worker, const jsbind::Any& options);
    /// The `new RTCRtpScriptTransform(..)` constructor, creating a new RTCRtpScriptTransform instance
    RTCRtpScriptTransform(const Worker& worker, const jsbind::Any& options, const jsbind::TypedArray<jsbind::Object>& transfer);
};

