#include <webbind/ViewTimeline.hpp>
#include <webbind/Element.hpp>
#include <webbind/CSSNumericValue.hpp>


ViewTimeline ViewTimeline::take_ownership(Handle h) noexcept {
        return ViewTimeline(h);
    }
ViewTimeline ViewTimeline::clone() const noexcept { return *this; }
ViewTimeline::ViewTimeline(Handle h) noexcept : ScrollTimeline(emlite::Val::take_ownership(h)) {}
ViewTimeline::ViewTimeline(const emlite::Val &val) noexcept: ScrollTimeline(val) {}


ViewTimeline::ViewTimeline(const jsbind::Any& options): ScrollTimeline(emlite::Val::global("ViewTimeline").new_(options)) {}

Element ViewTimeline::subject() const {
    return ScrollTimeline::get("subject").as<Element>();
}

CSSNumericValue ViewTimeline::startOffset() const {
    return ScrollTimeline::get("startOffset").as<CSSNumericValue>();
}

CSSNumericValue ViewTimeline::endOffset() const {
    return ScrollTimeline::get("endOffset").as<CSSNumericValue>();
}

