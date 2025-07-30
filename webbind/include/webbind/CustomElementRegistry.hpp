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
    jsbind::String extends() const;
    void extends(const jsbind::String& value);
};

class CustomElementRegistry : public emlite::Val {
    explicit CustomElementRegistry(Handle h) noexcept;

public:
    explicit CustomElementRegistry(const emlite::Val &val) noexcept;
    static CustomElementRegistry take_ownership(Handle h) noexcept;

    CustomElementRegistry clone() const noexcept;
    CustomElementRegistry();
    jsbind::Undefined define(const jsbind::String& name, const jsbind::Function& constructor);
    jsbind::Undefined define(const jsbind::String& name, const jsbind::Function& constructor, const ElementDefinitionOptions& options);
    jsbind::Any get(const jsbind::String& name);
    jsbind::String getName(const jsbind::Function& constructor);
    jsbind::Promise<jsbind::Function> whenDefined(const jsbind::String& name);
    jsbind::Undefined upgrade(const Node& root);
    jsbind::Undefined initialize(const Node& root);
};

