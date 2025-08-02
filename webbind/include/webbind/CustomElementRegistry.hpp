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
    [[nodiscard]] ElementDefinitionOptions clone() const noexcept;
    [[nodiscard]] jsbind::String extends() const;
    void extends(const jsbind::String& value);
};

/// The CustomElementRegistry class.
/// [`CustomElementRegistry`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry)
class CustomElementRegistry : public emlite::Val {
    explicit CustomElementRegistry(Handle h) noexcept;

public:
    explicit CustomElementRegistry(const emlite::Val &val) noexcept;
    static CustomElementRegistry take_ownership(Handle h) noexcept;

    [[nodiscard]] CustomElementRegistry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CustomElementRegistry(..)` constructor, creating a new CustomElementRegistry instance
    CustomElementRegistry();
    /// The define method.
    /// [`CustomElementRegistry.define`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry/define)
    jsbind::Undefined define(const jsbind::String& name, const jsbind::Function& constructor);
    /// The define method.
    /// [`CustomElementRegistry.define`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry/define)
    jsbind::Undefined define(const jsbind::String& name, const jsbind::Function& constructor, const ElementDefinitionOptions& options);
    /// The get method.
    /// [`CustomElementRegistry.get`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry/get)
    jsbind::Any get(const jsbind::String& name);
    /// The getName method.
    /// [`CustomElementRegistry.getName`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry/getName)
    jsbind::String getName(const jsbind::Function& constructor);
    /// The whenDefined method.
    /// [`CustomElementRegistry.whenDefined`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry/whenDefined)
    jsbind::Promise<jsbind::Function> whenDefined(const jsbind::String& name);
    /// The upgrade method.
    /// [`CustomElementRegistry.upgrade`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry/upgrade)
    jsbind::Undefined upgrade(const Node& root);
    /// The initialize method.
    /// [`CustomElementRegistry.initialize`](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry/initialize)
    jsbind::Undefined initialize(const Node& root);
};

