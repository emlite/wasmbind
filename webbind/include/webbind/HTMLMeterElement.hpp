#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class NodeList;


/// The HTMLMeterElement class.
/// [`HTMLMeterElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement)
class HTMLMeterElement : public HTMLElement {
    explicit HTMLMeterElement(Handle h) noexcept;

public:
    explicit HTMLMeterElement(const emlite::Val &val) noexcept;
    static HTMLMeterElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLMeterElement clone() const noexcept;
    /// The `new HTMLMeterElement(..)` constructor, creating a new HTMLMeterElement instance
    HTMLMeterElement();
    /// Getter of the `value` attribute.
    /// [`HTMLMeterElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/value)
    [[nodiscard]] double value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLMeterElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/value)
    void value(double value);
    /// Getter of the `min` attribute.
    /// [`HTMLMeterElement.min`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/min)
    [[nodiscard]] double min() const;
    /// Setter of the `min` attribute.
    /// [`HTMLMeterElement.min`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/min)
    void min(double value);
    /// Getter of the `max` attribute.
    /// [`HTMLMeterElement.max`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/max)
    [[nodiscard]] double max() const;
    /// Setter of the `max` attribute.
    /// [`HTMLMeterElement.max`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/max)
    void max(double value);
    /// Getter of the `low` attribute.
    /// [`HTMLMeterElement.low`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/low)
    [[nodiscard]] double low() const;
    /// Setter of the `low` attribute.
    /// [`HTMLMeterElement.low`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/low)
    void low(double value);
    /// Getter of the `high` attribute.
    /// [`HTMLMeterElement.high`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/high)
    [[nodiscard]] double high() const;
    /// Setter of the `high` attribute.
    /// [`HTMLMeterElement.high`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/high)
    void high(double value);
    /// Getter of the `optimum` attribute.
    /// [`HTMLMeterElement.optimum`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/optimum)
    [[nodiscard]] double optimum() const;
    /// Setter of the `optimum` attribute.
    /// [`HTMLMeterElement.optimum`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/optimum)
    void optimum(double value);
    /// Getter of the `labels` attribute.
    /// [`HTMLMeterElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement/labels)
    [[nodiscard]] NodeList labels() const;
};

