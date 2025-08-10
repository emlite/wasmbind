#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class USBIsochronousInTransferPacket;

/// Interface USBIsochronousInTransferResult
/// [`USBIsochronousInTransferResult`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferResult)
class USBIsochronousInTransferResult : public emlite::Val {
    explicit USBIsochronousInTransferResult(Handle h) noexcept;
public:
    explicit USBIsochronousInTransferResult(const emlite::Val &val) noexcept;
    static USBIsochronousInTransferResult take_ownership(Handle h) noexcept;
    [[nodiscard]] USBIsochronousInTransferResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBIsochronousInTransferResult(..)` constructor, creating a new USBIsochronousInTransferResult instance
    USBIsochronousInTransferResult(const jsbind::TypedArray<USBIsochronousInTransferPacket>& packets);
    /// The `new USBIsochronousInTransferResult(..)` constructor, creating a new USBIsochronousInTransferResult instance
    USBIsochronousInTransferResult(const jsbind::TypedArray<USBIsochronousInTransferPacket>& packets, const jsbind::DataView& data);
    /// [`USBIsochronousInTransferResult.data`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferResult/data)
    /// [`USBIsochronousInTransferResult.data`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferResult/data)
    [[nodiscard]] jsbind::DataView data() const;
    /// [`USBIsochronousInTransferResult.packets`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferResult/packets)
    /// [`USBIsochronousInTransferResult.packets`](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferResult/packets)
    [[nodiscard]] jsbind::TypedArray<USBIsochronousInTransferPacket> packets() const;
};

} // namespace webbind