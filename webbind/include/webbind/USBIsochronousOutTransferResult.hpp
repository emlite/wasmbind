#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBIsochronousOutTransferPacket;


/// The USBIsochronousOutTransferResult class.
/// [`USBIsochronousOutTransferResult`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferResult)
class USBIsochronousOutTransferResult : public emlite::Val {
    explicit USBIsochronousOutTransferResult(Handle h) noexcept;

public:
    explicit USBIsochronousOutTransferResult(const emlite::Val &val) noexcept;
    static USBIsochronousOutTransferResult take_ownership(Handle h) noexcept;

    [[nodiscard]] USBIsochronousOutTransferResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBIsochronousOutTransferResult(..)` constructor, creating a new USBIsochronousOutTransferResult instance
    USBIsochronousOutTransferResult(const jsbind::TypedArray<USBIsochronousOutTransferPacket>& packets);
    /// Getter of the `packets` attribute.
    /// [`USBIsochronousOutTransferResult.packets`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferResult/packets)
    [[nodiscard]] jsbind::TypedArray<USBIsochronousOutTransferPacket> packets() const;
};

