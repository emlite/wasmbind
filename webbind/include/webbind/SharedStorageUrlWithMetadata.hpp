#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SharedStorageUrlWithMetadata
class SharedStorageUrlWithMetadata : public emlite::Val {
  explicit SharedStorageUrlWithMetadata(Handle h) noexcept;
public:
    static SharedStorageUrlWithMetadata take_ownership(Handle h) noexcept;
    explicit SharedStorageUrlWithMetadata(const emlite::Val &val) noexcept;
    SharedStorageUrlWithMetadata() noexcept;
    [[nodiscard]] SharedStorageUrlWithMetadata clone() const noexcept;
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `reportingMetadata` attribute.
    [[nodiscard]] jsbind::Object reportingMetadata() const;
    /// Setter of the `reportingMetadata` attribute.
    void reportingMetadata(const jsbind::Object& value);
};

} // namespace webbind