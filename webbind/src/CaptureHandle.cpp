#include <webbind/CaptureHandle.hpp>

using emlite::Val;
namespace webbind {

CaptureHandle::CaptureHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CaptureHandle CaptureHandle::take_ownership(Handle h) noexcept {
        return CaptureHandle(h);
    }
CaptureHandle::CaptureHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}
CaptureHandle::CaptureHandle() noexcept: emlite::Val(emlite::Val::object()) {}
CaptureHandle CaptureHandle::clone() const noexcept { return *this; }

jsbind::String CaptureHandle::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

void CaptureHandle::origin(const jsbind::String& value) {
    emlite::Val::set("origin", value);
}

jsbind::String CaptureHandle::handle() const {
    return emlite::Val::get("handle").as<jsbind::String>();
}

void CaptureHandle::handle(const jsbind::String& value) {
    emlite::Val::set("handle", value);
}


} // namespace webbind