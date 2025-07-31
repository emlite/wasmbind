#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Plugin;


/// The PluginArray class.
/// [`PluginArray`](https://developer.mozilla.org/en-US/docs/Web/API/PluginArray)
class PluginArray : public emlite::Val {
    explicit PluginArray(Handle h) noexcept;

public:
    explicit PluginArray(const emlite::Val &val) noexcept;
    static PluginArray take_ownership(Handle h) noexcept;

    [[nodiscard]] PluginArray clone() const noexcept;
    /// The refresh method.
    /// [`PluginArray.refresh`](https://developer.mozilla.org/en-US/docs/Web/API/PluginArray/refresh)
    jsbind::Undefined refresh();
    /// Getter of the `length` attribute.
    /// [`PluginArray.length`](https://developer.mozilla.org/en-US/docs/Web/API/PluginArray/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`PluginArray.item`](https://developer.mozilla.org/en-US/docs/Web/API/PluginArray/item)
    Plugin item(unsigned long index);
    /// The namedItem method.
    /// [`PluginArray.namedItem`](https://developer.mozilla.org/en-US/docs/Web/API/PluginArray/namedItem)
    Plugin namedItem(const jsbind::String& name);
};

