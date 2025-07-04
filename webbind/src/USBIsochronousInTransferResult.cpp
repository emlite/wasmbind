#include <webbind/USBIsochronousInTransferResult.hpp>
#include <webbind/USBIsochronousInTransferPacket.hpp>


USBIsochronousInTransferResult USBIsochronousInTransferResult::take_ownership(Handle h) noexcept {
        return USBIsochronousInTransferResult(h);
    }
USBIsochronousInTransferResult USBIsochronousInTransferResult::clone() const noexcept { return *this; }
USBIsochronousInTransferResult::USBIsochronousInTransferResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBIsochronousInTransferResult::USBIsochronousInTransferResult(const emlite::Val &val) noexcept: emlite::Val(val) {}


USBIsochronousInTransferResult::USBIsochronousInTransferResult(const jsbind::Sequence<USBIsochronousInTransferPacket>& packets, const jsbind::DataView& data): emlite::Val(emlite::Val::global("USBIsochronousInTransferResult").new_(packets, data)) {}

jsbind::DataView USBIsochronousInTransferResult::data() const {
    return emlite::Val::get("data").as<jsbind::DataView>();
}

jsbind::FrozenArray<USBIsochronousInTransferPacket> USBIsochronousInTransferResult::packets() const {
    return emlite::Val::get("packets").as<jsbind::FrozenArray<USBIsochronousInTransferPacket>>();
}

