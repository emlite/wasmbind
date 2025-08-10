#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ImageResource.hpp"

namespace webbind {

/// Dictionary type BackgroundFetchUIOptions
/// [`BackgroundFetchUIOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUIOptions)
class BackgroundFetchUIOptions : public emlite::Val {
  explicit BackgroundFetchUIOptions(Handle h) noexcept;
public:
    static BackgroundFetchUIOptions take_ownership(Handle h) noexcept;
    explicit BackgroundFetchUIOptions(const emlite::Val &val) noexcept;
    BackgroundFetchUIOptions() noexcept;
    [[nodiscard]] BackgroundFetchUIOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<ImageResource> icons() const;
    void icons(const jsbind::TypedArray<ImageResource>& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
};

} // namespace webbind