#include <webbind/CSS.hpp>

using emlite::Val;

namespace webbind {

namespace CSS {

jsbind::String escape(const jsbind::String& ident) {
    return emlite::Val::global("css").call("escape", ident).as<jsbind::String>();
}

} // namespace CSS

} // namespace webbind