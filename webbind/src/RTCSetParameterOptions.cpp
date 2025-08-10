#include <webbind/RTCSetParameterOptions.hpp>

using emlite::Val;
namespace webbind {

RTCSetParameterOptions::RTCSetParameterOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCSetParameterOptions RTCSetParameterOptions::take_ownership(Handle h) noexcept {
        return RTCSetParameterOptions(h);
    }
RTCSetParameterOptions::RTCSetParameterOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCSetParameterOptions::RTCSetParameterOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCSetParameterOptions RTCSetParameterOptions::clone() const noexcept { return *this; }


} // namespace webbind