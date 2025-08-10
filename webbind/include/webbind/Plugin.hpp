#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MimeType;

/// Interface Plugin
/// [`Plugin`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin)
class Plugin : public emlite::Val {
    explicit Plugin(Handle h) noexcept;
public:
    explicit Plugin(const emlite::Val &val) noexcept;
    static Plugin take_ownership(Handle h) noexcept;
    [[nodiscard]] Plugin clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`Plugin.name`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `description` attribute.
    /// [`Plugin.description`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/description)
    [[nodiscard]] jsbind::String description() const;
    /// Getter of the `filename` attribute.
    /// [`Plugin.filename`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/filename)
    [[nodiscard]] jsbind::String filename() const;
    /// Getter of the `length` attribute.
    /// [`Plugin.length`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`Plugin.item`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/item)
    MimeType item(unsigned long index);
    /// The namedItem method.
    /// [`Plugin.namedItem`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/namedItem)
    MimeType namedItem(const jsbind::String& name);
};

} // namespace webbind