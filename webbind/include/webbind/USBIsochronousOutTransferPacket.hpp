#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface USBIsochronousOutTransferPacket
/// [`USBIsochronousOutTransferPacket`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferPacket)
class USBIsochronousOutTransferPacket : public emlite::Val {
    explicit USBIsochronousOutTransferPacket(Handle h) noexcept;
public:
    explicit USBIsochronousOutTransferPacket(const emlite::Val &val) noexcept;
    static USBIsochronousOutTransferPacket take_ownership(Handle h) noexcept;
    [[nodiscard]] USBIsochronousOutTransferPacket clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBIsochronousOutTransferPacket(..)` constructor, creating a new USBIsochronousOutTransferPacket instance
    USBIsochronousOutTransferPacket(const USBTransferStatus& status);
    /// The `new USBIsochronousOutTransferPacket(..)` constructor, creating a new USBIsochronousOutTransferPacket instance
    USBIsochronousOutTransferPacket(const USBTransferStatus& status, unsigned long bytesWritten);
    /// [`USBIsochronousOutTransferPacket.bytesWritten`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferPacket/bytesWritten)
    /// [`USBIsochronousOutTransferPacket.bytesWritten`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferPacket/bytesWritten)
    [[nodiscard]] unsigned long bytesWritten() const;
    /// [`USBIsochronousOutTransferPacket.status`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferPacket/status)
    /// [`USBIsochronousOutTransferPacket.status`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferPacket/status)
    [[nodiscard]] USBTransferStatus status() const;
};

} // namespace webbind