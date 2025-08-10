#include <webbind/RTCRtpContributingSource.hpp>

using emlite::Val;
namespace webbind {

RTCRtpContributingSource::RTCRtpContributingSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpContributingSource RTCRtpContributingSource::take_ownership(Handle h) noexcept {
        return RTCRtpContributingSource(h);
    }
RTCRtpContributingSource::RTCRtpContributingSource(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpContributingSource::RTCRtpContributingSource() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpContributingSource RTCRtpContributingSource::clone() const noexcept { return *this; }

jsbind::Any RTCRtpContributingSource::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

void RTCRtpContributingSource::timestamp(const jsbind::Any& value) {
    emlite::Val::set("timestamp", value);
}

unsigned long RTCRtpContributingSource::source() const {
    return emlite::Val::get("source").as<unsigned long>();
}

void RTCRtpContributingSource::source(unsigned long value) {
    emlite::Val::set("source", value);
}

double RTCRtpContributingSource::audioLevel() const {
    return emlite::Val::get("audioLevel").as<double>();
}

void RTCRtpContributingSource::audioLevel(double value) {
    emlite::Val::set("audioLevel", value);
}

unsigned long RTCRtpContributingSource::rtpTimestamp() const {
    return emlite::Val::get("rtpTimestamp").as<unsigned long>();
}

void RTCRtpContributingSource::rtpTimestamp(unsigned long value) {
    emlite::Val::set("rtpTimestamp", value);
}


} // namespace webbind