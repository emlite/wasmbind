#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLOListElement
/// [`HTMLOListElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement)
class HTMLOListElement : public HTMLElement {
    explicit HTMLOListElement(Handle h) noexcept;
public:
    explicit HTMLOListElement(const emlite::Val &val) noexcept;
    static HTMLOListElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLOListElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLOListElement(..)` constructor, creating a new HTMLOListElement instance
    HTMLOListElement();
    /// [`HTMLOListElement.reversed`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/reversed)
    /// [`HTMLOListElement.reversed`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/reversed)
    [[nodiscard]] bool reversed() const;
    /// Setter of the `reversed` attribute.
    /// [`HTMLOListElement.reversed`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/reversed)
    void reversed(bool value);
    /// [`HTMLOListElement.start`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/start)
    /// [`HTMLOListElement.start`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/start)
    [[nodiscard]] long start() const;
    /// Setter of the `start` attribute.
    /// [`HTMLOListElement.start`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/start)
    void start(long value);
    /// [`HTMLOListElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/type)
    /// [`HTMLOListElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLOListElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/type)
    void type(const jsbind::String& value);
    /// [`HTMLOListElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/compact)
    /// [`HTMLOListElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/compact)
    [[nodiscard]] bool compact() const;
    /// Setter of the `compact` attribute.
    /// [`HTMLOListElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement/compact)
    void compact(bool value);
};

} // namespace webbind