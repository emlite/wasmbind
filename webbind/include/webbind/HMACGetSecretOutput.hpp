#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HMACGetSecretOutput
class HMACGetSecretOutput : public emlite::Val {
  explicit HMACGetSecretOutput(Handle h) noexcept;
public:
    static HMACGetSecretOutput take_ownership(Handle h) noexcept;
    explicit HMACGetSecretOutput(const emlite::Val &val) noexcept;
    HMACGetSecretOutput() noexcept;
    [[nodiscard]] HMACGetSecretOutput clone() const noexcept;
    /// Getter of the `output1` attribute.
    [[nodiscard]] jsbind::ArrayBuffer output1() const;
    /// Setter of the `output1` attribute.
    void output1(const jsbind::ArrayBuffer& value);
    /// Getter of the `output2` attribute.
    [[nodiscard]] jsbind::ArrayBuffer output2() const;
    /// Setter of the `output2` attribute.
    void output2(const jsbind::ArrayBuffer& value);
};

} // namespace webbind