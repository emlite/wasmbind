#include "webbind/QueuingStrategy.hpp"

using emlite::Val;
namespace webbind {

QueuingStrategy::QueuingStrategy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
QueuingStrategy QueuingStrategy::take_ownership(Handle h) noexcept {
        return QueuingStrategy(h);
    }
QueuingStrategy::QueuingStrategy(const emlite::Val &val) noexcept: emlite::Val(val) {}
QueuingStrategy::QueuingStrategy() noexcept: emlite::Val(emlite::Val::object()) {}
QueuingStrategy QueuingStrategy::clone() const noexcept { return *this; }

double QueuingStrategy::highWaterMark() const {
    return emlite::Val::get("highWaterMark").as<double>();
}

void QueuingStrategy::highWaterMark(double value) {
    emlite::Val::set("highWaterMark", value);
}

jsbind::Function QueuingStrategy::size() const {
    return emlite::Val::get("size").as<jsbind::Function>();
}

void QueuingStrategy::size(const jsbind::Function& value) {
    emlite::Val::set("size", value);
}


} // namespace webbind