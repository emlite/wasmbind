#include <webbind/Ink.hpp>
#include <webbind/DelegatedInkTrailPresenter.hpp>
#include <webbind/InkPresenterParam.hpp>

namespace webbind {

Ink Ink::take_ownership(Handle h) noexcept {
        return Ink(h);
    }
Ink Ink::clone() const noexcept { return *this; }
emlite::Val Ink::instance() noexcept { return emlite::Val::global("Ink"); }
Ink::Ink(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Ink::Ink(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<DelegatedInkTrailPresenter> Ink::requestPresenter() {
    return emlite::Val::call("requestPresenter").as<jsbind::Promise<DelegatedInkTrailPresenter>>();
}

jsbind::Promise<DelegatedInkTrailPresenter> Ink::requestPresenter(const InkPresenterParam& param) {
    return emlite::Val::call("requestPresenter", param).as<jsbind::Promise<DelegatedInkTrailPresenter>>();
}


} // namespace webbind