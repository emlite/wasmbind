#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class Document;
class ValidityState;


/// The HTMLObjectElement class.
/// [`HTMLObjectElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement)
class HTMLObjectElement : public HTMLElement {
    explicit HTMLObjectElement(Handle h) noexcept;

public:
    explicit HTMLObjectElement(const emlite::Val &val) noexcept;
    static HTMLObjectElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLObjectElement clone() const noexcept;
    /// The `new HTMLObjectElement(..)` constructor, creating a new HTMLObjectElement instance
    HTMLObjectElement();
    /// Getter of the `data` attribute.
    /// [`HTMLObjectElement.data`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/data)
    [[nodiscard]] jsbind::String data() const;
    /// Setter of the `data` attribute.
    /// [`HTMLObjectElement.data`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/data)
    void data(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`HTMLObjectElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLObjectElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `name` attribute.
    /// [`HTMLObjectElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLObjectElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `form` attribute.
    /// [`HTMLObjectElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// Getter of the `width` attribute.
    /// [`HTMLObjectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLObjectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/width)
    void width(const jsbind::String& value);
    /// Getter of the `height` attribute.
    /// [`HTMLObjectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/height)
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLObjectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/height)
    void height(const jsbind::String& value);
    /// Getter of the `contentDocument` attribute.
    /// [`HTMLObjectElement.contentDocument`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/contentDocument)
    [[nodiscard]] Document contentDocument() const;
    /// Getter of the `contentWindow` attribute.
    /// [`HTMLObjectElement.contentWindow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/contentWindow)
    [[nodiscard]] jsbind::Any contentWindow() const;
    /// The getSVGDocument method.
    /// [`HTMLObjectElement.getSVGDocument`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/getSVGDocument)
    Document getSVGDocument();
    /// Getter of the `willValidate` attribute.
    /// [`HTMLObjectElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// Getter of the `validity` attribute.
    /// [`HTMLObjectElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// Getter of the `validationMessage` attribute.
    /// [`HTMLObjectElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`HTMLObjectElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLObjectElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/reportValidity)
    bool reportValidity();
    /// The setCustomValidity method.
    /// [`HTMLObjectElement.setCustomValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/setCustomValidity)
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    /// Getter of the `align` attribute.
    /// [`HTMLObjectElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLObjectElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `archive` attribute.
    /// [`HTMLObjectElement.archive`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/archive)
    [[nodiscard]] jsbind::String archive() const;
    /// Setter of the `archive` attribute.
    /// [`HTMLObjectElement.archive`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/archive)
    void archive(const jsbind::String& value);
    /// Getter of the `code` attribute.
    /// [`HTMLObjectElement.code`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/code)
    [[nodiscard]] jsbind::String code() const;
    /// Setter of the `code` attribute.
    /// [`HTMLObjectElement.code`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/code)
    void code(const jsbind::String& value);
    /// Getter of the `declare` attribute.
    /// [`HTMLObjectElement.declare`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/declare)
    [[nodiscard]] bool declare() const;
    /// Setter of the `declare` attribute.
    /// [`HTMLObjectElement.declare`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/declare)
    void declare(bool value);
    /// Getter of the `hspace` attribute.
    /// [`HTMLObjectElement.hspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/hspace)
    [[nodiscard]] unsigned long hspace() const;
    /// Setter of the `hspace` attribute.
    /// [`HTMLObjectElement.hspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/hspace)
    void hspace(unsigned long value);
    /// Getter of the `standby` attribute.
    /// [`HTMLObjectElement.standby`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/standby)
    [[nodiscard]] jsbind::String standby() const;
    /// Setter of the `standby` attribute.
    /// [`HTMLObjectElement.standby`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/standby)
    void standby(const jsbind::String& value);
    /// Getter of the `vspace` attribute.
    /// [`HTMLObjectElement.vspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/vspace)
    [[nodiscard]] unsigned long vspace() const;
    /// Setter of the `vspace` attribute.
    /// [`HTMLObjectElement.vspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/vspace)
    void vspace(unsigned long value);
    /// Getter of the `codeBase` attribute.
    /// [`HTMLObjectElement.codeBase`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/codeBase)
    [[nodiscard]] jsbind::String codeBase() const;
    /// Setter of the `codeBase` attribute.
    /// [`HTMLObjectElement.codeBase`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/codeBase)
    void codeBase(const jsbind::String& value);
    /// Getter of the `codeType` attribute.
    /// [`HTMLObjectElement.codeType`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/codeType)
    [[nodiscard]] jsbind::String codeType() const;
    /// Setter of the `codeType` attribute.
    /// [`HTMLObjectElement.codeType`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/codeType)
    void codeType(const jsbind::String& value);
    /// Getter of the `useMap` attribute.
    /// [`HTMLObjectElement.useMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/useMap)
    [[nodiscard]] jsbind::String useMap() const;
    /// Setter of the `useMap` attribute.
    /// [`HTMLObjectElement.useMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/useMap)
    void useMap(const jsbind::String& value);
    /// Getter of the `border` attribute.
    /// [`HTMLObjectElement.border`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/border)
    [[nodiscard]] jsbind::String border() const;
    /// Setter of the `border` attribute.
    /// [`HTMLObjectElement.border`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement/border)
    void border(const jsbind::String& value);
};

