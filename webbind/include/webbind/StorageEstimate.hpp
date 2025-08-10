#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StorageEstimate
/// [`StorageEstimate`](https://developer.mozilla.org/en-US/docs/Web/API/StorageEstimate)
class StorageEstimate : public emlite::Val {
  explicit StorageEstimate(Handle h) noexcept;
public:
    static StorageEstimate take_ownership(Handle h) noexcept;
    explicit StorageEstimate(const emlite::Val &val) noexcept;
    StorageEstimate() noexcept;
    [[nodiscard]] StorageEstimate clone() const noexcept;
    [[nodiscard]] long long usage() const;
    void usage(long long value);
    [[nodiscard]] long long quota() const;
    void quota(long long value);
};

} // namespace webbind