#include <webbind/SetHTMLUnsafeOptions.hpp>

namespace webbind {

SetHTMLUnsafeOptions::SetHTMLUnsafeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SetHTMLUnsafeOptions SetHTMLUnsafeOptions::take_ownership(Handle h) noexcept {
    return SetHTMLUnsafeOptions(h);
}

SetHTMLUnsafeOptions::SetHTMLUnsafeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

SetHTMLUnsafeOptions::SetHTMLUnsafeOptions() noexcept: emlite::Val(emlite::Val::object()) {}

SetHTMLUnsafeOptions SetHTMLUnsafeOptions::clone() const noexcept { return *this; }

jsbind::Any SetHTMLUnsafeOptions::sanitizer() const {
    return emlite::Val::get("sanitizer").as<jsbind::Any>();
}

void SetHTMLUnsafeOptions::sanitizer(const jsbind::Any& value) {
    emlite::Val::set("sanitizer", value);
}


} // namespace webbind