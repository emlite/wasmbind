#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface DOMException
/// [`DOMException`](https://developer.mozilla.org/en-US/docs/Web/API/DOMException)
class DOMException : public emlite::Val {
    explicit DOMException(Handle h) noexcept;
public:
    explicit DOMException(const emlite::Val &val) noexcept;
    static DOMException take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMException clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DOMException(..)` constructor, creating a new DOMException instance
    DOMException();
    /// The `new DOMException(..)` constructor, creating a new DOMException instance
    DOMException(const jsbind::String& message);
    /// The `new DOMException(..)` constructor, creating a new DOMException instance
    DOMException(const jsbind::String& message, const jsbind::String& name);
    /// [`DOMException.name`](https://developer.mozilla.org/en-US/docs/Web/API/DOMException/name)
    /// [`DOMException.name`](https://developer.mozilla.org/en-US/docs/Web/API/DOMException/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`DOMException.message`](https://developer.mozilla.org/en-US/docs/Web/API/DOMException/message)
    /// [`DOMException.message`](https://developer.mozilla.org/en-US/docs/Web/API/DOMException/message)
    [[nodiscard]] jsbind::String message() const;
    /// [`DOMException.code`](https://developer.mozilla.org/en-US/docs/Web/API/DOMException/code)
    /// [`DOMException.code`](https://developer.mozilla.org/en-US/docs/Web/API/DOMException/code)
    [[nodiscard]] unsigned short code() const;
};

} // namespace webbind