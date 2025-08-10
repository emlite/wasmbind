#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialOutputSignals
class SerialOutputSignals : public emlite::Val {
  explicit SerialOutputSignals(Handle h) noexcept;
public:
    static SerialOutputSignals take_ownership(Handle h) noexcept;
    explicit SerialOutputSignals(const emlite::Val &val) noexcept;
    SerialOutputSignals() noexcept;
    [[nodiscard]] SerialOutputSignals clone() const noexcept;
    /// Getter of the `dataTerminalReady` attribute.
    [[nodiscard]] bool dataTerminalReady() const;
    /// Setter of the `dataTerminalReady` attribute.
    void dataTerminalReady(bool value);
    /// Getter of the `requestToSend` attribute.
    [[nodiscard]] bool requestToSend() const;
    /// Setter of the `requestToSend` attribute.
    void requestToSend(bool value);
    /// Getter of the `break` attribute.
    [[nodiscard]] bool break_() const;
    /// Setter of the `break` attribute.
    void break_(bool value);
};

} // namespace webbind