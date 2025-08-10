#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Plugin;

/// Interface MimeType
/// [`MimeType`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType)
class MimeType : public emlite::Val {
    explicit MimeType(Handle h) noexcept;
public:
    explicit MimeType(const emlite::Val &val) noexcept;
    static MimeType take_ownership(Handle h) noexcept;
    [[nodiscard]] MimeType clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MimeType.type`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/type)
    /// [`MimeType.type`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/type)
    [[nodiscard]] jsbind::String type() const;
    /// [`MimeType.description`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/description)
    /// [`MimeType.description`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/description)
    [[nodiscard]] jsbind::String description() const;
    /// [`MimeType.suffixes`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/suffixes)
    /// [`MimeType.suffixes`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/suffixes)
    [[nodiscard]] jsbind::String suffixes() const;
    /// [`MimeType.enabledPlugin`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/enabledPlugin)
    /// [`MimeType.enabledPlugin`](https://developer.mozilla.org/en-US/docs/Web/API/MimeType/enabledPlugin)
    [[nodiscard]] Plugin enabledPlugin() const;
};

} // namespace webbind