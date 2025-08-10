#include <webbind/WindowPostMessageOptions.hpp>

namespace webbind {

WindowPostMessageOptions::WindowPostMessageOptions(Handle h) noexcept : StructuredSerializeOptions(emlite::Val::take_ownership(h)) {}
WindowPostMessageOptions WindowPostMessageOptions::take_ownership(Handle h) noexcept {
    return WindowPostMessageOptions(h);
}

WindowPostMessageOptions::WindowPostMessageOptions(const emlite::Val &val) noexcept: StructuredSerializeOptions(val) {}

WindowPostMessageOptions::WindowPostMessageOptions() noexcept: StructuredSerializeOptions(emlite::Val::object()) {}

WindowPostMessageOptions WindowPostMessageOptions::clone() const noexcept { return *this; }

jsbind::String WindowPostMessageOptions::targetOrigin() const {
    return emlite::Val::get("targetOrigin").as<jsbind::String>();
}

void WindowPostMessageOptions::targetOrigin(const jsbind::String& value) {
    emlite::Val::set("targetOrigin", value);
}


} // namespace webbind