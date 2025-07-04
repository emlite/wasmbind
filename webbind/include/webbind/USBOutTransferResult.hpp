#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class USBOutTransferResult : public emlite::Val {
    explicit USBOutTransferResult(Handle h) noexcept;

public:
    explicit USBOutTransferResult(const emlite::Val &val) noexcept;
    static USBOutTransferResult take_ownership(Handle h) noexcept;

    USBOutTransferResult clone() const noexcept;
    USBOutTransferResult(const USBTransferStatus& status, unsigned long bytesWritten);
    unsigned long bytesWritten() const;
    USBTransferStatus status() const;
};

