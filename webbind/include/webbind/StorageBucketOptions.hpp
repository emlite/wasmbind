#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StorageBucketOptions
/// [`StorageBucketOptions`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketOptions)
class StorageBucketOptions : public emlite::Val {
  explicit StorageBucketOptions(Handle h) noexcept;
public:
    static StorageBucketOptions take_ownership(Handle h) noexcept;
    explicit StorageBucketOptions(const emlite::Val &val) noexcept;
    StorageBucketOptions() noexcept;
    [[nodiscard]] StorageBucketOptions clone() const noexcept;
    [[nodiscard]] bool persisted() const;
    void persisted(bool value);
    [[nodiscard]] long long quota() const;
    void quota(long long value);
    [[nodiscard]] jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
};

} // namespace webbind