#include "webbind/HandwritingSegment.hpp"
#include "webbind/HandwritingDrawingSegment.hpp"

using emlite::Val;
namespace webbind {

HandwritingSegment::HandwritingSegment(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingSegment HandwritingSegment::take_ownership(Handle h) noexcept {
        return HandwritingSegment(h);
    }
HandwritingSegment::HandwritingSegment(const emlite::Val &val) noexcept: emlite::Val(val) {}
HandwritingSegment::HandwritingSegment() noexcept: emlite::Val(emlite::Val::object()) {}
HandwritingSegment HandwritingSegment::clone() const noexcept { return *this; }

jsbind::String HandwritingSegment::grapheme() const {
    return emlite::Val::get("grapheme").as<jsbind::String>();
}

void HandwritingSegment::grapheme(const jsbind::String& value) {
    emlite::Val::set("grapheme", value);
}

unsigned long HandwritingSegment::beginIndex() const {
    return emlite::Val::get("beginIndex").as<unsigned long>();
}

void HandwritingSegment::beginIndex(unsigned long value) {
    emlite::Val::set("beginIndex", value);
}

unsigned long HandwritingSegment::endIndex() const {
    return emlite::Val::get("endIndex").as<unsigned long>();
}

void HandwritingSegment::endIndex(unsigned long value) {
    emlite::Val::set("endIndex", value);
}

jsbind::TypedArray<HandwritingDrawingSegment> HandwritingSegment::drawingSegments() const {
    return emlite::Val::get("drawingSegments").as<jsbind::TypedArray<HandwritingDrawingSegment>>();
}

void HandwritingSegment::drawingSegments(const jsbind::TypedArray<HandwritingDrawingSegment>& value) {
    emlite::Val::set("drawingSegments", value);
}


} // namespace webbind