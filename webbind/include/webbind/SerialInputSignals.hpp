#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialInputSignals
class SerialInputSignals : public emlite::Val {
  explicit SerialInputSignals(Handle h) noexcept;
public:
    static SerialInputSignals take_ownership(Handle h) noexcept;
    explicit SerialInputSignals(const emlite::Val &val) noexcept;
    SerialInputSignals() noexcept;
    [[nodiscard]] SerialInputSignals clone() const noexcept;
    /// Getter of the `dataCarrierDetect` attribute.
    [[nodiscard]] bool dataCarrierDetect() const;
    /// Setter of the `dataCarrierDetect` attribute.
    void dataCarrierDetect(bool value);
    /// Getter of the `clearToSend` attribute.
    [[nodiscard]] bool clearToSend() const;
    /// Setter of the `clearToSend` attribute.
    void clearToSend(bool value);
    /// Getter of the `ringIndicator` attribute.
    [[nodiscard]] bool ringIndicator() const;
    /// Setter of the `ringIndicator` attribute.
    void ringIndicator(bool value);
    /// Getter of the `dataSetReady` attribute.
    [[nodiscard]] bool dataSetReady() const;
    /// Setter of the `dataSetReady` attribute.
    void dataSetReady(bool value);
};

} // namespace webbind