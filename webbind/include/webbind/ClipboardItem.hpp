#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ClipboardItemOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Blob;

/// Interface ClipboardItem
/// [`ClipboardItem`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardItem)
class ClipboardItem : public emlite::Val {
    explicit ClipboardItem(Handle h) noexcept;
public:
    explicit ClipboardItem(const emlite::Val &val) noexcept;
    static ClipboardItem take_ownership(Handle h) noexcept;
    [[nodiscard]] ClipboardItem clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ClipboardItem(..)` constructor, creating a new ClipboardItem instance
    ClipboardItem(const jsbind::Record<jsbind::String, jsbind::Any>& items);
    /// The `new ClipboardItem(..)` constructor, creating a new ClipboardItem instance
    ClipboardItem(const jsbind::Record<jsbind::String, jsbind::Any>& items, const ClipboardItemOptions& options);
    /// Getter of the `presentationStyle` attribute.
    /// [`ClipboardItem.presentationStyle`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardItem/presentationStyle)
    [[nodiscard]] PresentationStyle presentationStyle() const;
    /// Getter of the `types` attribute.
    /// [`ClipboardItem.types`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardItem/types)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    /// The getType method.
    /// [`ClipboardItem.getType`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardItem/getType)
    jsbind::Promise<Blob> getType(const jsbind::String& type);
    /// The supports method.
    /// [`ClipboardItem.supports`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardItem/supports)
    static bool supports(const jsbind::String& type);
};

} // namespace webbind