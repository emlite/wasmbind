#include "webbind/MLGatherOptions.hpp"

using emlite::Val;
namespace webbind {

MLGatherOptions::MLGatherOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLGatherOptions MLGatherOptions::take_ownership(Handle h) noexcept {
        return MLGatherOptions(h);
    }
MLGatherOptions::MLGatherOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLGatherOptions::MLGatherOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLGatherOptions MLGatherOptions::clone() const noexcept { return *this; }

unsigned long MLGatherOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLGatherOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}


} // namespace webbind