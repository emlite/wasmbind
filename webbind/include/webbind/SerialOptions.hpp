#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialOptions
/// [`SerialOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SerialOptions)
class SerialOptions : public emlite::Val {
  explicit SerialOptions(Handle h) noexcept;
public:
    static SerialOptions take_ownership(Handle h) noexcept;
    explicit SerialOptions(const emlite::Val &val) noexcept;
    SerialOptions() noexcept;
    [[nodiscard]] SerialOptions clone() const noexcept;
    [[nodiscard]] unsigned long baudRate() const;
    void baudRate(unsigned long value);
    [[nodiscard]] unsigned char dataBits() const;
    void dataBits(unsigned char value);
    [[nodiscard]] unsigned char stopBits() const;
    void stopBits(unsigned char value);
    [[nodiscard]] ParityType parity() const;
    void parity(const ParityType& value);
    [[nodiscard]] unsigned long bufferSize() const;
    void bufferSize(unsigned long value);
    [[nodiscard]] FlowControlType flowControl() const;
    void flowControl(const FlowControlType& value);
};

} // namespace webbind