#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class USBIsochronousOutTransferPacket : public emlite::Val {
    explicit USBIsochronousOutTransferPacket(Handle h) noexcept;

public:
    explicit USBIsochronousOutTransferPacket(const emlite::Val &val) noexcept;
    static USBIsochronousOutTransferPacket take_ownership(Handle h) noexcept;

    USBIsochronousOutTransferPacket clone() const noexcept;
    USBIsochronousOutTransferPacket(const USBTransferStatus& status);
    USBIsochronousOutTransferPacket(const USBTransferStatus& status, unsigned long bytesWritten);
    unsigned long bytesWritten() const;
    USBTransferStatus status() const;
};

