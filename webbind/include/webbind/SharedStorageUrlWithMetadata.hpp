#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SharedStorageUrlWithMetadata
/// [`SharedStorageUrlWithMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageUrlWithMetadata)
class SharedStorageUrlWithMetadata : public emlite::Val {
  explicit SharedStorageUrlWithMetadata(Handle h) noexcept;
public:
    static SharedStorageUrlWithMetadata take_ownership(Handle h) noexcept;
    explicit SharedStorageUrlWithMetadata(const emlite::Val &val) noexcept;
    SharedStorageUrlWithMetadata() noexcept;
    [[nodiscard]] SharedStorageUrlWithMetadata clone() const noexcept;
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] jsbind::Object reportingMetadata() const;
    void reportingMetadata(const jsbind::Object& value);
};

} // namespace webbind