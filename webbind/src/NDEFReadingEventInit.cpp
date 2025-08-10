#include <webbind/NDEFReadingEventInit.hpp>
#include <webbind/NDEFMessageInit.hpp>

using emlite::Val;
namespace webbind {

NDEFReadingEventInit::NDEFReadingEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
NDEFReadingEventInit NDEFReadingEventInit::take_ownership(Handle h) noexcept {
        return NDEFReadingEventInit(h);
    }
NDEFReadingEventInit::NDEFReadingEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
NDEFReadingEventInit::NDEFReadingEventInit() noexcept: EventInit(emlite::Val::object()) {}
NDEFReadingEventInit NDEFReadingEventInit::clone() const noexcept { return *this; }

jsbind::String NDEFReadingEventInit::serialNumber() const {
    return emlite::Val::get("serialNumber").as<jsbind::String>();
}

void NDEFReadingEventInit::serialNumber(const jsbind::String& value) {
    emlite::Val::set("serialNumber", value);
}

NDEFMessageInit NDEFReadingEventInit::message() const {
    return emlite::Val::get("message").as<NDEFMessageInit>();
}

void NDEFReadingEventInit::message(const NDEFMessageInit& value) {
    emlite::Val::set("message", value);
}


} // namespace webbind