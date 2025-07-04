#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBIsochronousOutTransferPacket;


class USBIsochronousOutTransferResult : public emlite::Val {
    explicit USBIsochronousOutTransferResult(Handle h) noexcept;

public:
    explicit USBIsochronousOutTransferResult(const emlite::Val &val) noexcept;
    static USBIsochronousOutTransferResult take_ownership(Handle h) noexcept;

    USBIsochronousOutTransferResult clone() const noexcept;
    USBIsochronousOutTransferResult(const jsbind::Sequence<USBIsochronousOutTransferPacket>& packets);
    jsbind::FrozenArray<USBIsochronousOutTransferPacket> packets() const;
};

