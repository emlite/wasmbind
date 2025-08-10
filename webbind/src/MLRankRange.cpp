#include <webbind/MLRankRange.hpp>

namespace webbind {

MLRankRange::MLRankRange(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLRankRange MLRankRange::take_ownership(Handle h) noexcept {
    return MLRankRange(h);
}

MLRankRange::MLRankRange(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLRankRange::MLRankRange() noexcept: emlite::Val(emlite::Val::object()) {}

MLRankRange MLRankRange::clone() const noexcept { return *this; }

unsigned long MLRankRange::min() const {
    return emlite::Val::get("min").as<unsigned long>();
}

void MLRankRange::min(unsigned long value) {
    emlite::Val::set("min", value);
}

unsigned long MLRankRange::max() const {
    return emlite::Val::get("max").as<unsigned long>();
}

void MLRankRange::max(unsigned long value) {
    emlite::Val::set("max", value);
}


} // namespace webbind