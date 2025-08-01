#include <webbind/DelegatedInkTrailPresenter.hpp>
#include <webbind/Element.hpp>
#include <webbind/PointerEvent.hpp>


InkTrailStyle::InkTrailStyle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
InkTrailStyle InkTrailStyle::take_ownership(Handle h) noexcept {
        return InkTrailStyle(h);
    }
InkTrailStyle::InkTrailStyle(const emlite::Val &val) noexcept: emlite::Val(val) {}
InkTrailStyle::InkTrailStyle() noexcept: emlite::Val(emlite::Val::object()) {}
InkTrailStyle InkTrailStyle::clone() const noexcept { return *this; }

jsbind::String InkTrailStyle::color() const {
    return emlite::Val::get("color").as<jsbind::String>();
}

void InkTrailStyle::color(const jsbind::String& value) {
    emlite::Val::set("color", value);
}

double InkTrailStyle::diameter() const {
    return emlite::Val::get("diameter").as<double>();
}

void InkTrailStyle::diameter(double value) {
    emlite::Val::set("diameter", value);
}

DelegatedInkTrailPresenter DelegatedInkTrailPresenter::take_ownership(Handle h) noexcept {
        return DelegatedInkTrailPresenter(h);
    }
DelegatedInkTrailPresenter DelegatedInkTrailPresenter::clone() const noexcept { return *this; }
DelegatedInkTrailPresenter::DelegatedInkTrailPresenter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DelegatedInkTrailPresenter::DelegatedInkTrailPresenter(const emlite::Val &val) noexcept: emlite::Val(val) {}


Element DelegatedInkTrailPresenter::presentationArea() const {
    return emlite::Val::get("presentationArea").as<Element>();
}

jsbind::Undefined DelegatedInkTrailPresenter::updateInkTrailStartPoint(const PointerEvent& event, const InkTrailStyle& style) {
    return emlite::Val::call("updateInkTrailStartPoint", event, style).as<jsbind::Undefined>();
}

