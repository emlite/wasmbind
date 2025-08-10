#include <webbind/DelegatedInkTrailPresenter.hpp>
#include <webbind/Element.hpp>
#include <webbind/PointerEvent.hpp>
#include <webbind/InkTrailStyle.hpp>

namespace webbind {

DelegatedInkTrailPresenter DelegatedInkTrailPresenter::take_ownership(Handle h) noexcept {
        return DelegatedInkTrailPresenter(h);
    }
DelegatedInkTrailPresenter DelegatedInkTrailPresenter::clone() const noexcept { return *this; }
emlite::Val DelegatedInkTrailPresenter::instance() noexcept { return emlite::Val::global("DelegatedInkTrailPresenter"); }
DelegatedInkTrailPresenter::DelegatedInkTrailPresenter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DelegatedInkTrailPresenter::DelegatedInkTrailPresenter(const emlite::Val &val) noexcept: emlite::Val(val) {}

Element DelegatedInkTrailPresenter::presentationArea() const {
    return emlite::Val::get("presentationArea").as<Element>();
}

jsbind::Undefined DelegatedInkTrailPresenter::updateInkTrailStartPoint(const PointerEvent& event, const InkTrailStyle& style) {
    return emlite::Val::call("updateInkTrailStartPoint", event, style).as<jsbind::Undefined>();
}


} // namespace webbind