#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialInputSignals
/// [`SerialInputSignals`](https://developer.mozilla.org/en-US/docs/Web/API/SerialInputSignals)
class SerialInputSignals : public emlite::Val {
  explicit SerialInputSignals(Handle h) noexcept;
public:
    static SerialInputSignals take_ownership(Handle h) noexcept;
    explicit SerialInputSignals(const emlite::Val &val) noexcept;
    SerialInputSignals() noexcept;
    [[nodiscard]] SerialInputSignals clone() const noexcept;
    [[nodiscard]] bool dataCarrierDetect() const;
    void dataCarrierDetect(bool value);
    [[nodiscard]] bool clearToSend() const;
    void clearToSend(bool value);
    [[nodiscard]] bool ringIndicator() const;
    void ringIndicator(bool value);
    [[nodiscard]] bool dataSetReady() const;
    void dataSetReady(bool value);
};

} // namespace webbind