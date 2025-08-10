#include <webbind/StaticRange.hpp>
#include <webbind/StaticRangeInit.hpp>

namespace webbind {

StaticRange StaticRange::take_ownership(Handle h) noexcept {
    return StaticRange(h);
}

StaticRange StaticRange::clone() const noexcept { return *this; }

emlite::Val StaticRange::instance() noexcept { return emlite::Val::global("StaticRange"); }

StaticRange::StaticRange(Handle h) noexcept : AbstractRange(emlite::Val::take_ownership(h)) {}

StaticRange::StaticRange(const emlite::Val &val) noexcept: AbstractRange(val) {}

StaticRange::StaticRange(const StaticRangeInit& init) : AbstractRange(emlite::Val::global("StaticRange").new_(init)) {}


} // namespace webbind