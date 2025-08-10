#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type RsaHashedImportParams
/// [`RsaHashedImportParams`](https://developer.mozilla.org/en-US/docs/Web/API/RsaHashedImportParams)
class RsaHashedImportParams : public Algorithm {
  explicit RsaHashedImportParams(Handle h) noexcept;
public:
    static RsaHashedImportParams take_ownership(Handle h) noexcept;
    explicit RsaHashedImportParams(const emlite::Val &val) noexcept;
    RsaHashedImportParams() noexcept;
    [[nodiscard]] RsaHashedImportParams clone() const noexcept;
    [[nodiscard]] jsbind::Any hash() const;
    void hash(const jsbind::Any& value);
};

} // namespace webbind