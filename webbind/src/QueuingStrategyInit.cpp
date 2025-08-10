#include "webbind/QueuingStrategyInit.hpp"

using emlite::Val;
namespace webbind {

QueuingStrategyInit::QueuingStrategyInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
QueuingStrategyInit QueuingStrategyInit::take_ownership(Handle h) noexcept {
        return QueuingStrategyInit(h);
    }
QueuingStrategyInit::QueuingStrategyInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
QueuingStrategyInit::QueuingStrategyInit() noexcept: emlite::Val(emlite::Val::object()) {}
QueuingStrategyInit QueuingStrategyInit::clone() const noexcept { return *this; }

double QueuingStrategyInit::highWaterMark() const {
    return emlite::Val::get("highWaterMark").as<double>();
}

void QueuingStrategyInit::highWaterMark(double value) {
    emlite::Val::set("highWaterMark", value);
}


} // namespace webbind