#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBIsochronousInTransferPacket;


class USBIsochronousInTransferResult : public emlite::Val {
    explicit USBIsochronousInTransferResult(Handle h) noexcept;

public:
    explicit USBIsochronousInTransferResult(const emlite::Val &val) noexcept;
    static USBIsochronousInTransferResult take_ownership(Handle h) noexcept;

    USBIsochronousInTransferResult clone() const noexcept;
    USBIsochronousInTransferResult(const jsbind::TypedArray<USBIsochronousInTransferPacket>& packets);
    USBIsochronousInTransferResult(const jsbind::TypedArray<USBIsochronousInTransferPacket>& packets, const jsbind::DataView& data);
    jsbind::DataView data() const;
    jsbind::TypedArray<USBIsochronousInTransferPacket> packets() const;
};

