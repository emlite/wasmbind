#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ImageResource.hpp"

namespace webbind {

/// Dictionary type ContentDescription
class ContentDescription : public emlite::Val {
  explicit ContentDescription(Handle h) noexcept;
public:
    static ContentDescription take_ownership(Handle h) noexcept;
    explicit ContentDescription(const emlite::Val &val) noexcept;
    ContentDescription() noexcept;
    [[nodiscard]] ContentDescription clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `title` attribute.
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    void title(const jsbind::String& value);
    /// Getter of the `description` attribute.
    [[nodiscard]] jsbind::String description() const;
    /// Setter of the `description` attribute.
    void description(const jsbind::String& value);
    /// Getter of the `category` attribute.
    [[nodiscard]] ContentCategory category() const;
    /// Setter of the `category` attribute.
    void category(const ContentCategory& value);
    /// Getter of the `icons` attribute.
    [[nodiscard]] jsbind::TypedArray<ImageResource> icons() const;
    /// Setter of the `icons` attribute.
    void icons(const jsbind::TypedArray<ImageResource>& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
};

} // namespace webbind