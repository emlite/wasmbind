#include <webbind/ByteLengthQueuingStrategy.hpp>


ByteLengthQueuingStrategy ByteLengthQueuingStrategy::take_ownership(Handle h) noexcept {
        return ByteLengthQueuingStrategy(h);
    }
ByteLengthQueuingStrategy ByteLengthQueuingStrategy::clone() const noexcept { return *this; }
ByteLengthQueuingStrategy::ByteLengthQueuingStrategy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ByteLengthQueuingStrategy::ByteLengthQueuingStrategy(const emlite::Val &val) noexcept: emlite::Val(val) {}


ByteLengthQueuingStrategy::ByteLengthQueuingStrategy(const jsbind::Any& init): emlite::Val(emlite::Val::global("ByteLengthQueuingStrategy").new_(init)) {}

double ByteLengthQueuingStrategy::highWaterMark() const {
    return emlite::Val::get("highWaterMark").as<double>();
}

jsbind::Function ByteLengthQueuingStrategy::size() const {
    return emlite::Val::get("size").as<jsbind::Function>();
}

