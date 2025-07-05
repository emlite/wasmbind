#include <webbind/StaticRange.hpp>


StaticRange StaticRange::take_ownership(Handle h) noexcept {
        return StaticRange(h);
    }
StaticRange StaticRange::clone() const noexcept { return *this; }
StaticRange::StaticRange(Handle h) noexcept : AbstractRange(emlite::Val::take_ownership(h)) {}
StaticRange::StaticRange(const emlite::Val &val) noexcept: AbstractRange(val) {}


StaticRange::StaticRange(const jsbind::Any& init) : AbstractRange(emlite::Val::global("StaticRange").new_(init)) {}

