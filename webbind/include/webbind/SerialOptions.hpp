#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialOptions
class SerialOptions : public emlite::Val {
  explicit SerialOptions(Handle h) noexcept;
public:
    static SerialOptions take_ownership(Handle h) noexcept;
    explicit SerialOptions(const emlite::Val &val) noexcept;
    SerialOptions() noexcept;
    [[nodiscard]] SerialOptions clone() const noexcept;
    /// Getter of the `baudRate` attribute.
    [[nodiscard]] unsigned long baudRate() const;
    /// Setter of the `baudRate` attribute.
    void baudRate(unsigned long value);
    /// Getter of the `dataBits` attribute.
    [[nodiscard]] unsigned char dataBits() const;
    /// Setter of the `dataBits` attribute.
    void dataBits(unsigned char value);
    /// Getter of the `stopBits` attribute.
    [[nodiscard]] unsigned char stopBits() const;
    /// Setter of the `stopBits` attribute.
    void stopBits(unsigned char value);
    /// Getter of the `parity` attribute.
    [[nodiscard]] ParityType parity() const;
    /// Setter of the `parity` attribute.
    void parity(const ParityType& value);
    /// Getter of the `bufferSize` attribute.
    [[nodiscard]] unsigned long bufferSize() const;
    /// Setter of the `bufferSize` attribute.
    void bufferSize(unsigned long value);
    /// Getter of the `flowControl` attribute.
    [[nodiscard]] FlowControlType flowControl() const;
    /// Setter of the `flowControl` attribute.
    void flowControl(const FlowControlType& value);
};

} // namespace webbind