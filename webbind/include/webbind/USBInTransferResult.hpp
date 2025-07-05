#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class USBInTransferResult : public emlite::Val {
    explicit USBInTransferResult(Handle h) noexcept;

public:
    explicit USBInTransferResult(const emlite::Val &val) noexcept;
    static USBInTransferResult take_ownership(Handle h) noexcept;

    USBInTransferResult clone() const noexcept;
    USBInTransferResult(const USBTransferStatus& status);
    USBInTransferResult(const USBTransferStatus& status, const jsbind::DataView& data);
    jsbind::DataView data() const;
    USBTransferStatus status() const;
};

