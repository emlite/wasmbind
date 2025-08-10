#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type RsaHashedImportParams
class RsaHashedImportParams : public Algorithm {
  explicit RsaHashedImportParams(Handle h) noexcept;
public:
    static RsaHashedImportParams take_ownership(Handle h) noexcept;
    explicit RsaHashedImportParams(const emlite::Val &val) noexcept;
    RsaHashedImportParams() noexcept;
    [[nodiscard]] RsaHashedImportParams clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::Any hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::Any& value);
};

} // namespace webbind