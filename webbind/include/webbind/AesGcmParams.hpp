#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesGcmParams
class AesGcmParams : public Algorithm {
  explicit AesGcmParams(Handle h) noexcept;
public:
    static AesGcmParams take_ownership(Handle h) noexcept;
    explicit AesGcmParams(const emlite::Val &val) noexcept;
    AesGcmParams() noexcept;
    [[nodiscard]] AesGcmParams clone() const noexcept;
    /// Getter of the `iv` attribute.
    [[nodiscard]] jsbind::Any iv() const;
    /// Setter of the `iv` attribute.
    void iv(const jsbind::Any& value);
    /// Getter of the `additionalData` attribute.
    [[nodiscard]] jsbind::Any additionalData() const;
    /// Setter of the `additionalData` attribute.
    void additionalData(const jsbind::Any& value);
    /// Getter of the `tagLength` attribute.
    [[nodiscard]] unsigned char tagLength() const;
    /// Setter of the `tagLength` attribute.
    void tagLength(unsigned char value);
};

} // namespace webbind