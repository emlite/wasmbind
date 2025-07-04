#include <webbind/USBInTransferResult.hpp>


USBInTransferResult USBInTransferResult::take_ownership(Handle h) noexcept {
        return USBInTransferResult(h);
    }
USBInTransferResult USBInTransferResult::clone() const noexcept { return *this; }
USBInTransferResult::USBInTransferResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBInTransferResult::USBInTransferResult(const emlite::Val &val) noexcept: emlite::Val(val) {}


USBInTransferResult::USBInTransferResult(const USBTransferStatus& status, const jsbind::DataView& data): emlite::Val(emlite::Val::global("USBInTransferResult").new_(status, data)) {}

jsbind::DataView USBInTransferResult::data() const {
    return emlite::Val::get("data").as<jsbind::DataView>();
}

USBTransferStatus USBInTransferResult::status() const {
    return emlite::Val::get("status").as<USBTransferStatus>();
}

