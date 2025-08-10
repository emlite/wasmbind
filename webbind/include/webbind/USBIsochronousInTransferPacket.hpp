#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface USBIsochronousInTransferPacket
/// [`USBIsochronousInTransferPacket`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferPacket)
class USBIsochronousInTransferPacket : public emlite::Val {
    explicit USBIsochronousInTransferPacket(Handle h) noexcept;
public:
    explicit USBIsochronousInTransferPacket(const emlite::Val &val) noexcept;
    static USBIsochronousInTransferPacket take_ownership(Handle h) noexcept;
    [[nodiscard]] USBIsochronousInTransferPacket clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBIsochronousInTransferPacket(..)` constructor, creating a new USBIsochronousInTransferPacket instance
    USBIsochronousInTransferPacket(const USBTransferStatus& status);
    /// The `new USBIsochronousInTransferPacket(..)` constructor, creating a new USBIsochronousInTransferPacket instance
    USBIsochronousInTransferPacket(const USBTransferStatus& status, const jsbind::DataView& data);
    /// Getter of the `data` attribute.
    /// [`USBIsochronousInTransferPacket.data`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferPacket/data)
    [[nodiscard]] jsbind::DataView data() const;
    /// Getter of the `status` attribute.
    /// [`USBIsochronousInTransferPacket.status`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferPacket/status)
    [[nodiscard]] USBTransferStatus status() const;
};

} // namespace webbind