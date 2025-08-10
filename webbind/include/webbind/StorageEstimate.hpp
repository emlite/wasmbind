#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StorageEstimate
class StorageEstimate : public emlite::Val {
  explicit StorageEstimate(Handle h) noexcept;
public:
    static StorageEstimate take_ownership(Handle h) noexcept;
    explicit StorageEstimate(const emlite::Val &val) noexcept;
    StorageEstimate() noexcept;
    [[nodiscard]] StorageEstimate clone() const noexcept;
    /// Getter of the `usage` attribute.
    [[nodiscard]] long long usage() const;
    /// Setter of the `usage` attribute.
    void usage(long long value);
    /// Getter of the `quota` attribute.
    [[nodiscard]] long long quota() const;
    /// Setter of the `quota` attribute.
    void quota(long long value);
};

} // namespace webbind