#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type USBControlTransferParameters
/// [`USBControlTransferParameters`](https://developer.mozilla.org/en-US/docs/Web/API/USBControlTransferParameters)
class USBControlTransferParameters : public emlite::Val {
  explicit USBControlTransferParameters(Handle h) noexcept;
public:
    static USBControlTransferParameters take_ownership(Handle h) noexcept;
    explicit USBControlTransferParameters(const emlite::Val &val) noexcept;
    USBControlTransferParameters() noexcept;
    [[nodiscard]] USBControlTransferParameters clone() const noexcept;
    [[nodiscard]] USBRequestType requestType() const;
    void requestType(const USBRequestType& value);
    [[nodiscard]] USBRecipient recipient() const;
    void recipient(const USBRecipient& value);
    [[nodiscard]] unsigned char request() const;
    void request(unsigned char value);
    [[nodiscard]] unsigned short value() const;
    void value(unsigned short value);
    [[nodiscard]] unsigned short index() const;
    void index(unsigned short value);
};

} // namespace webbind