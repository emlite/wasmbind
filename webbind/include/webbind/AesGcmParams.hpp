#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesGcmParams
/// [`AesGcmParams`](https://developer.mozilla.org/en-US/docs/Web/API/AesGcmParams)
class AesGcmParams : public Algorithm {
  explicit AesGcmParams(Handle h) noexcept;
public:
    static AesGcmParams take_ownership(Handle h) noexcept;
    explicit AesGcmParams(const emlite::Val &val) noexcept;
    AesGcmParams() noexcept;
    [[nodiscard]] AesGcmParams clone() const noexcept;
    [[nodiscard]] jsbind::Any iv() const;
    void iv(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any additionalData() const;
    void additionalData(const jsbind::Any& value);
    [[nodiscard]] unsigned char tagLength() const;
    void tagLength(unsigned char value);
};

} // namespace webbind