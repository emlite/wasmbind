#include <webbind/Ink.hpp>
#include <webbind/DelegatedInkTrailPresenter.hpp>
#include <webbind/Element.hpp>


InkPresenterParam::InkPresenterParam(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
InkPresenterParam InkPresenterParam::take_ownership(Handle h) noexcept {
        return InkPresenterParam(h);
    }
InkPresenterParam::InkPresenterParam(const emlite::Val &val) noexcept: emlite::Val(val) {}
InkPresenterParam::InkPresenterParam() noexcept: emlite::Val(emlite::Val::object()) {}
InkPresenterParam InkPresenterParam::clone() const noexcept { return *this; }

Element InkPresenterParam::presentationArea() const {
    return emlite::Val::get("presentationArea").as<Element>();
}

void InkPresenterParam::presentationArea(const Element& value) {
    emlite::Val::set("presentationArea", value);
}

Ink Ink::take_ownership(Handle h) noexcept {
        return Ink(h);
    }
Ink Ink::clone() const noexcept { return *this; }
Ink::Ink(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Ink::Ink(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise Ink::requestPresenter() {
    return emlite::Val::call("requestPresenter").as<jsbind::Promise>();
}

jsbind::Promise Ink::requestPresenter(const InkPresenterParam& param) {
    return emlite::Val::call("requestPresenter", param).as<jsbind::Promise>();
}

