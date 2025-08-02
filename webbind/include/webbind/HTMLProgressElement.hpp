#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class NodeList;


/// The HTMLProgressElement class.
/// [`HTMLProgressElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement)
class HTMLProgressElement : public HTMLElement {
    explicit HTMLProgressElement(Handle h) noexcept;

public:
    explicit HTMLProgressElement(const emlite::Val &val) noexcept;
    static HTMLProgressElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLProgressElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLProgressElement(..)` constructor, creating a new HTMLProgressElement instance
    HTMLProgressElement();
    /// Getter of the `value` attribute.
    /// [`HTMLProgressElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement/value)
    [[nodiscard]] double value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLProgressElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement/value)
    void value(double value);
    /// Getter of the `max` attribute.
    /// [`HTMLProgressElement.max`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement/max)
    [[nodiscard]] double max() const;
    /// Setter of the `max` attribute.
    /// [`HTMLProgressElement.max`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement/max)
    void max(double value);
    /// Getter of the `position` attribute.
    /// [`HTMLProgressElement.position`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement/position)
    [[nodiscard]] double position() const;
    /// Getter of the `labels` attribute.
    /// [`HTMLProgressElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement/labels)
    [[nodiscard]] NodeList labels() const;
};

