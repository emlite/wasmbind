#include <webbind/USBControlTransferParameters.hpp>

using emlite::Val;
namespace webbind {

USBControlTransferParameters::USBControlTransferParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBControlTransferParameters USBControlTransferParameters::take_ownership(Handle h) noexcept {
        return USBControlTransferParameters(h);
    }
USBControlTransferParameters::USBControlTransferParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
USBControlTransferParameters::USBControlTransferParameters() noexcept: emlite::Val(emlite::Val::object()) {}
USBControlTransferParameters USBControlTransferParameters::clone() const noexcept { return *this; }

USBRequestType USBControlTransferParameters::requestType() const {
    return emlite::Val::get("requestType").as<USBRequestType>();
}

void USBControlTransferParameters::requestType(const USBRequestType& value) {
    emlite::Val::set("requestType", value);
}

USBRecipient USBControlTransferParameters::recipient() const {
    return emlite::Val::get("recipient").as<USBRecipient>();
}

void USBControlTransferParameters::recipient(const USBRecipient& value) {
    emlite::Val::set("recipient", value);
}

unsigned char USBControlTransferParameters::request() const {
    return emlite::Val::get("request").as<unsigned char>();
}

void USBControlTransferParameters::request(unsigned char value) {
    emlite::Val::set("request", value);
}

unsigned short USBControlTransferParameters::value() const {
    return emlite::Val::get("value").as<unsigned short>();
}

void USBControlTransferParameters::value(unsigned short value) {
    emlite::Val::set("value", value);
}

unsigned short USBControlTransferParameters::index() const {
    return emlite::Val::get("index").as<unsigned short>();
}

void USBControlTransferParameters::index(unsigned short value) {
    emlite::Val::set("index", value);
}


} // namespace webbind