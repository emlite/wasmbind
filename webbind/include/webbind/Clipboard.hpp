#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class ClipboardUnsanitizedFormats;

/// Interface Clipboard
/// [`Clipboard`](https://developer.mozilla.org/en-US/docs/Web/API/Clipboard)
class Clipboard : public EventTarget {
    explicit Clipboard(Handle h) noexcept;
public:
    explicit Clipboard(const emlite::Val &val) noexcept;
    static Clipboard take_ownership(Handle h) noexcept;
    [[nodiscard]] Clipboard clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The read method.
    /// [`Clipboard.read`](https://developer.mozilla.org/en-US/docs/Web/API/Clipboard/read)
    jsbind::Promise<jsbind::Any> read();
    /// The read method.
    /// [`Clipboard.read`](https://developer.mozilla.org/en-US/docs/Web/API/Clipboard/read)
    jsbind::Promise<jsbind::Any> read(const ClipboardUnsanitizedFormats& formats);
    /// The readText method.
    /// [`Clipboard.readText`](https://developer.mozilla.org/en-US/docs/Web/API/Clipboard/readText)
    jsbind::Promise<jsbind::String> readText();
    /// The write method.
    /// [`Clipboard.write`](https://developer.mozilla.org/en-US/docs/Web/API/Clipboard/write)
    jsbind::Promise<jsbind::Undefined> write(const jsbind::Any& data);
    /// The writeText method.
    /// [`Clipboard.writeText`](https://developer.mozilla.org/en-US/docs/Web/API/Clipboard/writeText)
    jsbind::Promise<jsbind::Undefined> writeText(const jsbind::String& data);
};

} // namespace webbind