#include <webbind/ContentIndexEventInit.hpp>

using emlite::Val;
namespace webbind {

ContentIndexEventInit::ContentIndexEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
ContentIndexEventInit ContentIndexEventInit::take_ownership(Handle h) noexcept {
        return ContentIndexEventInit(h);
    }
ContentIndexEventInit::ContentIndexEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
ContentIndexEventInit::ContentIndexEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
ContentIndexEventInit ContentIndexEventInit::clone() const noexcept { return *this; }

jsbind::String ContentIndexEventInit::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void ContentIndexEventInit::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}


} // namespace webbind