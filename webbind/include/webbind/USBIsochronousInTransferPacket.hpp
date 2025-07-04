#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class USBIsochronousInTransferPacket : public emlite::Val {
    explicit USBIsochronousInTransferPacket(Handle h) noexcept;

public:
    explicit USBIsochronousInTransferPacket(const emlite::Val &val) noexcept;
    static USBIsochronousInTransferPacket take_ownership(Handle h) noexcept;

    USBIsochronousInTransferPacket clone() const noexcept;
    USBIsochronousInTransferPacket(const USBTransferStatus& status, const jsbind::DataView& data);
    jsbind::DataView data() const;
    USBTransferStatus status() const;
};

