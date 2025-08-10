#include <webbind/RouterSourceDict.hpp>

namespace webbind {

RouterSourceDict::RouterSourceDict(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RouterSourceDict RouterSourceDict::take_ownership(Handle h) noexcept {
    return RouterSourceDict(h);
}

RouterSourceDict::RouterSourceDict(const emlite::Val &val) noexcept: emlite::Val(val) {}

RouterSourceDict::RouterSourceDict() noexcept: emlite::Val(emlite::Val::object()) {}

RouterSourceDict RouterSourceDict::clone() const noexcept { return *this; }

jsbind::String RouterSourceDict::cacheName() const {
    return emlite::Val::get("cacheName").as<jsbind::String>();
}

void RouterSourceDict::cacheName(const jsbind::String& value) {
    emlite::Val::set("cacheName", value);
}


} // namespace webbind