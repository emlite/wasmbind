#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;
class HTMLFormControlsCollection;


class HTMLFormElement : public HTMLElement {
    explicit HTMLFormElement(Handle h) noexcept;

public:
    explicit HTMLFormElement(const emlite::Val &val) noexcept;
    static HTMLFormElement take_ownership(Handle h) noexcept;

    HTMLFormElement clone() const noexcept;
    HTMLFormElement();
    jsbind::DOMString acceptCharset() const;
    void acceptCharset(const jsbind::DOMString& value);
    jsbind::USVString action() const;
    void action(const jsbind::USVString& value);
    jsbind::DOMString autocomplete() const;
    void autocomplete(const jsbind::DOMString& value);
    jsbind::DOMString enctype() const;
    void enctype(const jsbind::DOMString& value);
    jsbind::DOMString encoding() const;
    void encoding(const jsbind::DOMString& value);
    jsbind::DOMString method() const;
    void method(const jsbind::DOMString& value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    bool noValidate() const;
    void noValidate(bool value);
    jsbind::DOMString target() const;
    void target(const jsbind::DOMString& value);
    jsbind::DOMString rel() const;
    void rel(const jsbind::DOMString& value);
    DOMTokenList relList() const;
    HTMLFormControlsCollection elements() const;
    unsigned long length() const;
    jsbind::Undefined submit();
    jsbind::Undefined requestSubmit();
    jsbind::Undefined requestSubmit(const HTMLElement& submitter);
    jsbind::Undefined reset();
    bool checkValidity();
    bool reportValidity();
};

