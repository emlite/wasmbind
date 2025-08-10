#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ImageResource.hpp"

namespace webbind {

/// Dictionary type BackgroundFetchUIOptions
class BackgroundFetchUIOptions : public emlite::Val {
  explicit BackgroundFetchUIOptions(Handle h) noexcept;
public:
    static BackgroundFetchUIOptions take_ownership(Handle h) noexcept;
    explicit BackgroundFetchUIOptions(const emlite::Val &val) noexcept;
    BackgroundFetchUIOptions() noexcept;
    [[nodiscard]] BackgroundFetchUIOptions clone() const noexcept;
    /// Getter of the `icons` attribute.
    [[nodiscard]] jsbind::TypedArray<ImageResource> icons() const;
    /// Setter of the `icons` attribute.
    void icons(const jsbind::TypedArray<ImageResource>& value);
    /// Getter of the `title` attribute.
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    void title(const jsbind::String& value);
};

} // namespace webbind