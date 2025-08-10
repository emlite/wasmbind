#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ImageResource.hpp"

namespace webbind {

/// Dictionary type ContentDescription
/// [`ContentDescription`](https://developer.mozilla.org/en-US/docs/Web/API/ContentDescription)
class ContentDescription : public emlite::Val {
  explicit ContentDescription(Handle h) noexcept;
public:
    static ContentDescription take_ownership(Handle h) noexcept;
    explicit ContentDescription(const emlite::Val &val) noexcept;
    ContentDescription() noexcept;
    [[nodiscard]] ContentDescription clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] jsbind::String description() const;
    void description(const jsbind::String& value);
    [[nodiscard]] ContentCategory category() const;
    void category(const ContentCategory& value);
    [[nodiscard]] jsbind::TypedArray<ImageResource> icons() const;
    void icons(const jsbind::TypedArray<ImageResource>& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

} // namespace webbind