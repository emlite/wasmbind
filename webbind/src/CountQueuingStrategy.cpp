#include <webbind/CountQueuingStrategy.hpp>


CountQueuingStrategy CountQueuingStrategy::take_ownership(Handle h) noexcept {
        return CountQueuingStrategy(h);
    }
CountQueuingStrategy CountQueuingStrategy::clone() const noexcept { return *this; }
emlite::Val CountQueuingStrategy::instance() noexcept { return emlite::Val::global("CountQueuingStrategy"); }
CountQueuingStrategy::CountQueuingStrategy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CountQueuingStrategy::CountQueuingStrategy(const emlite::Val &val) noexcept: emlite::Val(val) {}


CountQueuingStrategy::CountQueuingStrategy(const jsbind::Any& init) : emlite::Val(emlite::Val::global("CountQueuingStrategy").new_(init)) {}

double CountQueuingStrategy::highWaterMark() const {
    return emlite::Val::get("highWaterMark").as<double>();
}

jsbind::Function CountQueuingStrategy::size() const {
    return emlite::Val::get("size").as<jsbind::Function>();
}

