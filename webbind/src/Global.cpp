#include <webbind/Global.hpp>
#include <webbind/GlobalDescriptor.hpp>

namespace webbind {

Global Global::take_ownership(Handle h) noexcept {
    return Global(h);
}

Global Global::clone() const noexcept { return *this; }

emlite::Val Global::instance() noexcept { return emlite::Val::global("Global"); }

Global::Global(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Global::Global(const emlite::Val &val) noexcept: emlite::Val(val) {}

Global::Global(const GlobalDescriptor& descriptor) : emlite::Val(emlite::Val::global("Global").new_(descriptor)) {}

Global::Global(const GlobalDescriptor& descriptor, const jsbind::Any& v) : emlite::Val(emlite::Val::global("Global").new_(descriptor, v)) {}

jsbind::Any Global::valueOf() {
    return emlite::Val::call("valueOf").as<jsbind::Any>();
}

jsbind::Any Global::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void Global::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}


} // namespace webbind