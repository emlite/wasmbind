#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLParamElement class.
/// [`HTMLParamElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement)
class HTMLParamElement : public HTMLElement {
    explicit HTMLParamElement(Handle h) noexcept;

public:
    explicit HTMLParamElement(const emlite::Val &val) noexcept;
    static HTMLParamElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLParamElement clone() const noexcept;
    /// The `new HTMLParamElement(..)` constructor, creating a new HTMLParamElement instance
    HTMLParamElement();
    /// Getter of the `name` attribute.
    /// [`HTMLParamElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLParamElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `value` attribute.
    /// [`HTMLParamElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLParamElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/value)
    void value(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`HTMLParamElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLParamElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `valueType` attribute.
    /// [`HTMLParamElement.valueType`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/valueType)
    [[nodiscard]] jsbind::String valueType() const;
    /// Setter of the `valueType` attribute.
    /// [`HTMLParamElement.valueType`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement/valueType)
    void valueType(const jsbind::String& value);
};

