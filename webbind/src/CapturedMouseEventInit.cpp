#include "webbind/CapturedMouseEventInit.hpp"

using emlite::Val;
namespace webbind {

CapturedMouseEventInit::CapturedMouseEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
CapturedMouseEventInit CapturedMouseEventInit::take_ownership(Handle h) noexcept {
        return CapturedMouseEventInit(h);
    }
CapturedMouseEventInit::CapturedMouseEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
CapturedMouseEventInit::CapturedMouseEventInit() noexcept: EventInit(emlite::Val::object()) {}
CapturedMouseEventInit CapturedMouseEventInit::clone() const noexcept { return *this; }

long CapturedMouseEventInit::surfaceX() const {
    return emlite::Val::get("surfaceX").as<long>();
}

void CapturedMouseEventInit::surfaceX(long value) {
    emlite::Val::set("surfaceX", value);
}

long CapturedMouseEventInit::surfaceY() const {
    return emlite::Val::get("surfaceY").as<long>();
}

void CapturedMouseEventInit::surfaceY(long value) {
    emlite::Val::set("surfaceY", value);
}


} // namespace webbind