#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialOutputSignals
/// [`SerialOutputSignals`](https://developer.mozilla.org/en-US/docs/Web/API/SerialOutputSignals)
class SerialOutputSignals : public emlite::Val {
  explicit SerialOutputSignals(Handle h) noexcept;
public:
    static SerialOutputSignals take_ownership(Handle h) noexcept;
    explicit SerialOutputSignals(const emlite::Val &val) noexcept;
    SerialOutputSignals() noexcept;
    [[nodiscard]] SerialOutputSignals clone() const noexcept;
    [[nodiscard]] bool dataTerminalReady() const;
    void dataTerminalReady(bool value);
    [[nodiscard]] bool requestToSend() const;
    void requestToSend(bool value);
    [[nodiscard]] bool break_() const;
    void break_(bool value);
};

} // namespace webbind