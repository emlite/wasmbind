#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class Document;
class ValidityState;


class HTMLObjectElement : public HTMLElement {
    explicit HTMLObjectElement(Handle h) noexcept;

public:
    explicit HTMLObjectElement(const emlite::Val &val) noexcept;
    static HTMLObjectElement take_ownership(Handle h) noexcept;

    HTMLObjectElement clone() const noexcept;
    HTMLObjectElement();
    jsbind::String data() const;
    void data(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
    HTMLFormElement form() const;
    jsbind::String width() const;
    void width(const jsbind::String& value);
    jsbind::String height() const;
    void height(const jsbind::String& value);
    Document contentDocument() const;
    jsbind::Any contentWindow() const;
    Document getSVGDocument();
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::String validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String archive() const;
    void archive(const jsbind::String& value);
    jsbind::String code() const;
    void code(const jsbind::String& value);
    bool declare() const;
    void declare(bool value);
    unsigned long hspace() const;
    void hspace(unsigned long value);
    jsbind::String standby() const;
    void standby(const jsbind::String& value);
    unsigned long vspace() const;
    void vspace(unsigned long value);
    jsbind::String codeBase() const;
    void codeBase(const jsbind::String& value);
    jsbind::String codeType() const;
    void codeType(const jsbind::String& value);
    jsbind::String useMap() const;
    void useMap(const jsbind::String& value);
    jsbind::String border() const;
    void border(const jsbind::String& value);
};

