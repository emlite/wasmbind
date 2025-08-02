#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The USBInTransferResult class.
/// [`USBInTransferResult`](https://developer.mozilla.org/en-US/docs/Web/API/USBInTransferResult)
class USBInTransferResult : public emlite::Val {
    explicit USBInTransferResult(Handle h) noexcept;

public:
    explicit USBInTransferResult(const emlite::Val &val) noexcept;
    static USBInTransferResult take_ownership(Handle h) noexcept;

    [[nodiscard]] USBInTransferResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBInTransferResult(..)` constructor, creating a new USBInTransferResult instance
    USBInTransferResult(const USBTransferStatus& status);
    /// The `new USBInTransferResult(..)` constructor, creating a new USBInTransferResult instance
    USBInTransferResult(const USBTransferStatus& status, const jsbind::DataView& data);
    /// Getter of the `data` attribute.
    /// [`USBInTransferResult.data`](https://developer.mozilla.org/en-US/docs/Web/API/USBInTransferResult/data)
    [[nodiscard]] jsbind::DataView data() const;
    /// Getter of the `status` attribute.
    /// [`USBInTransferResult.status`](https://developer.mozilla.org/en-US/docs/Web/API/USBInTransferResult/status)
    [[nodiscard]] USBTransferStatus status() const;
};

