#include <webbind/HashChangeEventInit.hpp>

using emlite::Val;
namespace webbind {

HashChangeEventInit::HashChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
HashChangeEventInit HashChangeEventInit::take_ownership(Handle h) noexcept {
        return HashChangeEventInit(h);
    }
HashChangeEventInit::HashChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
HashChangeEventInit::HashChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
HashChangeEventInit HashChangeEventInit::clone() const noexcept { return *this; }

jsbind::String HashChangeEventInit::oldURL() const {
    return emlite::Val::get("oldURL").as<jsbind::String>();
}

void HashChangeEventInit::oldURL(const jsbind::String& value) {
    emlite::Val::set("oldURL", value);
}

jsbind::String HashChangeEventInit::newURL() const {
    return emlite::Val::get("newURL").as<jsbind::String>();
}

void HashChangeEventInit::newURL(const jsbind::String& value) {
    emlite::Val::set("newURL", value);
}


} // namespace webbind