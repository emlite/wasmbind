#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MimeType;

/// Interface MimeTypeArray
/// [`MimeTypeArray`](https://developer.mozilla.org/en-US/docs/Web/API/MimeTypeArray)
class MimeTypeArray : public emlite::Val {
    explicit MimeTypeArray(Handle h) noexcept;
public:
    explicit MimeTypeArray(const emlite::Val &val) noexcept;
    static MimeTypeArray take_ownership(Handle h) noexcept;
    [[nodiscard]] MimeTypeArray clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`MimeTypeArray.length`](https://developer.mozilla.org/en-US/docs/Web/API/MimeTypeArray/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`MimeTypeArray.item`](https://developer.mozilla.org/en-US/docs/Web/API/MimeTypeArray/item)
    MimeType item(unsigned long index);
    /// The namedItem method.
    /// [`MimeTypeArray.namedItem`](https://developer.mozilla.org/en-US/docs/Web/API/MimeTypeArray/namedItem)
    MimeType namedItem(const jsbind::String& name);
};

} // namespace webbind