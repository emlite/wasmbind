#include "webbind/USBIsochronousOutTransferResult.hpp"
#include "webbind/USBIsochronousOutTransferPacket.hpp"

namespace webbind {

USBIsochronousOutTransferResult USBIsochronousOutTransferResult::take_ownership(Handle h) noexcept {
        return USBIsochronousOutTransferResult(h);
    }
USBIsochronousOutTransferResult USBIsochronousOutTransferResult::clone() const noexcept { return *this; }
emlite::Val USBIsochronousOutTransferResult::instance() noexcept { return emlite::Val::global("USBIsochronousOutTransferResult"); }
USBIsochronousOutTransferResult::USBIsochronousOutTransferResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBIsochronousOutTransferResult::USBIsochronousOutTransferResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

USBIsochronousOutTransferResult::USBIsochronousOutTransferResult(const jsbind::TypedArray<USBIsochronousOutTransferPacket>& packets) : emlite::Val(emlite::Val::global("USBIsochronousOutTransferResult").new_(packets)) {}

jsbind::TypedArray<USBIsochronousOutTransferPacket> USBIsochronousOutTransferResult::packets() const {
    return emlite::Val::get("packets").as<jsbind::TypedArray<USBIsochronousOutTransferPacket>>();
}


} // namespace webbind