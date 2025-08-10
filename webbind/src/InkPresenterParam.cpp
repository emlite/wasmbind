#include <webbind/InkPresenterParam.hpp>
#include <webbind/Element.hpp>

namespace webbind {

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


} // namespace webbind