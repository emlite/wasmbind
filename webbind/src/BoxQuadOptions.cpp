#include <webbind/BoxQuadOptions.hpp>

using emlite::Val;
namespace webbind {

BoxQuadOptions::BoxQuadOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BoxQuadOptions BoxQuadOptions::take_ownership(Handle h) noexcept {
        return BoxQuadOptions(h);
    }
BoxQuadOptions::BoxQuadOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BoxQuadOptions::BoxQuadOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BoxQuadOptions BoxQuadOptions::clone() const noexcept { return *this; }

CSSBoxType BoxQuadOptions::box() const {
    return emlite::Val::get("box").as<CSSBoxType>();
}

void BoxQuadOptions::box(const CSSBoxType& value) {
    emlite::Val::set("box", value);
}

jsbind::Any BoxQuadOptions::relativeTo() const {
    return emlite::Val::get("relativeTo").as<jsbind::Any>();
}

void BoxQuadOptions::relativeTo(const jsbind::Any& value) {
    emlite::Val::set("relativeTo", value);
}


} // namespace webbind