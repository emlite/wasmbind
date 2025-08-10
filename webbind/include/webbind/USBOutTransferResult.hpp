#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface USBOutTransferResult
/// [`USBOutTransferResult`](https://developer.mozilla.org/en-US/docs/Web/API/USBOutTransferResult)
class USBOutTransferResult : public emlite::Val {
    explicit USBOutTransferResult(Handle h) noexcept;
public:
    explicit USBOutTransferResult(const emlite::Val &val) noexcept;
    static USBOutTransferResult take_ownership(Handle h) noexcept;
    [[nodiscard]] USBOutTransferResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBOutTransferResult(..)` constructor, creating a new USBOutTransferResult instance
    USBOutTransferResult(const USBTransferStatus& status);
    /// The `new USBOutTransferResult(..)` constructor, creating a new USBOutTransferResult instance
    USBOutTransferResult(const USBTransferStatus& status, unsigned long bytesWritten);
    /// Getter of the `bytesWritten` attribute.
    /// [`USBOutTransferResult.bytesWritten`](https://developer.mozilla.org/en-US/docs/Web/API/USBOutTransferResult/bytesWritten)
    [[nodiscard]] unsigned long bytesWritten() const;
    /// Getter of the `status` attribute.
    /// [`USBOutTransferResult.status`](https://developer.mozilla.org/en-US/docs/Web/API/USBOutTransferResult/status)
    [[nodiscard]] USBTransferStatus status() const;
};

} // namespace webbind