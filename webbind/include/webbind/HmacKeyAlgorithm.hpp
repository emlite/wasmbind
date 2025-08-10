#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type HmacKeyAlgorithm
/// [`HmacKeyAlgorithm`](https://developer.mozilla.org/en-US/docs/Web/API/HmacKeyAlgorithm)
class HmacKeyAlgorithm : public KeyAlgorithm {
  explicit HmacKeyAlgorithm(Handle h) noexcept;
public:
    static HmacKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit HmacKeyAlgorithm(const emlite::Val &val) noexcept;
    HmacKeyAlgorithm() noexcept;
    [[nodiscard]] HmacKeyAlgorithm clone() const noexcept;
    [[nodiscard]] KeyAlgorithm hash() const;
    void hash(const KeyAlgorithm& value);
    [[nodiscard]] unsigned long length() const;
    void length(unsigned long value);
};

} // namespace webbind