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
    jsbind::String acceptCharset() const;
    void acceptCharset(const jsbind::String& value);
    jsbind::String action() const;
    void action(const jsbind::String& value);
    jsbind::String autocomplete() const;
    void autocomplete(const jsbind::String& value);
    jsbind::String enctype() const;
    void enctype(const jsbind::String& value);
    jsbind::String encoding() const;
    void encoding(const jsbind::String& value);
    jsbind::String method() const;
    void method(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
    bool noValidate() const;
    void noValidate(bool value);
    jsbind::String target() const;
    void target(const jsbind::String& value);
    jsbind::String rel() const;
    void rel(const jsbind::String& value);
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

