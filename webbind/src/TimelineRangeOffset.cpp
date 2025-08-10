#include "webbind/TimelineRangeOffset.hpp"
#include "webbind/CSSNumericValue.hpp"

using emlite::Val;
namespace webbind {

TimelineRangeOffset::TimelineRangeOffset(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TimelineRangeOffset TimelineRangeOffset::take_ownership(Handle h) noexcept {
        return TimelineRangeOffset(h);
    }
TimelineRangeOffset::TimelineRangeOffset(const emlite::Val &val) noexcept: emlite::Val(val) {}
TimelineRangeOffset::TimelineRangeOffset() noexcept: emlite::Val(emlite::Val::object()) {}
TimelineRangeOffset TimelineRangeOffset::clone() const noexcept { return *this; }

jsbind::String TimelineRangeOffset::rangeName() const {
    return emlite::Val::get("rangeName").as<jsbind::String>();
}

void TimelineRangeOffset::rangeName(const jsbind::String& value) {
    emlite::Val::set("rangeName", value);
}

CSSNumericValue TimelineRangeOffset::offset() const {
    return emlite::Val::get("offset").as<CSSNumericValue>();
}

void TimelineRangeOffset::offset(const CSSNumericValue& value) {
    emlite::Val::set("offset", value);
}


} // namespace webbind