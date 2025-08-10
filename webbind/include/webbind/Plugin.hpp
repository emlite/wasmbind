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
    /// [`Plugin.name`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/name)
    /// [`Plugin.name`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`Plugin.description`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/description)
    /// [`Plugin.description`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/description)
    [[nodiscard]] jsbind::String description() const;
    /// [`Plugin.filename`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/filename)
    /// [`Plugin.filename`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/filename)
    [[nodiscard]] jsbind::String filename() const;
    /// [`Plugin.length`](https://developer.mozilla.org/en-US/docs/Web/API/Plugin/length)
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