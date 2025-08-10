#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RsaKeyGenParams.hpp"

namespace webbind {

/// Dictionary type RsaHashedKeyGenParams
class RsaHashedKeyGenParams : public RsaKeyGenParams {
  explicit RsaHashedKeyGenParams(Handle h) noexcept;
public:
    static RsaHashedKeyGenParams take_ownership(Handle h) noexcept;
    explicit RsaHashedKeyGenParams(const emlite::Val &val) noexcept;
    RsaHashedKeyGenParams() noexcept;
    [[nodiscard]] RsaHashedKeyGenParams clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::Any hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::Any& value);
};

} // namespace webbind