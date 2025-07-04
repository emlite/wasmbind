#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ElementDefinitionOptions;
class Node;


class ElementDefinitionOptions : public emlite::Val {
  explicit ElementDefinitionOptions(Handle h) noexcept;
public:
    static ElementDefinitionOptions take_ownership(Handle h) noexcept;
    explicit ElementDefinitionOptions(const emlite::Val &val) noexcept;
    ElementDefinitionOptions() noexcept;
    ElementDefinitionOptions clone() const noexcept;
    jsbind::DOMString extends() const;
    void extends(const jsbind::DOMString& value);
};

class CustomElementRegistry : public emlite::Val {
    explicit CustomElementRegistry(Handle h) noexcept;

public:
    explicit CustomElementRegistry(const emlite::Val &val) noexcept;
    static CustomElementRegistry take_ownership(Handle h) noexcept;

    CustomElementRegistry clone() const noexcept;
    CustomElementRegistry();
    jsbind::Undefined define(const jsbind::DOMString& name, const jsbind::Function& constructor, const ElementDefinitionOptions& options);
    jsbind::Any get(const jsbind::DOMString& name);
    jsbind::DOMString getName(const jsbind::Function& constructor);
    jsbind::Promise whenDefined(const jsbind::DOMString& name);
    jsbind::Undefined upgrade(const Node& root);
    jsbind::Undefined initialize(const Node& root);
};

