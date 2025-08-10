#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StorageBucketOptions
class StorageBucketOptions : public emlite::Val {
  explicit StorageBucketOptions(Handle h) noexcept;
public:
    static StorageBucketOptions take_ownership(Handle h) noexcept;
    explicit StorageBucketOptions(const emlite::Val &val) noexcept;
    StorageBucketOptions() noexcept;
    [[nodiscard]] StorageBucketOptions clone() const noexcept;
    /// Getter of the `persisted` attribute.
    [[nodiscard]] bool persisted() const;
    /// Setter of the `persisted` attribute.
    void persisted(bool value);
    /// Getter of the `quota` attribute.
    [[nodiscard]] long long quota() const;
    /// Setter of the `quota` attribute.
    void quota(long long value);
    /// Getter of the `expires` attribute.
    [[nodiscard]] jsbind::Any expires() const;
    /// Setter of the `expires` attribute.
    void expires(const jsbind::Any& value);
};

} // namespace webbind