#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HMACGetSecretInput
/// [`HMACGetSecretInput`](https://developer.mozilla.org/en-US/docs/Web/API/HMACGetSecretInput)
class HMACGetSecretInput : public emlite::Val {
  explicit HMACGetSecretInput(Handle h) noexcept;
public:
    static HMACGetSecretInput take_ownership(Handle h) noexcept;
    explicit HMACGetSecretInput(const emlite::Val &val) noexcept;
    HMACGetSecretInput() noexcept;
    [[nodiscard]] HMACGetSecretInput clone() const noexcept;
    [[nodiscard]] jsbind::ArrayBuffer salt1() const;
    void salt1(const jsbind::ArrayBuffer& value);
    [[nodiscard]] jsbind::ArrayBuffer salt2() const;
    void salt2(const jsbind::ArrayBuffer& value);
};

} // namespace webbind