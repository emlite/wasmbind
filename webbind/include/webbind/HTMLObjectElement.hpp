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
    jsbind::USVString data() const;
    void data(const jsbind::USVString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    HTMLFormElement form() const;
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
    jsbind::DOMString height() const;
    void height(const jsbind::DOMString& value);
    Document contentDocument() const;
    jsbind::Any contentWindow() const;
    Document getSVGDocument();
    bool willValidate() const;
    ValidityState validity() const;
    jsbind::DOMString validationMessage() const;
    bool checkValidity();
    bool reportValidity();
    jsbind::Undefined setCustomValidity(const jsbind::DOMString& error);
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString archive() const;
    void archive(const jsbind::DOMString& value);
    jsbind::DOMString code() const;
    void code(const jsbind::DOMString& value);
    bool declare() const;
    void declare(bool value);
    unsigned long hspace() const;
    void hspace(unsigned long value);
    jsbind::DOMString standby() const;
    void standby(const jsbind::DOMString& value);
    unsigned long vspace() const;
    void vspace(unsigned long value);
    jsbind::DOMString codeBase() const;
    void codeBase(const jsbind::DOMString& value);
    jsbind::DOMString codeType() const;
    void codeType(const jsbind::DOMString& value);
    jsbind::DOMString useMap() const;
    void useMap(const jsbind::DOMString& value);
    jsbind::DOMString border() const;
    void border(const jsbind::DOMString& value);
};

