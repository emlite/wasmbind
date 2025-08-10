#include <webbind/CompositionEventInit.hpp>

namespace webbind {

CompositionEventInit::CompositionEventInit(Handle h) noexcept : UIEventInit(emlite::Val::take_ownership(h)) {}
CompositionEventInit CompositionEventInit::take_ownership(Handle h) noexcept {
    return CompositionEventInit(h);
}

CompositionEventInit::CompositionEventInit(const emlite::Val &val) noexcept: UIEventInit(val) {}

CompositionEventInit::CompositionEventInit() noexcept: UIEventInit(emlite::Val::object()) {}

CompositionEventInit CompositionEventInit::clone() const noexcept { return *this; }

jsbind::String CompositionEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::String>();
}

void CompositionEventInit::data(const jsbind::String& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind