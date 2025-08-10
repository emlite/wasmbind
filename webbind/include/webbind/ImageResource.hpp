#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageResource
/// [`ImageResource`](https://developer.mozilla.org/en-US/docs/Web/API/ImageResource)
class ImageResource : public emlite::Val {
  explicit ImageResource(Handle h) noexcept;
public:
    static ImageResource take_ownership(Handle h) noexcept;
    explicit ImageResource(const emlite::Val &val) noexcept;
    ImageResource() noexcept;
    [[nodiscard]] ImageResource clone() const noexcept;
    [[nodiscard]] jsbind::String src() const;
    void src(const jsbind::String& value);
    [[nodiscard]] jsbind::String sizes() const;
    void sizes(const jsbind::String& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
};

} // namespace webbind