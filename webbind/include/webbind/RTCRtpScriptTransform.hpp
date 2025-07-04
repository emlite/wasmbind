#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Worker;


class RTCRtpScriptTransform : public emlite::Val {
    explicit RTCRtpScriptTransform(Handle h) noexcept;

public:
    explicit RTCRtpScriptTransform(const emlite::Val &val) noexcept;
    static RTCRtpScriptTransform take_ownership(Handle h) noexcept;

    RTCRtpScriptTransform clone() const noexcept;
    RTCRtpScriptTransform(const Worker& worker, const jsbind::Any& options, const jsbind::Sequence<jsbind::Object>& transfer);
};

