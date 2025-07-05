#include <webbind/USBIsochronousInTransferPacket.hpp>


USBIsochronousInTransferPacket USBIsochronousInTransferPacket::take_ownership(Handle h) noexcept {
        return USBIsochronousInTransferPacket(h);
    }
USBIsochronousInTransferPacket USBIsochronousInTransferPacket::clone() const noexcept { return *this; }
USBIsochronousInTransferPacket::USBIsochronousInTransferPacket(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBIsochronousInTransferPacket::USBIsochronousInTransferPacket(const emlite::Val &val) noexcept: emlite::Val(val) {}


USBIsochronousInTransferPacket::USBIsochronousInTransferPacket(const USBTransferStatus& status) : emlite::Val(emlite::Val::global("USBIsochronousInTransferPacket").new_(status)) {}

USBIsochronousInTransferPacket::USBIsochronousInTransferPacket(const USBTransferStatus& status, const jsbind::DataView& data) : emlite::Val(emlite::Val::global("USBIsochronousInTransferPacket").new_(status, data)) {}

jsbind::DataView USBIsochronousInTransferPacket::data() const {
    return emlite::Val::get("data").as<jsbind::DataView>();
}

USBTransferStatus USBIsochronousInTransferPacket::status() const {
    return emlite::Val::get("status").as<USBTransferStatus>();
}

