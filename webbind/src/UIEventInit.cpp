#include <webbind/UIEventInit.hpp>

namespace webbind {

UIEventInit::UIEventInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UIEventInit UIEventInit::take_ownership(Handle h) noexcept {
    return UIEventInit(h);
}

UIEventInit::UIEventInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

UIEventInit::UIEventInit() noexcept: emlite::Val(emlite::Val::object()) {}

UIEventInit UIEventInit::clone() const noexcept { return *this; }

unsigned long UIEventInit::which() const {
    return emlite::Val::get("which").as<unsigned long>();
}

void UIEventInit::which(unsigned long value) {
    emlite::Val::set("which", value);
}


} // namespace webbind