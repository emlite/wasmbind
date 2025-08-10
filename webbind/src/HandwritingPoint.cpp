#include <webbind/HandwritingPoint.hpp>

using emlite::Val;
namespace webbind {

HandwritingPoint::HandwritingPoint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingPoint HandwritingPoint::take_ownership(Handle h) noexcept {
        return HandwritingPoint(h);
    }
HandwritingPoint::HandwritingPoint(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingPoint::HandwritingPoint() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingPoint HandwritingPoint::clone() const noexcept { return *this; }

double HandwritingPoint::x() const {
    return emlite::Val::get("x").as<double>();
}

void HandwritingPoint::x(double value) {
    emlite::Val::set("x", value);
}

double HandwritingPoint::y() const {
    return emlite::Val::get("y").as<double>();
}

void HandwritingPoint::y(double value) {
    emlite::Val::set("y", value);
}

jsbind::Any HandwritingPoint::t() const {
    return emlite::Val::get("t").as<jsbind::Any>();
}

void HandwritingPoint::t(const jsbind::Any& value) {
    emlite::Val::set("t", value);
}


} // namespace webbind