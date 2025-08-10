#include <webbind/HandwritingStroke.hpp>
#include <webbind/HandwritingPoint.hpp>

namespace webbind {

HandwritingStroke HandwritingStroke::take_ownership(Handle h) noexcept {
        return HandwritingStroke(h);
    }
HandwritingStroke HandwritingStroke::clone() const noexcept { return *this; }
emlite::Val HandwritingStroke::instance() noexcept { return emlite::Val::global("HandwritingStroke"); }
HandwritingStroke::HandwritingStroke(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingStroke::HandwritingStroke(const emlite::Val &val) noexcept: emlite::Val(val) {}

HandwritingStroke::HandwritingStroke() : emlite::Val(emlite::Val::global("HandwritingStroke").new_()) {}

jsbind::Undefined HandwritingStroke::addPoint(const HandwritingPoint& point) {
    return emlite::Val::call("addPoint", point).as<jsbind::Undefined>();
}

jsbind::TypedArray<HandwritingPoint> HandwritingStroke::getPoints() {
    return emlite::Val::call("getPoints").as<jsbind::TypedArray<HandwritingPoint>>();
}

jsbind::Undefined HandwritingStroke::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}


} // namespace webbind