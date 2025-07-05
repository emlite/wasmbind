#include <webbind/RTCRtpScriptTransform.hpp>
#include <webbind/Worker.hpp>


RTCRtpScriptTransform RTCRtpScriptTransform::take_ownership(Handle h) noexcept {
        return RTCRtpScriptTransform(h);
    }
RTCRtpScriptTransform RTCRtpScriptTransform::clone() const noexcept { return *this; }
RTCRtpScriptTransform::RTCRtpScriptTransform(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpScriptTransform::RTCRtpScriptTransform(const emlite::Val &val) noexcept: emlite::Val(val) {}


RTCRtpScriptTransform::RTCRtpScriptTransform(const Worker& worker) : emlite::Val(emlite::Val::global("RTCRtpScriptTransform").new_(worker)) {}

RTCRtpScriptTransform::RTCRtpScriptTransform(const Worker& worker, const jsbind::Any& options) : emlite::Val(emlite::Val::global("RTCRtpScriptTransform").new_(worker, options)) {}

RTCRtpScriptTransform::RTCRtpScriptTransform(const Worker& worker, const jsbind::Any& options, const jsbind::Sequence<jsbind::Object>& transfer) : emlite::Val(emlite::Val::global("RTCRtpScriptTransform").new_(worker, options, transfer)) {}

