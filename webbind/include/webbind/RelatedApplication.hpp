#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RelatedApplication
/// [`RelatedApplication`](https://developer.mozilla.org/en-US/docs/Web/API/RelatedApplication)
class RelatedApplication : public emlite::Val {
  explicit RelatedApplication(Handle h) noexcept;
public:
    static RelatedApplication take_ownership(Handle h) noexcept;
    explicit RelatedApplication(const emlite::Val &val) noexcept;
    RelatedApplication() noexcept;
    [[nodiscard]] RelatedApplication clone() const noexcept;
    [[nodiscard]] jsbind::String platform() const;
    void platform(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String version() const;
    void version(const jsbind::String& value);
};

} // namespace webbind