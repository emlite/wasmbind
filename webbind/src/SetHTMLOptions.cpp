#include <webbind/SetHTMLOptions.hpp>

namespace webbind {

SetHTMLOptions::SetHTMLOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SetHTMLOptions SetHTMLOptions::take_ownership(Handle h) noexcept {
    return SetHTMLOptions(h);
}

SetHTMLOptions::SetHTMLOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

SetHTMLOptions::SetHTMLOptions() noexcept: emlite::Val(emlite::Val::object()) {}

SetHTMLOptions SetHTMLOptions::clone() const noexcept { return *this; }

jsbind::Any SetHTMLOptions::sanitizer() const {
    return emlite::Val::get("sanitizer").as<jsbind::Any>();
}

void SetHTMLOptions::sanitizer(const jsbind::Any& value) {
    emlite::Val::set("sanitizer", value);
}


} // namespace webbind