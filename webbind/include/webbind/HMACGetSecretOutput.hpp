#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HMACGetSecretOutput
/// [`HMACGetSecretOutput`](https://developer.mozilla.org/en-US/docs/Web/API/HMACGetSecretOutput)
class HMACGetSecretOutput : public emlite::Val {
  explicit HMACGetSecretOutput(Handle h) noexcept;
public:
    static HMACGetSecretOutput take_ownership(Handle h) noexcept;
    explicit HMACGetSecretOutput(const emlite::Val &val) noexcept;
    HMACGetSecretOutput() noexcept;
    [[nodiscard]] HMACGetSecretOutput clone() const noexcept;
    [[nodiscard]] jsbind::ArrayBuffer output1() const;
    void output1(const jsbind::ArrayBuffer& value);
    [[nodiscard]] jsbind::ArrayBuffer output2() const;
    void output2(const jsbind::ArrayBuffer& value);
};

} // namespace webbind