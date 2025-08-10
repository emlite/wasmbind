#include <webbind/HandwritingDrawingSegment.hpp>

namespace webbind {

HandwritingDrawingSegment::HandwritingDrawingSegment(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingDrawingSegment HandwritingDrawingSegment::take_ownership(Handle h) noexcept {
    return HandwritingDrawingSegment(h);
}

HandwritingDrawingSegment::HandwritingDrawingSegment(const emlite::Val &val) noexcept: emlite::Val(val) {}

HandwritingDrawingSegment::HandwritingDrawingSegment() noexcept: emlite::Val(emlite::Val::object()) {}

HandwritingDrawingSegment HandwritingDrawingSegment::clone() const noexcept { return *this; }

unsigned long HandwritingDrawingSegment::strokeIndex() const {
    return emlite::Val::get("strokeIndex").as<unsigned long>();
}

void HandwritingDrawingSegment::strokeIndex(unsigned long value) {
    emlite::Val::set("strokeIndex", value);
}

unsigned long HandwritingDrawingSegment::beginPointIndex() const {
    return emlite::Val::get("beginPointIndex").as<unsigned long>();
}

void HandwritingDrawingSegment::beginPointIndex(unsigned long value) {
    emlite::Val::set("beginPointIndex", value);
}

unsigned long HandwritingDrawingSegment::endPointIndex() const {
    return emlite::Val::get("endPointIndex").as<unsigned long>();
}

void HandwritingDrawingSegment::endPointIndex(unsigned long value) {
    emlite::Val::set("endPointIndex", value);
}


} // namespace webbind