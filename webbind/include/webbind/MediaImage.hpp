#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaImage
/// [`MediaImage`](https://developer.mozilla.org/en-US/docs/Web/API/MediaImage)
class MediaImage : public emlite::Val {
  explicit MediaImage(Handle h) noexcept;
public:
    static MediaImage take_ownership(Handle h) noexcept;
    explicit MediaImage(const emlite::Val &val) noexcept;
    MediaImage() noexcept;
    [[nodiscard]] MediaImage clone() const noexcept;
    [[nodiscard]] jsbind::String src() const;
    void src(const jsbind::String& value);
    [[nodiscard]] jsbind::String sizes() const;
    void sizes(const jsbind::String& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
};

} // namespace webbind