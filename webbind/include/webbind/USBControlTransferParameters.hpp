#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type USBControlTransferParameters
class USBControlTransferParameters : public emlite::Val {
  explicit USBControlTransferParameters(Handle h) noexcept;
public:
    static USBControlTransferParameters take_ownership(Handle h) noexcept;
    explicit USBControlTransferParameters(const emlite::Val &val) noexcept;
    USBControlTransferParameters() noexcept;
    [[nodiscard]] USBControlTransferParameters clone() const noexcept;
    /// Getter of the `requestType` attribute.
    [[nodiscard]] USBRequestType requestType() const;
    /// Setter of the `requestType` attribute.
    void requestType(const USBRequestType& value);
    /// Getter of the `recipient` attribute.
    [[nodiscard]] USBRecipient recipient() const;
    /// Setter of the `recipient` attribute.
    void recipient(const USBRecipient& value);
    /// Getter of the `request` attribute.
    [[nodiscard]] unsigned char request() const;
    /// Setter of the `request` attribute.
    void request(unsigned char value);
    /// Getter of the `value` attribute.
    [[nodiscard]] unsigned short value() const;
    /// Setter of the `value` attribute.
    void value(unsigned short value);
    /// Getter of the `index` attribute.
    [[nodiscard]] unsigned short index() const;
    /// Setter of the `index` attribute.
    void index(unsigned short value);
};

} // namespace webbind