#include <webbind/ByteLengthQueuingStrategy.hpp>
#include <webbind/QueuingStrategyInit.hpp>

namespace webbind {

ByteLengthQueuingStrategy ByteLengthQueuingStrategy::take_ownership(Handle h) noexcept {
        return ByteLengthQueuingStrategy(h);
    }
ByteLengthQueuingStrategy ByteLengthQueuingStrategy::clone() const noexcept { return *this; }
emlite::Val ByteLengthQueuingStrategy::instance() noexcept { return emlite::Val::global("ByteLengthQueuingStrategy"); }
ByteLengthQueuingStrategy::ByteLengthQueuingStrategy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ByteLengthQueuingStrategy::ByteLengthQueuingStrategy(const emlite::Val &val) noexcept: emlite::Val(val) {}

ByteLengthQueuingStrategy::ByteLengthQueuingStrategy(const QueuingStrategyInit& init) : emlite::Val(emlite::Val::global("ByteLengthQueuingStrategy").new_(init)) {}

double ByteLengthQueuingStrategy::highWaterMark() const {
    return emlite::Val::get("highWaterMark").as<double>();
}

jsbind::Function ByteLengthQueuingStrategy::size() const {
    return emlite::Val::get("size").as<jsbind::Function>();
}


} // namespace webbind