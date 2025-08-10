#include <webbind/USBOutTransferResult.hpp>

namespace webbind {

USBOutTransferResult USBOutTransferResult::take_ownership(Handle h) noexcept {
        return USBOutTransferResult(h);
    }
USBOutTransferResult USBOutTransferResult::clone() const noexcept { return *this; }
emlite::Val USBOutTransferResult::instance() noexcept { return emlite::Val::global("USBOutTransferResult"); }
USBOutTransferResult::USBOutTransferResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBOutTransferResult::USBOutTransferResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

USBOutTransferResult::USBOutTransferResult(const USBTransferStatus& status) : emlite::Val(emlite::Val::global("USBOutTransferResult").new_(status)) {}

USBOutTransferResult::USBOutTransferResult(const USBTransferStatus& status, unsigned long bytesWritten) : emlite::Val(emlite::Val::global("USBOutTransferResult").new_(status, bytesWritten)) {}

unsigned long USBOutTransferResult::bytesWritten() const {
    return emlite::Val::get("bytesWritten").as<unsigned long>();
}

USBTransferStatus USBOutTransferResult::status() const {
    return emlite::Val::get("status").as<USBTransferStatus>();
}


} // namespace webbind