#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DocumentFragment;


class HTMLTemplateElement : public HTMLElement {
    explicit HTMLTemplateElement(Handle h) noexcept;

public:
    explicit HTMLTemplateElement(const emlite::Val &val) noexcept;
    static HTMLTemplateElement take_ownership(Handle h) noexcept;

    HTMLTemplateElement clone() const noexcept;
    HTMLTemplateElement();
    DocumentFragment content() const;
    jsbind::String shadowRootMode() const;
    void shadowRootMode(const jsbind::String& value);
    bool shadowRootDelegatesFocus() const;
    void shadowRootDelegatesFocus(bool value);
    bool shadowRootClonable() const;
    void shadowRootClonable(bool value);
    bool shadowRootSerializable() const;
    void shadowRootSerializable(bool value);
    jsbind::String shadowRootCustomElementRegistry() const;
    void shadowRootCustomElementRegistry(const jsbind::String& value);
};

