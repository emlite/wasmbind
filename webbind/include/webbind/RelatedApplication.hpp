#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RelatedApplication
class RelatedApplication : public emlite::Val {
  explicit RelatedApplication(Handle h) noexcept;
public:
    static RelatedApplication take_ownership(Handle h) noexcept;
    explicit RelatedApplication(const emlite::Val &val) noexcept;
    RelatedApplication() noexcept;
    [[nodiscard]] RelatedApplication clone() const noexcept;
    /// Getter of the `platform` attribute.
    [[nodiscard]] jsbind::String platform() const;
    /// Setter of the `platform` attribute.
    void platform(const jsbind::String& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `version` attribute.
    [[nodiscard]] jsbind::String version() const;
    /// Setter of the `version` attribute.
    void version(const jsbind::String& value);
};

} // namespace webbind