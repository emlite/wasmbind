#include <webbind/BackgroundFetchEventInit.hpp>
#include <webbind/BackgroundFetchRegistration.hpp>

using emlite::Val;
namespace webbind {

BackgroundFetchEventInit::BackgroundFetchEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
BackgroundFetchEventInit BackgroundFetchEventInit::take_ownership(Handle h) noexcept {
        return BackgroundFetchEventInit(h);
    }
BackgroundFetchEventInit::BackgroundFetchEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
BackgroundFetchEventInit::BackgroundFetchEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
BackgroundFetchEventInit BackgroundFetchEventInit::clone() const noexcept { return *this; }

BackgroundFetchRegistration BackgroundFetchEventInit::registration() const {
    return emlite::Val::get("registration").as<BackgroundFetchRegistration>();
}

void BackgroundFetchEventInit::registration(const BackgroundFetchRegistration& value) {
    emlite::Val::set("registration", value);
}


} // namespace webbind